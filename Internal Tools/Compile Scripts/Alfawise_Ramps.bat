@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Alfawise_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Alfawise_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"