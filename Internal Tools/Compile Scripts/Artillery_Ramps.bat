@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Artillery_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Artillery_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"