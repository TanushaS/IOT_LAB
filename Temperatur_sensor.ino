int analogpin=0;
void setup()
{
  pinMOde(analogpin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensedvalue=analogRead(analogpin);
  float mvalue=(sensedvalue/1024)*5000;
  float temp=mvalue/10;
  Serial.println("temp=");
  Serial.print(temp);
}
