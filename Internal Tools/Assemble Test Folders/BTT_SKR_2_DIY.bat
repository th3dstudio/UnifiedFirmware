@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_DIY" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_DIY"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\BTT_SKR_2_DIY\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_DIY"
