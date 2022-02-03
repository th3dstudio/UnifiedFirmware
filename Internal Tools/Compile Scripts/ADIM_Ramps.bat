@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\ADIM_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\ADIM_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\ADIM_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"