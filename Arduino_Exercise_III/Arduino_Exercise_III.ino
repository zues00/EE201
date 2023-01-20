void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT); //Sets pin 13 as the input 

  digitalRead(13);  //Reads pin 13 status 
  if (digitalRead(13)==HIGH) //If else statement 
  {
    Serial.println("Hello World!");
  }
  else
  {
    Serial.println("It's 2023");
  }

    
}

void loop() {
  // put your main code here, to run repeatedly:

}
