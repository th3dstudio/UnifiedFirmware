This is a list of files that we have modified in the core Marlin files for our distribution.

This is for our reference to make sure to retain changes made to the core files when merging in the latest Marlin firmware baseline.

This does not include machine `configuration.h` or `PlatformIO.ini` files.

----------

- **buildroot**
	- **share**
		- **PlatformIO**
			- **variants**
				- **MARLIN_G0B1RE**
					- `variant_MARLIN_STM32G0B1RE.cpp` - USB Fix from BTT
- **ini**
	- `avr.ini`
	- `stm32f1.ini`
	- `stm32f1-maple.ini`
	- `stm32f4.ini`
- **Marlin**
	- **src**
		- **core**
			- `boards.h`
			- `language.h`
		- **inc**
			- `Warnings.cpp`
		- **gcode**
			- **calibrate**
				- `M48.cpp`
		- **inc**
			- `Warnings.cpp`
		- **lcd**
			- **language**
				- `language_en.h`
			- **menu**
				- `menu_advanced.cpp`
				- `menu_configuration.cpp`
				- `menu_motion.cpp`			
		- **pins**
			- `pins.h`
			- **lpc1769**
				- `pins_MKS_SGEN_L_V2.h`
			- **mega**
				- `pins_WANHAO_ONEPLUS.h`
			- **ramps**
				- `pins_RAMPS.h`
				- `pins_RAMPS_CREALITY.h`
			- **sanguino**
				- `pins_ANET_10.h`
				- `pins_MELZI_CREALITY.h`
				- `pins_SANGUINOLOLU_11.h`
			- **stm32f1**
				- `pins_BTT_SKR_MINI_E3_common.h`
				- `pins_CREALITY_V4.h`
				- `pins_MKS_ROBIN_MINI.h`
				- `pins_MKS_ROBIN_NANO_common.h`
			- **stm32f4**
				- `pins_TH3D_EZBOARD_V2.h`
			- **stm32g0**
				- `pins_BTT_SKR_MINI_E3_V3_0.h`
	- `Configuration_adv.h`
	- `Version.h`