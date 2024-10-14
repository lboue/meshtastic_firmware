#define I2C_SDA 12
#define I2C_SCL 11

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK 36
#define LORA_MISO 35
#define LORA_MOSI 37
#define LORA_CS 6 // NSS

#define USE_RF95
#define LORA_DIO0 14          // IRQ
#define LORA_RESET 5          // RESET
#define LORA_RST 5            // RESET
#define LORA_IRQ 14           // DIO0
#define LORA_DIO1 RADIOLIB_NC // Not really used
#define LORA_DIO2 RADIOLIB_NC // Not really used

#define HAS_AXP2101

#define TFT_HEIGHT 240
#define TFT_WIDTH 320
#define TFT_OFFSET_X 0
#define TFT_OFFSET_Y 0
#define TFT_BUSY -1
#define TFT_OFFSET_ROTATION 0

// LCD screens are slow, so slowdown the wipe so it looks better
#define SCREEN_TRANSITION_FRAMERATE 30 // fps

// M5Stack CoreS3 gets a white on black display
#define TFT_MESH COLOR565(0xA0, 0xFF, 0x00) //(0x94, 0xEA, 0x67)
#define ILI9342_SPI_HOST VSPI_HOST          // VSPI_HOST or HSPI_HOST
