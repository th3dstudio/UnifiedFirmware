@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Tevo_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Tevo_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Tevo_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Tevo_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Tevo_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Tevo_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Tevo_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Tevo_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"