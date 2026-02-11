#include <Arduino.h>
#include <wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDRESS 0x3C
   Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);

void setup{
    Serial.begin(9600);
    void setup() {

    if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS)) {
        Serial.println("Oled not found");
        while (true);
    }
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 0);
    display.println("Arduino UNO R4");
    display.println("OLED with I2C ");
    display.println("nimbuda nimbuda");
    display.display();
}

void loop() {
// write your code here
}