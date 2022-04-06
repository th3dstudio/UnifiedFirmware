@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Voxelab_V1XX\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Voxelab_V1XX" "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Voxelab_V1XX\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"