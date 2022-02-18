@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Melzi" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Wanhao_Melzi\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Wanhao_Melzi" "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Melzi"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Melzi\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Melzi\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"