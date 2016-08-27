int oPin = 5;
unsigned char c = 0;

void setup()
{
	Serial.begin(9600);
	pinMode(oPin, OUTPUT);
	delay(1000);
}

void loop()
{
	  if(Serial.available())
	  {
		  c = Serial.read();
		  analogWrite(oPin, c);
	  }
}
