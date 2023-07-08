@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV4X\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV4X"
