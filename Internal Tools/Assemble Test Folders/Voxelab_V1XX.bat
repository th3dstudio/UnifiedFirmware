@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Voxelab_V1XX\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX"
