int iPin = 7;
int v = 0;
unsigned char sv = 0;
unsigned char filter = 255;

void setup()
{
  pinMode(iPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  v = analogRead(iPin);
  v = map(v,0,1023, 0, 255);
  sv = v & filter;
  Serial.write(sv);
  //delay(100);
}
