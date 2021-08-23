
#include <SoftwareSerial.h>


int voltage;

void setup() {
  pinMode(A0,OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int ADC = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = ADC * (3.3 / 1023.0);
  // print out the value you read:
  
  Serial.write(45); // send a byte with the value 45

  int bytesSent = Serial.write("DC Voltage (Volts) is....");  //send the string "hello" and return the length of the string.
  Serial.println(voltage);
   
  delay(1000);
   analogWrite(D4,ADC);
  delay(1000);
  analogWrite(D4,ADC );
  delay(voltage);

}
