#pragma once

/***********************config*************************/


//Display - H0175Y003AM - 1.75 inches
#define SPI_FREQUENCY         40000000 //
#define TFT_SPI_MODE          SPI_MODE0
#define TFT_SPI_HOST          SPI2_HOST

#define EXAMPLE_LCD_H_RES     466 
#define EXAMPLE_LCD_V_RES     466 

//#define LVGL_LCD_BUFFER_SIZE  EXAMPLE_LCD_H_RES * EXAMPLE_LCD_V_RES // full frame buffer is slightly faster
#define LVGL_LCD_BUFFER_SIZE  EXAMPLE_LCD_H_RES * 10 
#define SEND_BUF_SIZE         EXAMPLE_LCD_H_RES * 10

#define TFT_QSPI_CS           10
#define TFT_QSPI_SCK          12
#define TFT_QSPI_D0           11
#define TFT_QSPI_D1           13
#define TFT_QSPI_D2           14
#define TFT_QSPI_D3           15
#define TFT_QSPI_RST          17
#define LCD_VCI_EN            16
#define TFT_TE                -1

// IIC
#define IIC_SDA 7
#define IIC_SCL 6

// TOUCH - CST9217
#define TOUCH_INT 9
#define TOUCH_RST 8

// Battery Voltage ADC
#define BATTERY_VOLTAGE_ADC_DATA 4

// SD
#define SD_CS 38
#define SD_MOSI 39
#define SD_MISO 40
#define SD_SCLK 41

// PCF8563
#define PCF8563_INT 9



