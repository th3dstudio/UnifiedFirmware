@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV4X\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\CrealityV4X" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"