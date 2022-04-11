void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
 int val;
 int tmp;
 val=analogRead(A0);
 tmp=val/2.048;
 Serial.println(tmp);
 delay(500);
}