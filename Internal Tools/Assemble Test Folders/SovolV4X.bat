@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\SovolV4X" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SovolV4X"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\SovolV4X\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SovolV4X"
