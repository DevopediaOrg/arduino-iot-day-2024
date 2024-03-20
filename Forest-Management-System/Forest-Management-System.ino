#define BLYNK_PRINT Serial

#define BLYNK_TEMPLATE_ID "TMPL3_PcxLGI3"
#define BLYNK_TEMPLATE_NAME "Forest Monitoring System"
#define BLYNK_AUTH_TOKEN "ENTER_YOUR_TOKEN"

#include <WiFi.h>
#include<WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <Wire.h>

#define buzzer 13
#define MQ3 34
#define IR1 26
#define IR2 25
#define RAIN 33

int Gas_Level =0;
int Rain_Level =0;


BlynkTimer timer;

void sendSensor(){

 Gas_Level  = analogRead(MQ3);


if (Gas_Level <= 250) {
      Serial.println("Gas value:Normal");
     
      }else if (Gas_Level > 300) {
       
      Blynk.logEvent("gas_alert");    
      Serial.println("Gas value:High  ");
    }

  Blynk.virtualWrite(V0,Gas_Level);
 
  Serial.print("MQ_Anlog  : ");
  Serial.println(Gas_Level);
 
}

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "test";  // type your wifi name
char pass[] = "12344567";  // type your wifi password

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pinMode(buzzer, OUTPUT);
  pinMode(MQ3, INPUT);
  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(RAIN,INPUT);

  //digitalWrite(pump,HIGH);
  timer.setInterval(2000L, sendSensor);
}

void loop() {
  Blynk.run();
  timer.run();

  int sensor1 = digitalRead(IR1);
  int sensor2 = digitalRead(IR2);
  int Rain_level = digitalRead(RAIN);
 
 if (sensor1 == 0 || sensor2 ==0){
  digitalWrite(buzzer, HIGH);
  Blynk.virtualWrite(V1,1);
  delay(500);
  Serial.println("Animal Near To Fence");
  delay(500);
 }

 if (sensor1 == 1 && sensor2 ==1){
  digitalWrite(buzzer, LOW);
  delay(500);
  Blynk.virtualWrite(V1,0);
  Serial.println("No obstacle near to Fence");
  delay(500);
 }
 if (Rain_level == 0 ){
 
  Serial.println("Raining");
  Blynk.virtualWrite(V2,1);
  delay(500);
 }

 if (Rain_level == 1){
  Serial.println("Stopped Raining");
  Blynk.virtualWrite(V2,0);
  delay(500);
 }
}
