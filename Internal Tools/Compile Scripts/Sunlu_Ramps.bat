@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Sunlu_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sunlu_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Sunlu_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sunlu_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Sunlu_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Sunlu_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Sunlu_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Sunlu_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"