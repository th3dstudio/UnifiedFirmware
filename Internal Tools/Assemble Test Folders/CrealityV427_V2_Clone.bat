@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV427_V2_Clone" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV427_V2_Clone"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV427_V2_Clone\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV427_V2_Clone"
