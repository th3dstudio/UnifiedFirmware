@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Creality_CR4NS200141C13" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_CR4NS200141C13"
xcopy /E /I /F "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\CrealityV24XS1\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_CR4NS200141C13"
xcopy /E /I /F /Y "D:\Work\GitHub\UnifiedPaidConfigs\Board_Configs\Creality_CR4NS200141C13\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Creality_CR4NS200141C13"