int red=13;
int yellow=12;
int green=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
  delay(5000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  delay(4000);
  

}
