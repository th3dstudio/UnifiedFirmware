@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Kingroon_Robin_Mini\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_Robin_Mini"
