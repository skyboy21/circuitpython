#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO0) },


    { MP_ROM_QSTR(MP_QSTR_D18), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO18) },

    { MP_ROM_QSTR(MP_QSTR_D17), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO17) },

    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO9) },

    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO8) },

    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO7) },

    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO5) },

    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_GPIO5) },

    { MP_ROM_QSTR(MP_QSTR_D16), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_A7), MP_ROM_PTR(&pin_GPIO16) },

    { MP_ROM_QSTR(MP_QSTR_D35), MP_ROM_PTR(&pin_GPIO35) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_GPIO35) },

    { MP_ROM_QSTR(MP_QSTR_D34), MP_ROM_PTR(&pin_GPIO34) },
    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_GPIO34) },

    { MP_ROM_QSTR(MP_QSTR_D33), MP_ROM_PTR(&pin_GPIO33) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_GPIO33) },

    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL_POWER), MP_ROM_PTR(&pin_GPIO38) },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_GPIO39) },

    { MP_ROM_QSTR(MP_QSTR_D40), MP_ROM_PTR(&pin_GPIO40) },
    { MP_ROM_QSTR(MP_QSTR_SCL1), MP_ROM_PTR(&pin_GPIO40) },

    { MP_ROM_QSTR(MP_QSTR_D41), MP_ROM_PTR(&pin_GPIO41) },
    { MP_ROM_QSTR(MP_QSTR_SDA1), MP_ROM_PTR(&pin_GPIO41) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) }
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
