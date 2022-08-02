import json
import os
import shutil
import sys

MARLIN_PATH = "Marlin/"
AUTO_COMPILE_DIR = "Auto-compile-output/"
ENVI_NAME = "BIGTREE_SKR_2"
AUTO_COMPILE_VERSION = "v1.1"
DEBUG = False
SAVE_CONFIG_FILE = True

############################ FUNCTIONS ##################################
def debugMsg(msg):
    if DEBUG:
        print(msg)

def saveFile(fileName,fileData):
    try:
        with open(fileName,'w') as fileToSave:
            fileToSave.writelines(fileData)
            return True
    except IOError as err:
        print(err)
        return False


#########################################################################

print("TH3D Unified firmware auto compiler " + AUTO_COMPILE_VERSION)

# clear the old build folders
try:
    shutil.rmtree(".pio")
except:
    pass

try:
    with open('auto-compile.json', 'r') as f:
        config = json.load(f)
except IOError as err:
    print(err)
    print("Press ENTER to exit.")
    input()
    sys.exit(1)

#print("Cleanup build folder...")
#os.system("platformio run --target clean -e "+ENVI_NAME)

configFileData = ""

#create folder to save compiled file
try:
    os.makedirs(AUTO_COMPILE_DIR, exist_ok=True)
except FileExistsError:
    # directory already exists
    pass

# get the target file name from config
configFile = config['config-file']
print("Target config file : " + configFile)

# loop through each profile
try:
    print("# Trying to read target config file : " + MARLIN_PATH + config['config-file'])
    with open(MARLIN_PATH+configFile, 'r') as file :
        configFileData = file.read()
        #originalConfigFileData = configFileData
        debugMsg(configFileData)
        #backup
        shutil.copy(MARLIN_PATH+configFile,MARLIN_PATH+configFile+".compile.bak")
        
        taskCount = 0
        taskList = []

        # loop through 
        for profile in config['compile-profile']:
            # update task list
            task = {"name":profile['profile-name'],"status":False}
            taskList.append(task)

            tmpConfigFileData = configFileData
            debugMsg(profile)
            print("Making " + configFile + " for " + profile['profile-name'])
            #replace text
            for keyword in profile['keyword']:
                debugMsg(keyword)
                tmpConfigFileData = tmpConfigFileData.replace(keyword['find']+"\n",keyword['replace']+"\n")
            #save file
            debugMsg(tmpConfigFileData)
           
            # overwrite the default config file 
            if saveFile(MARLIN_PATH+configFile,tmpConfigFileData):
                print("Saved OK!\nCompiling...")
                #execute build command
                os.system("platformio run -e "+ENVI_NAME)
                #make folder for the binary file
                try:
                    os.makedirs(AUTO_COMPILE_DIR + profile['profile-name'], exist_ok=True)
                except FileExistsError:
                    pass
                #copy binary file
                print("Copy binary output file to "+AUTO_COMPILE_DIR + profile['profile-name'] + "/" + "firmware.bin")
                try:
                    shutil.copy(".pio/build/"+ ENVI_NAME +"/firmware.bin",AUTO_COMPILE_DIR + profile['profile-name'] + "/" + "firmware.bin")
                    taskList[taskCount]["status"] = True
                except:
                    print("Cannot save firmware.bin")
                 # also save the config file for preference
                if SAVE_CONFIG_FILE:
                    try:
                        saveFile(AUTO_COMPILE_DIR + profile['profile-name'] + "/" + configFile,tmpConfigFileData)
                    except:
                        print("Cannot save config file " + configFile + " for " + profile['profile-name'])
                print("Cleanup build folder...")
                os.system("platformio run --target clean -e "+ENVI_NAME)
            taskCount += 1


        print("\n\nBuild completed! :3")
        # restore the original config file
        print("Restore the original " + configFile + "...")
        saveFile(MARLIN_PATH + configFile,configFileData)
        print("Cleanup build folder...")
        try:
            shutil.rmtree(".pio")
        except:
            pass

        print("")
        for task in taskList:
            if task["status"] == True:
                print('{:<12}  {:<64}'.format("\033[1;32;40m Success \033[1;37;40m",task["name"]))
            else:
                print('{:<12}  {:<64}'.format("\033[1;31;40m Failed  \033[1;37;40m",task["name"]))

        print("\nPress ENTER to exit.")
        input()
        sys.exit(0)
except IOError as err:
    print(err)
    print("Restore the original "+configFile)
    if configFileData != "":
        saveFile(MARLIN_PATH+configFile,configFileData)
    print("Cleanup build folder...")
    try:
        shutil.rmtree(".pio")
    except:
        pass
    print("Press ENTER to exit.")
    input()
    exit(1)
