@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Tina2_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Tina2_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Tina2_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Tina2_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Tina2_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Tina2_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Tina2_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Tina2_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"