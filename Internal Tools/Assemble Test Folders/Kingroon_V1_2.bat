@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Kingroon_V1_2\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Kingroon_V1_2"
