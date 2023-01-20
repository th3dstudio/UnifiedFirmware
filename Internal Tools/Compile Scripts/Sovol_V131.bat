@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Sovol_V131\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Sovol_V131" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_V131\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"