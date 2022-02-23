@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Geeetech_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Geeetech_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"