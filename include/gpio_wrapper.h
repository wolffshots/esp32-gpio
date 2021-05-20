#ifndef GPIO_WRAPPER_H
#define GPIO_WRAPPER_H

#include "driver/gpio.h" // header to configure and control gpio pins

#ifdef __cplusplus
extern "C" {
#endif

void gpio_output(gpio_num_t);

#ifdef __cplusplus
}
#endif

#endif // GPIO_WRAPPER_H