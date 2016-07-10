//Teste de acionamento relé por RC via Turnigy 9X
//Turnigy
int Canal01 = 22;
int Canal02 = 24;
int Canal03 = 26;
int Canal04 = 28;
int Canal05 = 30;
int Canal06 = 32;
int Canal07 = 34;
int Canal08 = 36;
int Canal09 = 38;
unsigned long RCanal01;
unsigned long RCanal02;
unsigned long RCanal03;
unsigned long RCanal04;
unsigned long RCanal05;
unsigned long RCanal06;
unsigned long RCanal07;
unsigned long RCanal08;
unsigned long RCanal09;

//Relés
int canal3 = 10;
int canal4 = 9;
int canal5 = 8;
int canal6 = 7;
int canal7 = 4;
int canal8 = 3;

void setup ()
{

  Serial.begin(9600);

  //Define pinos para o rele como saida
  pinMode(canal3, OUTPUT);
  pinMode(canal4, OUTPUT);
  pinMode(canal5, OUTPUT);
  pinMode(canal6, OUTPUT);
  pinMode(canal7, OUTPUT);
  pinMode(canal8, OUTPUT);
  //Turnigy
  pinMode(Canal01, INPUT);
  pinMode(Canal02, INPUT);
  pinMode(Canal03, INPUT);
  pinMode(Canal04, INPUT);
  pinMode(Canal05, INPUT);
  pinMode(Canal06, INPUT);
  pinMode(Canal07, INPUT);
  pinMode(Canal08, INPUT);
  pinMode(Canal09, INPUT);


}

void loop()
{

  RCanal01 = pulseIn(Canal01, HIGH);//Read 1 a 9, esquerda e direita
  RCanal01 = map(RCanal01,1000,2000,0,10);

  /*RCanal02 = pulseIn(Canal02, HIGH);
  RCanal02 = map(RCanal02,1000,2000,0,10);*/

  RCanal03 = pulseIn(Canal03, HIGH);//Read 0 a 7, frente e traz
  RCanal03 = map(RCanal03,1000,2000,0,10);

  /*RCanal04 = pulseIn(Canal04, HIGH);
  RCanal04 = map(RCanal04,1000,2000,0,10);

  RCanal05 = pulseIn(Canal05, HIGH);
  RCanal05 = map(RCanal05,1000,2000,0,10);

  RCanal06 = pulseIn(Canal06, HIGH);
  RCanal06 = map(RCanal06,1000,2000,0,10);

  RCanal07 = pulseIn(Canal07, HIGH);
  RCanal07 = map(RCanal07,1000,2000,0,10);

  RCanal08 = pulseIn(Canal08, HIGH);
  RCanal08 = map(RCanal08,1000,2000,0,10);

  RCanal09 = pulseIn(Canal09, HIGH);
  RCanal09 = map(RCanal09,1000,2000,0,10);

  Serial.print("RCanal01: ");
  Serial.println(RCanal01);

  Serial.print("RCanal03: ");
  Serial.println(RCanal03);*/
  delay(500);

  if ((RCanal03 > 3.0) and ((RCanal01 >= 4.0) and (RCanal01 <= 6.0))) {
    digitalWrite(canal3, HIGH);
    digitalWrite(canal4, HIGH);
    digitalWrite(canal5, HIGH);
    digitalWrite(canal8, HIGH);
  } else {

    if ((RCanal03 > 3.0) and ((RCanal01 <= 3.0) or (RCanal01 >= 7.0))) {
      digitalWrite(canal3, HIGH);
      digitalWrite(canal4, HIGH);
      /*digitalWrite(canal6, HIGH);
      digitalWrite(canal7, HIGH);*/
    } else {
      digitalWrite(canal3, LOW);
      digitalWrite(canal4, LOW);
      digitalWrite(canal5, LOW);
      digitalWrite(canal6, LOW);
      digitalWrite(canal7, LOW);
      digitalWrite(canal8, LOW);
    }
  }
}
