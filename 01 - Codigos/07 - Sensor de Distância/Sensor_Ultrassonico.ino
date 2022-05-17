#define echoPin 2
#define trigPin 3

long duracao; //Duração do tempo da onda de som
int distancia; //Distancia entre o sensor e o objeto



void setup(){

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
  Serial.println("Teste Iniciado");

}


void loop(){

  getDuracao();
  distancia = getDistancia(duracao);
  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  

}

long getDuracao(){
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duracao = pulseIn(echoPin, HIGH);
  
}

int getDistancia(long duracao){

  int dist = duracao/29/2;
  return dist;

}