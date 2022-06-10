# Raspberry Pi Pico MacOS starter kit

Compiling software for the Raspberry Pi Pico on an Mac with an M1 Pro processor
isn't possible with the the latest version of the ARM toolchain (11.2).

This repo makes it easy to get up and running by packaging the Homebrew formula
for the previous version of the ARM toolchain, the Pico SDK and a hello world
application.

## Prerequisites

1. `brew tap clowder/rpi-pico-macos-starter https://github.com/clowder/rpi-pico-macos-starter.git`
2. `brew install --cask clowder/rpi-pico-macos-starter/gcc-arm-embedded`
3. `brew install minicom`

## Getting started

1. `git clone https://github.com/clowder/rpi-pico-macos-starter.git pico`
2. `cd pico`
3. `cmake -B build/`
4. `make -C build/`
5. The firmware `build/hello_world.uf2` can now be loaded on to your Pico.
   Press the "BOOTSEL" button on the device while connecting it via USB, drag
   and drop the firmware into the device in the Finder. The device will restart
   automatically.
6. Connect to the device with minicom like `minicom -D /dev/tty.usbmodemXXXX`
   where `XXXX`. Using MacOS's default shell zsh it's easiest to type the
   command by hand and use tab-completion for the final part.

   To exit minicom type `<esc>-z` then `q`.
