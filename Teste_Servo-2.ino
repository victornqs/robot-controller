//Biblioteca do Arduino para
//controlar Servo Motores
#include <Servo.h>

Servo servo1;
Servo servo2;
int pos; // Posição Servo

char buffer[4];
int received;

void setup(){
  
  //Inicia a porta serial
  Serial.begin(9600);
  
  //Atribui as entradas do Arduino
  //as variaveis
  servo1.attach(10);
  servo2.attach(11);
  
  //Movimentamos ambos os motores para 90 graus
  servo1.write(90);
  servo2.write(90);
  
  received = 0;
}

void loop(){
  
  for(pos = 0; pos < 180; pos++)
  {
    servo1.write(pos);
    servo2.write(pos);
  delay(15);
  }
delay(1000);
  for(pos = 180; pos >= 0; pos--)
  {
    servo1.write(pos);
    servo2.write(pos);
    delay(15);
  }

}
