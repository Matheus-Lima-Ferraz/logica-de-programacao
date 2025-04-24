//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//variaveis
int idade = 0;//inicia a idade
long idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos =0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //entrada
 Serial.println("digite a sua idade"); //pergunta a idade do usuario
  while(! Serial.available() ){}//Aguarde o usuario digitar
  idade = Serial.parseInt();
  
 //processamento 
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24 ;
  idadeMinutos = idadeHoras * 60;
  
  
 //saida
  Serial.println("Sua idade em meses: " + String(idadeMeses) );
  Serial.println("Sua idade em dias: " + String(idadeDias) );
  Serial.println("Sua idade em horas: " + String(idadeHoras) );
  Serial.println("Sua idade em minutos: " + String(idadeMinutos) );
}