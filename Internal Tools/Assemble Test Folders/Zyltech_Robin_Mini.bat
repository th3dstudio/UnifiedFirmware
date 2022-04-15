@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Mini" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Zyltech_Robin_Mini\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Zyltech_Robin_Mini"
