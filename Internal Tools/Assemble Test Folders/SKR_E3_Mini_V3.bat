@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\SKR_E3_Mini_V3\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3"
