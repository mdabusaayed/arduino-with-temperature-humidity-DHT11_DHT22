#include <dht.h>

#define dht_dpin A0

dht DHT;

void setup(){
  Serial.begin(9600);
  delay(700);
  
}
void loop(){
  DHT.read11(dht_dpin);

    Serial.print("\n Air Humidity= ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("Temp= ");
    Serial.print(DHT.temperature); 
    Serial.println("°C  ");
  delay(3000);
}
