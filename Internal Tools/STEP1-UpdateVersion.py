import os
import re
from datetime import datetime

def update_version_info(file_path, new_version, new_build_date):
    with open(file_path, 'r') as file:
        content = file.read()

    # Update UNIFIED_VERSION
    content = re.sub(r'#define UNIFIED_VERSION "(.*?)"', f'#define UNIFIED_VERSION "UF {new_version}"', content)

    # Update STRING_DISTRIBUTION_DATE
    content = re.sub(r'#define STRING_DISTRIBUTION_DATE "(.*?)"', f'#define STRING_DISTRIBUTION_DATE "{new_build_date}"', content)

    with open(file_path, 'w') as file:
        file.write(content)

def update_version_in_folders(root_directories, new_version, new_build_date):
    for root_directory in root_directories:
        # Iterate through files in the directory
        for root, dirs, files in os.walk(root_directory):
            for filename in files:
                if filename.endswith("Configuration.h"):
                    file_path = os.path.join(root, filename)
                    update_version_info(file_path, new_version, new_build_date)
                    print(f"Updated {file_path}")

def main():
    new_version = input("Enter the new version number: ")
    new_build_date = datetime.now().strftime("%Y-%m-%d")

    # Specify the root directories containing Configuration.h files
    root_directories = [
        r'D:\Work\GitHub\UnifiedFirmware\Board_Configs',
        r'D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs'
    ]

    update_version_in_folders(root_directories, new_version, new_build_date)

if __name__ == "__main__":
    main()
