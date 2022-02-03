@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_Ramps" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\Sovol_Ramps\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_Ramps"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\Sovol_Ramps" "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_Ramps"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_Ramps\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\Sovol_Ramps\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"