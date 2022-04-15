@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Zyltech_Robin_Nano\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Zyltech_Robin_Nano" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"