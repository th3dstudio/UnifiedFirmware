@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Melzi" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Creality_Melzi\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_Melzi"
