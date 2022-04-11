int val;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(A0);
  analogWrite(3, 310-val);
  Serial.println(val);
}