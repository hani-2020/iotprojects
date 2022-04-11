
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  for(int i=12; i>6; i=i-1){
    digitalWrite(i, HIGH);
    delay(500);}
  for(int i=12; i>6; i=i-1){
    digitalWrite(i, LOW);
    delay(500);}
}