@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\SKR_E3_Mini\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\SKR_E3_Mini" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"
echo .
echo ..
echo ...
echo ....
echo ......
echo Press any key to continue once the firmware compile finishes...
pause > nul

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\ADIM_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\ADIM_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"
echo .
echo ..
echo ...
echo ....
echo ......
echo Press any key to continue once the firmware compile finishes...
pause > nul

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Alfawise_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Alfawise_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"
echo .
echo ..
echo ...
echo ....
echo ......
echo Press any key to continue once the firmware compile finishes...
pause > nul

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Anet_Melzi\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Anet_Melzi" "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"
echo .
echo ..
echo ...
echo ....
echo ......
echo Press any key to continue once the firmware compile finishes...
pause > nul
