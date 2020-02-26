
//#include <SoftwareSerial.h>

const int AnalogPin = A0; 
int AnalogRead = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(AnalogPin, INPUT);
  //uart.begin(9600);
  Serial.begin(9600);
  //9600 baud rate, used around the internet
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  AnalogRead = analogRead(AnalogPin);
  /*
  while(Serial.available()){
    Serial.println(AnalogRead);
  }
  */
  Serial.println("Hello World!");
}
