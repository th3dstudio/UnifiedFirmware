@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\JGMaker_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\JGMaker_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"