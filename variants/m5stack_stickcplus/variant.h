// #define BUTTON_NEED_PULLUP // if set we need to turn on the internal CPU pullup during sleep

#define I2C_SDA 21
#define I2C_SCL 22

// #define BUTTON_PIN 39 // 38, 37
// #define BUTTON_PIN 0
#define BUTTON_NEED_PULLUP
// #define EXT_NOTIFY_OUT 13 // Default pin to use for Ext Notify Plugin.

#define BUTTON_PIN 37

#define PIN_BUZZER 2

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define TFT_HEIGHT 135
#define TFT_WIDTH 240
#define TFT_OFFSET_X 0
#define TFT_OFFSET_Y 0
#define TFT_BUSY -1

// LCD screens are slow, so slowdown the wipe so it looks better
#define SCREEN_TRANSITION_FRAMERATE 1 // fps

#define ST7789_SPI_HOST VSPI_HOST // VSPI_HOST or HSPI_HOST
