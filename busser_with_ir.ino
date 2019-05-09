void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(D4,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  delay(5);
  /*if(analogRead(A0)<5000)
  {
    digitalWrite(D4,LOW);
    delay(2000);
  }
  else
  {
    digitalWrite(D4,HIGH);
    delay(2000);
  }*/

}
