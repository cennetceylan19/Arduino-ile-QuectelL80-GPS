#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#define rxGPS 10
#define txGPS 9     

    long lat,lon; 
    int counter = 0;     
    SoftwareSerial gpsSerial(rxGPS,txGPS); 
    TinyGPSPlus gps;
     
    void setup(){
      Serial.begin(9600); // connect serial
      gpsSerial.begin(9600); // connect gps sensor
    }
     
    void loop(){
      while(gpsSerial.available()){ // check for gps data
       if(gps.encode(gpsSerial.read())){ // encode gps data
       if(counter > 50) {
        Serial.print("SATS: ");
        Serial.println(gps.satellites.value());
        Serial.print("LAT: ");
        Serial.println(gps.location.lat(), 6);
        Serial.print("LONG: ");
        Serial.println(gps.location.lng(), 6);
        Serial.print("ALT: ");
        Serial.println(gps.altitude.meters());
        Serial.print("SPEED: ");
        Serial.println(gps.speed.mps());
        
        Serial.print("Date: ");
        Serial.print(gps.date.day()); Serial.print("/");
        Serial.print(gps.date.month()); Serial.print("/");
        Serial.println(gps.date.year());
        
        Serial.print("Hour: ");
        Serial.print(gps.time.hour()); Serial.print(":");
        Serial.print(gps.time.minute()); Serial.print(":");
        Serial.println(gps.time.second());
       Serial.println("---------------------------");
        counter = 0;
       }
       else counter++;

       }
      }
    }
