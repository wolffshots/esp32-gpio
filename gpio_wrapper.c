#include "gpio_wrapper.h"

/**
 * set pin to output with no pullup, pulldown or interrupts
 * @param pin_number the actual pin number you want to enable (bitmask is computed internally)
 */
void gpio_output(gpio_num_t pin_number)
{
    // compute bitmask of pin
    uint64_t pin_sel = 1ULL << pin_number;

    gpio_config_t io_conf;
    // disable interrupt
    io_conf.intr_type = GPIO_INTR_DISABLE;
    // set as output mode
    io_conf.mode = GPIO_MODE_OUTPUT;
    // bit mask of the pins that you want to set,e.g. GPIO2
    io_conf.pin_bit_mask = pin_sel;
    // disable pull-down mode
    io_conf.pull_down_en = 0;
    // disable pull-up mode
    io_conf.pull_up_en = 0;
    // configure GPIO with the given settings
    gpio_config(&io_conf);
}