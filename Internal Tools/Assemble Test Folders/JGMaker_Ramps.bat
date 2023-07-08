@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\JGMaker_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\JGMaker_Ramps"
