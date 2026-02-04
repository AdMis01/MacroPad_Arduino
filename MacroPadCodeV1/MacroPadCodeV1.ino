void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3)== LOW){
    Serial.println("First Button Down");
    delay(200);
  }else{
    Serial.println("Frist Button Up");
    delay(200);
  }
  if(digitalRead(9)== LOW){
    Serial.println("Second Button Down");
    delay(200);
  }else{
    Serial.println("Second Button Up");
    delay(200);
  }
  if(digitalRead(5)== LOW){
    Serial.println("Third Button Down");
    delay(200);
  }else{
    Serial.println("Third Button Up");
    delay(200);
  }
  if(digitalRead(7)== LOW){
    Serial.println("Fourth Button Down");
    delay(200);
  }else{
    Serial.println("Fourth Button Up");
    delay(200);
  }
  
}
