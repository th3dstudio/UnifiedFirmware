@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV24S1_E7\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\CrealityV24S1_E7" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"