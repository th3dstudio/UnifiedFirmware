@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Anet_Melzi\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Anet_Melzi" "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Anet_Melzi\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"