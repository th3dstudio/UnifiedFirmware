@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_256K" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_256K"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV4X_256K\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_256K"
