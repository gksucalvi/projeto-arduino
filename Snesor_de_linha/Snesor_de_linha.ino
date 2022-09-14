
const int pinoLed = 13; //PINO DIGITAL UTILIZADO PELO LED
const int pinoSensor = 9; //PINO DIGITAL UTILIZADO PELO SENSOR

void setup() {
  Serial.begin(9600);

  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(pinoLed, OUTPUT); //DEFINE O PINO COMO SAÍDA
  digitalWrite(pinoLed, LOW); //LED INICIA DESLIGADO
}

void loop() {
  if(digitalRead(pinoSensor) == LOW){ //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
      digitalWrite(pinoLed, HIGH); //ACENDE O LED
      Serial.println ("sranco");
  }else{ //SENÃO, FAZ
    digitalWrite(pinoLed, LOW); //APAGA O LED
    Serial.println ("preto");
  }

}
