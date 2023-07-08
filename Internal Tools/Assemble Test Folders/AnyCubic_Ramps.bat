@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\AnyCubic_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\AnyCubic_Ramps"
