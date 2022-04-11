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
 Serial.println(val);
  if (val>=600){
    digitalWrite(4, HIGH);}
  else{
    digitalWrite(4, LOW);}
  delay(500);
}