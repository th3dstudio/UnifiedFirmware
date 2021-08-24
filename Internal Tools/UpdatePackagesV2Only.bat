@echo off

"C:\Program Files\7-Zip\7z.exe" d -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\Firmware"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\TH3D Installation Guides"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\EZBoard Installation Guide"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\Pre-Compiled Binaries\EZBoard Pre-Compiled Firmware"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\README.md"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\STL File Download.txt"
"C:\Program Files\7-Zip\7z.exe" a -tZip "D:\Work\Unified2Zips\TH3D_Unified2_TH3D_EZBoardV2.zip" "D:\Work\GitHub\UnifiedFirmware\Board_Configs\TH3D_EZBoardV2\Firmware"