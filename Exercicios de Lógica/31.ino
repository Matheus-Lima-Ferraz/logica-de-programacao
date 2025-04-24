//Faça um programa que receba um número e exiba o seu dobro.

//Variaveis
int Numero1 = 0;

void setup()
{
  Serial.begin(9600);//inicia a Serial
}

void loop()
{
    //cabeçalho - 2 pipes + 30 tracinhos
  
  Serial.println("|-----------------------------|");
  Serial.println("|                             |");
  Serial.println("|         LOPAL - EX03        |");
  Serial.println("|                             |");
  Serial.println("|-----------------------------|");
  Serial.println();//pula uma linha
  
 //entrada
  Serial.println("Digite um numero");//pergunta o numero do usuario
  while(! Serial.available() ){};//Aguarde o usuario digitar(para o loop)
  Numero1 = Serial.parseInt();
  
  
 //processamento
  Numero1 = Numero1 * 2; 
  
 //saida;
  
 Serial.println( "Seu numero e : " + String(Numero1) );
 }