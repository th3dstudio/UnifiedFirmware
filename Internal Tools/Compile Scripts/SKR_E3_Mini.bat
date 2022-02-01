@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\SKR_E3_Mini\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\SKR_E3_Mini" "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\SKR_E3_Mini\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"