@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\AnyCubic_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\AnyCubic_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"