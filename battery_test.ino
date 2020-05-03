#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <battery.h>
#include <bluetooth.h>
#include <wifi.h>

Adafruit_SSD1306 display(-1);



void setup()   
{                
  // initialize with the I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  


}

void loop() {
    // Clear the buffer.
  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(BATTERY_POS_X, BATTERY_POS_Y, battery_empty, BATTERY_WIDTH, BATTERY_HEIGHT, WHITE); // display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.drawBitmap(BLUETOOTH_POS_X, BLUETOOTH_POS_Y, bluetooth, BLUETOOTH_WIDTH, BLUETOOTH_HEIGHT, WHITE);
  display.drawBitmap(WIFI_POS_X, WIFI_POS_Y, wifi_0, WIFI_WIDTH, WIFI_HEIGHT, WHITE);
  display.display();
  delay(1000);

  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(BATTERY_POS_X, BATTERY_POS_Y, battery_quarter, BATTERY_WIDTH, BATTERY_HEIGHT, WHITE); // display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.drawBitmap(WIFI_POS_X, WIFI_POS_Y, wifi_1, WIFI_WIDTH, WIFI_HEIGHT, WHITE);
  display.display();
  delay(1000);

  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(BATTERY_POS_X, BATTERY_POS_Y, battery_half, BATTERY_WIDTH, BATTERY_HEIGHT, WHITE); // display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.drawBitmap(BLUETOOTH_POS_X, BLUETOOTH_POS_Y, bluetooth, BLUETOOTH_WIDTH, BLUETOOTH_HEIGHT, WHITE);
  display.drawBitmap(WIFI_POS_X, WIFI_POS_Y, wifi_2, WIFI_WIDTH, WIFI_HEIGHT, WHITE);
  display.display();
  delay(1000);

  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(BATTERY_POS_X, BATTERY_POS_Y, battery_three_quarter, BATTERY_WIDTH, BATTERY_HEIGHT, WHITE);
  display.drawBitmap(WIFI_POS_X, WIFI_POS_Y, wifi_3, WIFI_WIDTH, WIFI_HEIGHT, WHITE);// display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.display();
  delay(1000);

  display.clearDisplay(); //for Clearing the display
  display.drawBitmap(BATTERY_POS_X, BATTERY_POS_Y, battery_full, BATTERY_WIDTH, BATTERY_HEIGHT, WHITE);
  display.drawBitmap(WIFI_POS_X, WIFI_POS_Y, wifi_0, WIFI_WIDTH, WIFI_HEIGHT, WHITE);// display.drawBitmap(x position, y position, bitmap data, bitmap width, bitmap height, color)
  display.display();
  delay(1000);
  
  }
  
