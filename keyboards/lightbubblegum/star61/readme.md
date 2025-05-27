# lightbubblegum/star61

![lightbubblegum/star61](https://i.imgur.com/ay6mdqE.jpeg)

Customized Star61 with different MCU

* Keyboard Maintainer: [LightBubbleGum](https://github.com/lightbubblegum)
* Hardware Supported: STM32F103C8T6
* Hardware Availability: MageGee Star61 costomization

Make example for this keyboard (after setting up your build environment):

    make lightbubblegum/star61:default

Flashing example for this keyboard:

    make lightbubblegum/star61:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
