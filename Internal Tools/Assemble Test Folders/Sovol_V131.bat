@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Sovol_V131\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131"
