@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\SKR_E3_Mini_V3\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\SKR_E3_Mini_V3" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini_V3\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"