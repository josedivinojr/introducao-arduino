#define echoPin 2
#define trigPin 3
#define buzzerPin 5

long duracao; //Duração do tempo da onda de som
int distancia; //Distancia entre o sensor e o objeto

void setup(){

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Teste Iniciado");

}


void loop(){

  getDuracao();
  distancia = getDistancia(duracao);
  
  if(distancia < 100){
  
    tone(buzzerPin, 1000, 500);
    delay(500);
    tone(buzzerPin, 1000, 500);
    delay(500);
  
  }
  
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");
  

}

void getDuracao(){
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duracao = pulseIn(echoPin, HIGH);
  
}

int getDistancia(long duracao){

  int dist_aux = duracao/29/2;
  return dist_aux;

}

