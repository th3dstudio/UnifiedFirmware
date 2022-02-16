@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_F429_DIY" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_F429_DIY"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\BTT_SKR_2_F429_DIY\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_F429_DIY"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\BTT_SKR_2_F429_DIY" "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_F429_DIY"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_F429_DIY\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\BTT_SKR_2_F429_DIY\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"