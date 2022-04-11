// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(5000); 
  digitalWrite(12, LOW);
  delay(5000);
  for (int i=0; i<3; i=i+1){
  digitalWrite(9, HIGH);
  delay(500); 
  digitalWrite(9, LOW);
  delay(500);}
  digitalWrite(6, HIGH);
  delay(5000); 
  digitalWrite(6, LOW);
    delay(5000);
}