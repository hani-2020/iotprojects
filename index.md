# IOT Bootcamp Level-1

## About me
My name is **Hani Roshan CK**. I am studying **ECE** at **College of Engineering Triandrum**. I am here to start my IOT journey.

### Experiment-1 **Hello world Led blinking**
![MuLearn1](https://user-images.githubusercontent.com/72330345/163402004-9dae1de9-eb65-470a-b1ee-e58d2cbaed1e.png)
#### Code
```ino
void setup()
{
 pinMode(13, OUTPUT); 
}

void loop()
{
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);
 delay(1000);
}
```
### Experiment-2 **Traffic Light**
![MuLearn2](https://user-images.githubusercontent.com/72330345/163402158-12a1092b-581a-4438-a161-7eabf0aaae2b.png)
#### Code
```ino
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
```
### Experiment-3 **LED Chasing Effect**
![MuLearn3](https://user-images.githubusercontent.com/72330345/163402299-43a802d1-6f8a-4739-900f-5a6c5f67047d.png)
#### Code
```ino
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
```
### Experiment-4 **Button Controlled LED**
![MuLearn4](https://user-images.githubusercontent.com/72330345/163402349-87b6071c-857f-40fb-965b-1c2b2e49a11e.png)
#### Code
```ino
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
```
### Experiment-5 **Buzzer**
![MuLearn5](https://user-images.githubusercontent.com/72330345/163402396-ae612dcc-55e3-42c3-9bd6-095d50aa157a.png)
#### Code
```ino
void setup()
{
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
}
```
### Experiment-6 **RGB LED**
![MuLearn6](https://user-images.githubusercontent.com/72330345/163402452-2c2119d3-911d-4189-b802-90a5490a6027.png)
#### Code
```ino
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
```
### Experiment-7 **LDR Light Sensor**
![MuLearn7](https://user-images.githubusercontent.com/72330345/163402498-36e19075-ded1-4c8f-b8a9-2df12272c79d.png)
#### Code
```ino
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
```
### Experiment-8 **Flame Sensor**
![MuLearn8](https://user-images.githubusercontent.com/72330345/163402549-49d18539-a9ac-4b29-a7f2-36d85f5d9cf1.png)
#### Code
```ino
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
```
### Experiment-9 **TMP36 Temperature Sensor**
![MuLearn9](https://user-images.githubusercontent.com/72330345/163402602-81c1e653-ebd4-40af-87ac-0a43d9d7bb47.png)
#### Code
```ino
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
```
### Experiment-10 **IR Remote Control Using TSOP**
![MuLearn10](https://user-images.githubusercontent.com/72330345/163402652-71d7e9db-95fd-4b9a-a6a7-5094449a0289.png)
#### Code
```ino
#include <IRremote.h>
int inpin=12;
int outpin1=7, outpin2=6, outpin3=5, outpin4=4, outpin5=3, outpin6=2;
IRrecv irrecv(inpin);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(inpin, INPUT);
  pinMode(outpin1, OUTPUT);
  pinMode(outpin2, OUTPUT);
  pinMode(outpin3, OUTPUT);
  pinMode(outpin4, OUTPUT);
  pinMode(outpin5, OUTPUT);
  pinMode(outpin6, OUTPUT);
}
void loop()
{     
  if (irrecv.decode(&results)){
    if(results.value==16593103){
      digitalWrite(outpin1, HIGH);
    }
    else if(results.value==16582903){
      digitalWrite(outpin2, HIGH);
    }
    else if(results.value==16615543){
      digitalWrite(outpin3, HIGH);
    }
    else if(results.value==16599223){
      digitalWrite(outpin4, HIGH);
    }
    else if(results.value==16591063){
      digitalWrite(outpin5, HIGH);
    }
    else if(results.value==16623703){
      digitalWrite(outpin6, HIGH);
    }
    else if (irrecv.decode(&results)){
    if(results.value==16607383){
      digitalWrite(outpin1, LOW);
    }
    else if(results.value==16586983){
      digitalWrite(outpin2, LOW);
    }
    else if(results.value==16619623){
      digitalWrite(outpin3, LOW);
    }
    else if(results.value==16603303){
      digitalWrite(outpin4, LOW);
    }
    else if(results.value==16584943){
      digitalWrite(outpin5, LOW);
    }
    else if(results.value==16601263){
      digitalWrite(outpin6, LOW);
    }
    
    Serial.println(results.value);}
  irrecv.resume();
}
}
```
### Experiment-11 **Potentiometer analog Value Reading**
![MuLearn11](https://user-images.githubusercontent.com/72330345/163402705-ceadd7d7-dae8-4d6c-9a09-701269b368b2.png)
#### Code
```ino
int val;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(A0);
  Serial.println(val);
}
```
### Experiment-12 **7 Segment Display**
![MuLearn12](https://user-images.githubusercontent.com/72330345/163402761-8bbc0bc3-33bb-48e6-bb71-b5c9d8cbbe33.png)
#### Code
```ino
int a=7;
int b=6;
int c=5;
int d=10;
int e=11;
int f=8;
int g=9;
int dp=4;
void digital_0(void) 
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_1(void) 
{
unsigned char j;
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
for(j=7;j<=11;j++)
digitalWrite(j,LOW);
digitalWrite(dp,LOW);
}
void digital_2(void)
{
unsigned char j;
digitalWrite(b,HIGH);
digitalWrite(a,HIGH);
for(j=9;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
}
void digital_3(void) 
{digitalWrite(g,HIGH);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(dp,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
}
void digital_4(void) 
{digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
}
void digital_5(void) 
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b, LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_6(void)
{
unsigned char j;
for(j=7;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(c,HIGH);
digitalWrite(dp,LOW);
digitalWrite(b,LOW);
}
void digital_7(void) 
{
unsigned char j;
for(j=5;j<=7;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
for(j=8;j<=11;j++)
digitalWrite(j,LOW);
}
void digital_8(void) 
{
unsigned char j;
for(j=5;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
}
void digital_9(void) {
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void setup()
{
int i;
for(i=4;i<=11;i++)
pinMode(i,OUTPUT);
}
void loop()
{
while(1)
{
digital_0();
delay(1000);
digital_1();
delay(1000);
digital_2();
delay(1000); 
digital_3();
delay(1000); 
digital_4();
delay(1000); 
digital_5();
delay(1000); 
digital_6();
delay(1000); 
digital_7();
delay(1000); 
digital_8();
delay(1000); 
digital_9();
delay(1000);
}}
```
### Assignment-1.1 **Automatic Night Lamp**
![assig1](https://user-images.githubusercontent.com/72330345/163402823-8204a463-8f06-4edc-bd83-39cc7b268604.png)
#### Code
```ino
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
```
### Assignment-1.2 **Thermometer**
![assig1b](https://user-images.githubusercontent.com/72330345/163402873-32b8dbba-5eb1-4e54-9479-7dfb27c8efec.png)
#### Code
```ino
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
```
### Assignment-2.1 **Digital Dice using 6 LED and Push Button**
![Assig2a](https://user-images.githubusercontent.com/72330345/163402926-7346510d-52ce-4768-97e9-6b3f0266eafc.png)
#### Code
```ino
int die;
void setup()
{
  pinMode(6, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  randomSeed(analogRead(0));
  Serial.begin(9600);
}

void loop()
{
  int rand;
  die=digitalRead(6);
  if (die==1){
    rand = random(1,7);}
  switch (rand){
    case 1:
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    break;
    case 2:
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    break;
    case 3:
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    break;
    case 4:
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    break;
    case 5:
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    break;
    case 6:
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    break;
  }
  delay(1000);
  Serial.println(rand);
}
```
### Assignment-2.2 **Digital Dice using 7 Segment Display and Push Button**
![Assig2b](https://user-images.githubusercontent.com/72330345/163402983-506637fc-bfe2-4dd8-9946-122c26999aad.png)
#### Code
```ino
int a=7;
int b=6;
int c=5;
int d=10;
int e=11;
int f=8;
int g=9;
int dp=4;
int die;
void digital_0(void) 
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_1(void) 
{
unsigned char j;
digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
for(j=7;j<=11;j++)
digitalWrite(j,LOW);
digitalWrite(dp,LOW);
}
void digital_2(void)
{
unsigned char j;
digitalWrite(b,HIGH);
digitalWrite(a,HIGH);
for(j=9;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
}
void digital_3(void) 
{digitalWrite(g,HIGH);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(dp,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
}
void digital_4(void) 
{digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
}
void digital_5(void) 
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b, LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_6(void)
{
unsigned char j;
for(j=7;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(c,HIGH);
digitalWrite(dp,LOW);
digitalWrite(b,LOW);
}
void digital_7(void) 
{
unsigned char j;
for(j=5;j<=7;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
for(j=8;j<=11;j++)
digitalWrite(j,LOW);
}
void digital_8(void) 
{
unsigned char j;
for(j=5;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
}
void digital_9(void) {
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void setup()
{
int i;
for(i=4;i<=11;i++)
pinMode(i,OUTPUT);
pinMode(2, INPUT);
randomSeed(analogRead(0));
Serial.begin(9600);
}
void loop()
{
int rand;
die=digitalRead(2);
  if(die==1){
    rand=random(1,7);}
  switch(rand){
    case 1:
    digital_1();
    break;
    case 2:
    digital_2();
    break;
    case 3:
    digital_3();
    break;
    case 4:
    digital_4();
    break;
    case 5:
    digital_5();
    break;
    case 6:
    digital_6();
    break;
  }
  delay(3000);
  Serial.println(rand);
}
```
