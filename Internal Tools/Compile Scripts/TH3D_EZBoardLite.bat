@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardLite" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardLite"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\TH3D_EZBoardLite\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardLite"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\TH3D_EZBoardLite" "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardLite"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardLite\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardLite\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"