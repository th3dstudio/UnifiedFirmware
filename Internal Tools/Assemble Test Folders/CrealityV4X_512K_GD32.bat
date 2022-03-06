@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K_GD32" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K_GD32"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\CrealityV4X_512K_GD32\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X_512K_GD32"
