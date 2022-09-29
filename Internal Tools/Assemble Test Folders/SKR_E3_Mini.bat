@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\SKR_E3_Mini\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
