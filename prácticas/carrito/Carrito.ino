
int motorpin1 = 9;                  
int motorpin2 = 10;  
int motorpin3 = 11;                  
int motorpin4 = 12; 

void setup(){
  pinMode(13,OUTPUT);
  pinMode(motorpin1,OUTPUT);        
  pinMode(motorpin2,OUTPUT);
  pinMode(motorpin3,OUTPUT);        
  pinMode(motorpin4,OUTPUT);
}

void enciende(){
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
}

void avanza(){
  digitalWrite(motorpin1,HIGH);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,HIGH); 
  delay(500);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW); 
}

void retrocede(){
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,HIGH);
  digitalWrite(motorpin3,HIGH);
  digitalWrite(motorpin4,LOW);
  delay(500);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW); 
}

void derecha(){
  digitalWrite(motorpin1,HIGH);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,HIGH); 
  digitalWrite(motorpin4,LOW);
  delay(300);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW);  
}

void izquierda(){
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,HIGH);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,HIGH);
  delay(300);
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW); 
}
void parar(){
  digitalWrite(motorpin1,LOW);
  digitalWrite(motorpin2,LOW);
  digitalWrite(motorpin3,LOW);
  digitalWrite(motorpin4,LOW);
  delay(1000);
}


void loop(){
 //INGRESA EL CODIGO DEL CARRITO AQUI :) 
avanza();
delay(1000);
avanza();
delay(1000);
avanza();
delay(1000);
derecha();
delay(1000);
avanza();
delay(1000);
izquierda();
delay(10000);52
}
