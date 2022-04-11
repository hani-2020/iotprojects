int val;
void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(A0);
  if(val>=76){
    digitalWrite(8, HIGH);}
  if (val>=132){
    digitalWrite(7, HIGH);}
  if (val>=188){
    digitalWrite(6, HIGH);}
  if (val>=244){
    digitalWrite(5, HIGH);}
  if (val>=300){
    digitalWrite(4, HIGH);}
  if (val>=350){
    digitalWrite(3, HIGH);}
  else if(val<76){
    digitalWrite(8, LOW);}
  else if (val<132){
    digitalWrite(7, LOW);}
  else if (val<188){
    digitalWrite(6, LOW);}
  else if (val<244){
    digitalWrite(5, LOW);}
  else if (val<300){
    digitalWrite(4, LOW);}
  else if (val<350){
    digitalWrite(3, LOW);}
Serial.println(val);
}