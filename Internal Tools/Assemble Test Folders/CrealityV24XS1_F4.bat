@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV24XS1\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"
xcopy /E /I /F /Y "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV24XS1_F4\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\CrealityV24XS1_F4"