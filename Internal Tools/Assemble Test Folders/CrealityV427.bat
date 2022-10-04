@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV427" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV427"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV427\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV427"
