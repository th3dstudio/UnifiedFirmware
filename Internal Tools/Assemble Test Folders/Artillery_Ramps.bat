@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Artillery_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Artillery_Ramps"