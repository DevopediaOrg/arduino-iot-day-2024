#include <OneWire.h>
#include <DallasTemperature.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define ONE_WIRE_BUS 2

#define START 0
#define MID 1
#define MID_EMPTY 2
#define END 3
#define END_EMPTY 4

LiquidCrystal_I2C lcd(0x27, 20, 4);

float tempMax = 0;
float tempMin = 0;

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

byte startChar[] = {
  B11111,
  B11000,
  B11011,
  B11011,
  B11011,
  B11011,
  B11000,
  B11111
};

byte endChar[] = {
  B11111,
  B00011,
  B11011,
  B11011,
  B11011,
  B11011,
  B00011,
  B11111
};

byte midChar[] = {
  B11111,
  B00000,
  B11011,
  B11011,
  B11011,
  B11011,
  B00000,
  B11111
};

byte midCharEmpty[] = {
  B11111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11111
};

byte endCharEmpty[] = {
  B11111,
  B00011,
  B00011,
  B00011,
  B00011,
  B00011,
  B00011,
  B11111
};

void setup( ) {
  Serial.begin(9600);
  sensors.begin();

  // LCD initialize
  lcd.init();
  lcd.backlight();

  // Initialize custom characters
  lcd.createChar(START, startChar);
  lcd.createChar(MID, midChar);
  lcd.createChar(MID_EMPTY, midCharEmpty);
  lcd.createChar(END, endChar);
  lcd.createChar(END_EMPTY, endCharEmpty);

}
void loop(void) {
  // Get temperature
  sensors.requestTemperatures();
  float currentTemp = sensors.getTempCByIndex(0);

  // Set maximum temperature
  if ((tempMax == 0) || (currentTemp > tempMax)) {
    tempMax = currentTemp;
  }

  // Set minimum temperature
  if ((tempMin == 0) || (currentTemp < tempMin)) {
    tempMin = currentTemp;
  }

  // Get position for progress bar
  int pos = map(currentTemp, tempMin, tempMax, 0, 20);

  // Set fan speed
  analogWrite(3, pos / 20.0 * 255);

  printProgressBar(pos);
  printTemp(tempMin, tempMax, currentTemp);

  Serial.println(currentTemp);
  delay(1000);
}

void printProgressBar(int pos) {
  // LCD print start of progress bar
  lcd.setCursor(0, 0);
  lcd.write((byte) START);

  // Empty progress bar
  for (int x = 1; x < 19; x ++) {
    lcd.setCursor(x, 0);
    lcd.write((byte) MID_EMPTY);
  }

  // Add in filled progress bar
  for (int x = 1; x <= pos; x++) {
    lcd.setCursor(x, 0);
    lcd.write((byte) MID);
  }

  // Add the end of progress bae
  lcd.setCursor(19, 0);
  if (pos == 20) {
    lcd.write((byte) END);
  } else {
    lcd.write((byte) END_EMPTY);
  }
}

void printTemp(float tempMin, float tempMax, float currentTemp) {
  lcd.setCursor(0, 2);
  lcd.print((int)(tempMin * 10) / 10.0);
  lcd.setCursor(4, 2);
  lcd.print(" ");

  lcd.setCursor(8, 2);
  lcd.print((int)(currentTemp * 10) / 10.0);
  lcd.setCursor(12, 2);
  lcd.print(" ");

  lcd.setCursor(16, 2);
  lcd.print((int)(tempMax * 10) / 10.0);

  lcd.setCursor(0, 1);
  lcd.print("Min     Cur     Max ");
}
