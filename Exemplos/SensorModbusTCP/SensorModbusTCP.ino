//Possibilita a leitura dos sensores por rede ethernet via Modbus TCP
#include <SPI.h>
#include <Ethernet.h>
#include <Mudbus.h>

//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

//Define os pinos para o trigger e echo
#define pino_trigger 4
#define pino_echo 5

//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);


Mudbus Mb;


void setup() {

    byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
    byte ip[] = { 192, 168, 0, 2 };
    byte gateway[] = { 192, 168, 0, 1 };
    byte subnet[] = { 255, 255, 254, 0 };
    Ethernet.begin(mac, ip, subnet);


}

void loop() {

  int cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  delay(1000);

   Mb.Run();
   Mb.R[0]=cmMsec;
   Mb.C[0]=cmMsec;


}
