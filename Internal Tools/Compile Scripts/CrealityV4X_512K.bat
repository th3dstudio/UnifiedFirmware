@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV4X_512K\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\CrealityV4X_512K" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"