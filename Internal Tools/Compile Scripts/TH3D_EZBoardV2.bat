@echo off

rmdir "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardV2" /s /q
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardV2"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Board_Configs\TH3D_EZBoardV2\Firmware" "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardV2"
xcopy /E /I /F "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts\TH3D_EZBoardV2" "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardV2"
D:
cd "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardV2\"
start python "D:\Work\Printer Firmware\UF2TestBuilds\TH3D_EZBoardV2\auto-compile.py"
cd "D:\Work\GitHub\UnifiedFirmware\Internal Tools\Compile Scripts"