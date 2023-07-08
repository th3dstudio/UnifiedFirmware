@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Alfawise_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Alfawise_Ramps"
