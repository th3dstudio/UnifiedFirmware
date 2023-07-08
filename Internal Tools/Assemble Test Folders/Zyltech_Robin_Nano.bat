@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Zyltech_Robin_Nano\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Nano"
