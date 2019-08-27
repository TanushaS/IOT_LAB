int ledpin=13;
int analogpin=A0;
void setup() {
  // put your setup code here, to run once:
pinMode(analogpin,INPUT);
pinMode(ledpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sv=analogRead(analogpin);
Serial.print("Sensed value:");
Serial.println(sv);
int threshold=50;
if(sv<threshold)
digitalWrite(ledpin,HIGH);
else digitalWrite(ledpin,LOW);
delay(1000);
}
