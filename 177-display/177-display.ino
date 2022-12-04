/* initialize and use the 1.77" TFT with ST7735S*/

#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>

//                    ESP32       LCD
//
//      GND           GND         Pin 1
//      VCC           3V3         Pin 2
//      SCK           18          Pin 3
//      SDA           23          Pin 4
#define TFT_RST        4 // RES   Pin 5
#define TFT_DC         2 // RS    Pin 6
#define TFT_CS        15 // CS    Pin 7
//      LEDA          3V3         Pin 8

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup(void) {

  //tft.initR(INITR_BLACKTAB);      // Init ST7735S chip, black tab
  tft.initR(INITR_GREENTAB);      // Init ST7735S chip, green tab

  //tft.setSPISpeed(40000000); // default

  tft.fillScreen(ST77XX_BLACK);

}

void loop() {
  
}
