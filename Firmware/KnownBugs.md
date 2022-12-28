# Known Bugs #

This is a list of bugs are are aware of in the firmware along with workarounds (if any).

**Last Updated:** 12/27/22

----------

## SD Boot Loop ##
**Issue:** Some printers will not boot fully when an SD is left in the SD slot. This appears to happen commonly on the MKS Robin series with the TFT touch LCDs.

**Workaround:** Remove the SD card after flashing and/or power cycle. We are looking into a fix and once it is located we will patch it.

----------

## DWIN/DACAI LCD Glitches ##
**Issue:** These LCDs work but sometimes can experience artifacting and/or flickering. This is just how they work with Marlin and there is no fix currently. This also can happen if you spin the encoder wheel very quickly. These LCDs are closed source so fixing issues with them is not something we can do quickly or easily.

**Workaround:** Replace the LCD with a 12864. We make kits for ALL the affected printer models to swap the LCD out for one that works 100% with your printer board and model.