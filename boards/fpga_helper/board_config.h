#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Steiert Solutions"
#define PRODUCT_NAME "FPGA Helper"
#define VOLUME_LABEL "HELPERBOOT"
#define INDEX_URL "http://www.steiert.net"
#define BOARD_ID "SAMD21E18A-FPGAhlpr-v0"

#define USB_VID 0x239A
#define USB_PID 0x001E

#define LED_PIN PIN_PA27 // not connected
//#define LED_TX_PIN PIN_PA27
//#define LED_RX_PIN PIN_PB03

#define BOARD_RGBLED_CLOCK_PIN            PIN_PA00
#define BOARD_RGBLED_DATA_PIN             PIN_PA01

#endif
