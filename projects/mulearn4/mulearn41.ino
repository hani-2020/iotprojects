int ip;
void setup()
{
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  ip=digitalRead(2);
  if(ip==1){
    digitalWrite(9, HIGH);}
  else{
    digitalWrite(9, LOW);}
  Serial.println(ip);
}