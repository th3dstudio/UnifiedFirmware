@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Kingroon_V1_2\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Kingroon_V1_2" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"