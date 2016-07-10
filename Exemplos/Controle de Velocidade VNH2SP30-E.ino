
    int InADireita = 7;
    int InBDireita = 8;
    int PWMDireita = 3;  //PWMDireita connects to pin 3

     int InAEsquerda = 11;
    int InBEsquerda = 10;
    int PWMEsquerda = 9;  //PWMDireita connects to pin 3
    
    //input nilai PWM 
    int PWMDireita_val = 127; //(25% = 64; 50% = 127; 75% = 191; 100% = 255)

    void setup() {
   
    pinMode(InADireita, OUTPUT);
    pinMode(InBDireita, OUTPUT);
    pinMode(PWMDireita, OUTPUT);
    }

    void loop() {
    //arah motor CW  
    digitalWrite(InADireita, HIGH);
    digitalWrite(InBDireita, LOW);
    analogWrite(PWMDireita, PWMDireita_val);
    
    //arah motor CCW 
    //digitalWrite(InADireita, LOW);
    //digitalWrite(InBDireita, HIGH);
    //analogWrite(PWMDireita, PWMDireita_val);
    
    }
