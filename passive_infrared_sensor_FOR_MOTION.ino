int LED =2;
  uint8_t led = D0;
  
  
void setup() {
  pinMode(D0,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
 int sensorvalue = digitalRead(D0);
 Serial.println(sensorvalue);
 
 if (sensorvalue== HIGH){
  digitalWrite(LED,HIGH);
 delay(1000);
 }
 
 else
 {
  digitalWrite(LED,LOW);
 }
  
  

}
