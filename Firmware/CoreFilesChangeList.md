This is a list of files that we have modified in the core Marlin files for our distribution.

This is for our reference to make sure to retain changes made to the core files when merging in the latest Marlin firmware baseline.

This does not include machine `configuration.h` or `PlatformIO.ini` files.

To disable any menu customization we've made just add `#define DISABLE_TH3D_MODS` to the `Configuration.h` file.

----------

- **.vscode**
	- `extensions.json` - Removed AutoBuild Marlin Recommendation - Doesn't work with our code.
- **ini**
	- `avr.ini` - Add in Manual COM selection line
	- `stm32f1.ini`
	- `stm32f1-maple.ini` - Add in our own Maple Envs
	- `stm32f4.ini` - EZBoard ENV Renames
- **Marlin**
	- **src**
		- **core**
			- `language.h` - Changed Firmware URL to Ours
		- **inc**
			- `Warnings.cpp` - Disable certain warnings that do not affect our configs
		- **lcd**
			- **language**
				- `language_en.h`
			- **menu**
				- `menu_main.cpp` - Moved menus around for easier use.
				- `menu_configuration.cpp` - Moved menus around for easier use.
				- `menu_advanced.cpp` - Moved menus around for easier use.
		- **pins**
			- `pins.h`
			- **gd32f1**
				- `pins_SOVOL_V131.h`
			- **ramps**
				- `pins_RAMPS.h`
				- `pins_RAMPS_CREALITY.h`
			- **stm32f1**
				- `pins_BTT_SKR_MINI_E3_common.h`
				- `pins_CREALITY_V4.h`
				- `pins_MKS_ROBIN_MINI.h`
				- `pins_MKS_ROBIN_NANO_common.h`
			- **stm32f4**
				- `pins_TH3D_EZBOARD_V2.h`
				- `pins_pins_MKS_MONSTER8_common.h`
			- **stm32g0**
				- `pins_BTT_SKR_MINI_E3_V3_0.h`
	- `Configuration_adv.h`
	- `Version.h`