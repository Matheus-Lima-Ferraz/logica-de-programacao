
// C++ code
//
int palpite;

void setup()
{
  Serial.begin(9600);
  random(analogRead(0));//inicia e normalize a porta
}

void desenhaCabecalho()
{
  Serial.println("Bem vindo ao programa 'Jogo de dados'");
  Serial.println("");
  delay(500);
}

void desenhaPontinho(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}

void loop()
{
  desenhaCabecalho();

  //solicitar palpite do usuario
  Serial.println("Digite seu palpite de 1 a 6");
  while(!Serial.available());  
  palpite = Serial.parseInt();

  //jogar dado
  int numeroSorteado = random(1, 7); //Sorteia um numero de 1 até 7 - 1, ou seja 6


  Serial.print("Jogando dado ");
  desenhaPontinho();

  //exibir o palpite do usuario
  Serial.println();

  Serial.print("palpite do usuario: " + String(palpite));
  Serial.println();


  //exibif numero sorteado
  Serial.println("Numero do Dado: " + String(numeroSorteado));
  Serial.println("");

  if(palpite == numeroSorteado)
  {
    Serial.println("Numeros iguais!!!");
  } else{
    Serial.println("Que pena! Tente outra vez");
  }

}
