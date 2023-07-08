@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV24S1_E7\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24S1_E7"
