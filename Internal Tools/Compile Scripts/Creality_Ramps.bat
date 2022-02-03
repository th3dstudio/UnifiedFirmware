@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Creality_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Creality_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"