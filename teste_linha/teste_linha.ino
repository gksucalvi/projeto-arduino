//Definição dos pinos de controle do motor
#define M1 3 // Pino_Velocidade 1º Motor ( 0 a 255)_ Porta ATV_A ponte H;
#define M2 6 //Pino_Velocidade 2º Motor ( 0 a 255) _ Porta ATV_B ponte H;
#define dir1 2 //Pino_Direção do 1º Motor: Para frente / Para trás (HIGH ou LOW)_ porta IN1 ponte H;
#define dir2 7 //Pino_Direção do 2º Motor: Para frente / Para trás (HIGH ou LOW)_ porta IN3 ponte H;
int IN2 =  4;
int IN4 =  8;
//Definição dos pinos dos sensores
#define pin_S1 9
#define pin_S2 11
bool Sensor1 = 0;
bool Sensor2 = 0;

//variável responsável por controlar a velocidade dos motores
int velocidade = 150;
void setup(){

//Setamos os pinos de controle dos motores como saída
pinMode(M1, OUTPUT);
pinMode(M2, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);

//Setamos a direção inicial do motor como 0, isso fará com que ambos os motores girem para frente
digitalWrite(dir1, LOW);
digitalWrite(dir2, LOW);

digitalWrite(IN2, HIGH);
digitalWrite(IN4, HIGH);

//Setamos os pinos dos sensores como entrada
pinMode(pin_S1, INPUT);
pinMode(pin_S2, INPUT);
pinMode(IN2, INPUT);
pinMode(IN4, INPUT);
}

void loop(){
//Neste processo armazenamos o valor lido pelo sensor na variável que armazena tais dados.
Sensor1 = digitalRead(pin_S1);
Sensor2 = digitalRead(pin_S2);

//Aqui está toda a lógica de comportamento do robô: Para a cor branca atribuímos o valor 0 e, para a cor preta, o valor 1.
if((Sensor1 == 0) && (Sensor2 == 0)){ // Se detectar na extremidade das faixas duas cores brancas
analogWrite(M1, velocidade); // Ambos motores ligam na mesma velocidade
analogWrite(M2, velocidade);
}

if((Sensor1 == 1) && (Sensor2 == 0)){ // Se detectar um lado preto e o outro branco
analogWrite(M1, 0); // O motor 1 desliga
analogWrite(M2, velocidade); // O motor 2 fica ligado, fazendo assim o carrinho virar
}

if((Sensor1 == 0) && (Sensor2 == 1)){ // Se detectar um lado branco e o outro preto
analogWrite(M1, velocidade); //O motor 1 fica ligado
analogWrite(M2, 0); // O motor 2 desliga, fazendo assim o carrinho virar no outro sentido
}
}
