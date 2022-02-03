@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Wanhao_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Wanhao_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Wanhao_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"