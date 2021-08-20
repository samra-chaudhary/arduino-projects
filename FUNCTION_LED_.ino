void setup() {
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  
  

}

void loop() {
  //BlinkLED D0
  BlinkLED(D0,2000,2000);
  //BlinkLED D1
  BlinkLED(D1,2000,2000);

}
//input parameters : pin connected to for eg: D1,D2,D3....
//                 :on_duration means duration in ms for which it has to be turned on.
//                 :off_duration means duration in ms for which it has to be turned off.
void BlinkLED(uint8_t pin,uint8_t on_duration,uint8_t off_duration)
{
  digitalWrite( pin,HIGH);
  delay( on_duration);
  digitalWrite(pin,LOW);
  delay( off_duration);
}
