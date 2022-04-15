@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Kingroon_Robin_Mini\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Kingroon_Robin_Mini" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"