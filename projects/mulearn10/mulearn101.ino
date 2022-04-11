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