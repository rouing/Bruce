#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include 'soc/soc_caps.h'

#define USB_VID 0x303a
#define USB_PID 0x1001

// Some boards have too low voltage on this pin (board design bug)
// Use different pin with 3V and connect with 48
// and change this setup for the chosen pin (for example 38)
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + 48;
#define BUILTIN_LED    LED_BUILTIN  // backward compatibility
#define LED_BUILTIN    LED_BUILTIN
#define RGB_BUILTIN    LED_BUILTIN
#define RGB_BRIGHTNESS 64

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t TXD2 = 17;
static const uint8_t RXD2 = 18;

static const uint8_t SDA = 12;
static const uint8_t SCL = 11;

static const uint8_t SS = 15;
static const uint8_t MOSI = 37;
static const uint8_t MISO = 35;
static const uint8_t SCK = 36;

static const uint8_t G0 = 0;
static const uint8_t G1 = 1;
static const uint8_t G2 = 2;
static const uint8_t G3 = 3;
static const uint8_t G4 = 4;
static const uint8_t G5 = 5;
static const uint8_t G6 = 6;
static const uint8_t G7 = 7;
static const uint8_t G8 = 8;
static const uint8_t G9 = 9;
static const uint8_t G11 = 11;
static const uint8_t G12 = 12;
static const uint8_t G13 = 13;
static const uint8_t G14 = 14;
static const uint8_t G17 = 17;
static const uint8_t G18 = 18;
static const uint8_t G19 = 19;
static const uint8_t G20 = 20;
static const uint8_t G21 = 21;
static const uint8_t G33 = 33;
static const uint8_t G34 = 34;
static const uint8_t G35 = 35;
static const uint8_t G36 = 36;
static const uint8_t G37 = 37;
static const uint8_t G38 = 38;
static const uint8_t G45 = 45;
static const uint8_t G46 = 46;

static const uint8_t ADC = 10;


#define HAS_RTC 
#define USB_as_HID

#define HAS_TOUCH

#define ALLOW_ALL_GPIO_FOR_IR_RF

// Infrared Led default pin and state
#define IR_TX_PINS "{{'M5 IR Mod', GROVE_SDA}, {'Groove W', GROVE_SCL}, {'GROVE Y', GROVE_SDA}}"
#define IR_RX_PINS "{{'M5 IR Mod', GROVE_SCL}, {'Groove W', GROVE_SCL}, {'GROVE Y', GROVE_SDA}}"
#define LED GROVE_SDA
#define LED_ON HIGH
#define LED_OFF LOW

// Radio Frequency (one pin modules) pin setting
#define RF_TX_PINS "{{'M5 RF433T', GROVE_SDA}, {'Groove W', GROVE_SCL}, {'GROVE Y', GROVE_SDA}}"
#define RF_RX_PINS "{{'M5 RF433R', GROVE_SCL}, {'Groove W', GROVE_SCL}, {'GROVE Y', GROVE_SDA}}"

// Font sizes
#define FP 1
#define FM 2
#define FG 3

// Screen Setup
#define HAS_SCREEN
#define ROTATION 1
#define WIDTH 320
#define HEIGHT 220 

// TFT_eSPI Setup
#define USER_SETUP_LOADED
#define ILI9341_DRIVER
#define TFT_INVERSION_ON
#define USE_HSPI_PORT
#define M5STACK
#define TFT_MOSI MOSI
#define TFT_MISO MISO
#define TFT_SCLK SCLK
#define TFT_CS G3
#define TFT_DC G35
#define TFT_RST -1
#define TFT_BL -1
#define TOUCH_CS -1
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 20000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000

// SD Card Setup pins
#define SDCARD_CS 4
#define SDCARD_SCK SCK
#define SDCARD_MISO MISO
#define SDCARD_MOSI MOSI

// Default I2C port
#define GROVE_SDA 32
#define GROVE_SCL 33

#define SPI_SCK_PIN 0
#define SPI_MOSI_PIN GROVE_SDA
#define SPI_MISO_PIN GROVE_SCL
#define SPI_SS_PIN 26
#endif /* Pins_Arduino_h */