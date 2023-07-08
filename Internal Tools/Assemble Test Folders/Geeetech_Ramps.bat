@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Geeetech_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Geeetech_Ramps"
