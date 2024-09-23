#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

#define LORA_SCK  36
#define LORA_MISO 35
#define LORA_MOSI 37
#define LORA_CS    6
#define LORA_RST   5
#define LORA_IRQ  14

// Leave undefined to disable our PMU IRQ handler.  DO NOT ENABLE THIS because the pmuirq can cause sperious interrupts
// and waking from light sleep
// #define PMU_IRQ 40
#define HAS_AXP2101

//#define TFT_HEIGHT 240
//#define TFT_WIDTH 320
//#define TFT_OFFSET_X 0
//#define TFT_OFFSET_Y 0
//#define TFT_BUSY -1

// LCD screens are slow, so slowdown the wipe so it looks better
//#define SCREEN_TRANSITION_FRAMERATE 1 // fps

// ILI9342C
//#define ILI9341_SPI_HOST VSPI_HOST // VSPI_HOST or HSPI_HOST
