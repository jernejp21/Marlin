# Marlin 3D Printer Firmware fork for Ender 3 V2 with SKR mini E3 V2.0

This is forked repositiry of Marlin Firmware. It is customised for use with Ender 3 V2 printer (and DWIN display) which uses SKR mini E3 V2.0 mainboard.

Use this as a reference to your project and read all changes made here!

# Importatnt notice

This FW is compiled as standalone, without bootloader. It means, that the code starts on address 0x0800_0000 of STM32F103 MCU. If you are using bootloader, do not download this code via bootloader! To change address offset (and also vector table), uncomment lines 752 and 753 in platformio.ini! This will call python script which uses linker file with start address offset.

# HW changes

Change flat cable from the main board to display, because pinout is different.

`pins_BTT_SKR_MINI_E3_common.h`
```C
/**
 *        Ender 3 V2 display                         SKR Mini E3 V2.0
 *                _____                                     _____
 *            5V | 1 2 | GND                            5V | 1 2 | GND
 *   (BTN_E1) A  | 3 4 | B (BTN_E2)         (BTN_EN1) PB15 | 3 4 | PB8 (BTN_E2)
 *          BEEP | 5 6   ENT (BTN_ENC)                PB9  | 5 6   RX1
 *  (SKR_RX1) TX | 7 8 | RX (SKR_TX1)                RESET | 7 8 | TX1
 *            NC | 9 10| NC                  (BEEPER) PA15 | 9 10| PB5  (BTN_ENC)
 *                -----                                     -----
 *                EXP1                                      EXP1
 */
#if ENABLED(DWIN_CREALITY_LCD)

  // RET6 DWIN ENCODER LCD
  #define BTN_ENC                           PB5
  #define BTN_EN1                           PB15
  #define BTN_EN2                           PB8

  #ifndef BEEPER_PIN
    #define BEEPER_PIN                      PA15
    #undef SPEAKER
  #endif
#endif
```

# SW changes

- BL touch is enabled. All BL touch cables are connected to BL touch port. Z end stop is empty!
- Homing doesn't use end stops. X and Y axis use TMC2209 feature for sensorless homing, Z homing is done with BL touch.
- Extruder is dual geard with 3:1 ratio, so E steps are different than with original extruder.
- There is no filament runout sensor, but M600 command for filament change is implemented. Had to make some changes to DWIN code to display "change filament" message.


# Licence

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.
