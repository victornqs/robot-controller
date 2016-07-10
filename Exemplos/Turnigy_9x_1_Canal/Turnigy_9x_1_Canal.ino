//Leitura de 1 canal por RC
int Canal01 = 7;

unsigned long RCanal01;

void setup()
{
  Serial.begin(9600); // inicializa a comunicação serial
  pinMode(Canal01, INPUT);
}

void loop()
{
  RCanal01 = pulseIn(Canal01, HIGH);
  RCanal01 = map(RCanal01,1000,2000,0,10);
  Serial.print("Duracao: ");
  Serial.println(RCanal01);
  delay(1000);
}
