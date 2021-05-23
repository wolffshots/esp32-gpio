# esp32-gpio
Docs: [![couldn't get build status](https://api.travis-ci.com/wolffshots/esp32-gpio.svg?branch=main "Current doc build status")](https://wolffshots.github.io/esp32-gpio/index.html)

simple wrapper for setting up gpio pins

## how to use project

1. run ```git submodule add git@github.com:wolffshots/esp32-gpio.git components/esp32-gpio``` in your main project
2. configure project if needed
3. ```#include "gpio_wrapper.h"``` should give you access to this component.

if the above steps don't work then you may need to run ```git submodule init components/esp32-gpio``` 
and then ```git submodule update --remote --recursive``` in your main project

## folder contents

the component **esp32-gpio** contains one source file in C language [gpio_wrapper.c](gpio_wrapper.c). the file is located in root folder.

esp-idf projects are build using cmake. the project build configuration is contained in `CMakeLists.txt` files that provide set of directives and instructions describing the project's source files and targets (executable, library, or both). 

below is short explanation of remaining files in the project folder.

```
├── include                     header file directory
│   └── gpio_wrapper.h          the header file for this component
├── .gitignore                  describes what files and folders git should ignore
├── .travis.yml                 build rules for creating docs via doxygen
├── CMakeLists.txt              base project cmake file (describes dependencies, include dir and src dir)
├── component.mk                component make file
├── gpio_wrapper.c              core src file of the component
├── Kconfig.projbuild           kconfig description file to add build time vars
├── LICENSE.md                  MIT license file
└── README.md                   this file
```

for more information on structure and contents of esp-idf projects, please refer to Section [Build System](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/build-system.html) of the esp-idf programming guide.

## documentation

automatically generated API documentation (doxygen) is available [here](https://wolffshots.github.io/esp32-gpio/index.html).

## license

the code in this project is licensed under the MIT license - see LICENSE for details.

# helpful commands
- ```git submodule update --remote --recursive``` - updates the checked out modules to the most recent commit to their main branch

# todo
 
 - [ ] add functions for general input (with different types of resistor)
 - [ ] add functions for interrupts