int val;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(val=255; val>0; val=val-1){
  analogWrite(11, val);
  analogWrite(6, 255-val);
  analogWrite(3, 128-val);
  delay(1);}
  for(val=0; val<255; val=val+1){
  analogWrite(11, val);
  analogWrite(6, 255-val);
  analogWrite(3, 128-val);
  delay(1);}
  Serial.println(val, DEC);
}