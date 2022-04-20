@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV24XS1\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"
xcopy /E /I /F /Y "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV24XS1_F4\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\CrealityV24XS1_F4" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"