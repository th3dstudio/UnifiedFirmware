@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityE3FreeRuns" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityE3FreeRuns"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityE3FreeRuns\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityE3FreeRuns"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\CrealityE3FreeRuns" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityE3FreeRuns"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\CrealityE3FreeRuns\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\CrealityE3FreeRuns\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"