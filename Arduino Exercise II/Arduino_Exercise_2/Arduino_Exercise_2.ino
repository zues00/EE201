void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT); //Sets pin 13 as the input 
  pinMode(10,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:  
  digitalWrite(13,HIGH);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(13,LOW);
  digitalWrite(10,HIGH);
  delay(1000);
}
