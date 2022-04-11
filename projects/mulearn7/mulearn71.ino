int val;
void setup()
{
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(A0);
  analogWrite(5, val);
  Serial.println(val);
}