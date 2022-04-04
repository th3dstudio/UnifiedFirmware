@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_X1_X2" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_X1_X2"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Voxelab_X1_X2\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_X1_X2"
