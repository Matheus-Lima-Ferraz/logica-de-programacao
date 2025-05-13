// C++ code
//
void setup()
{
 Serial.begin(9600);
}

//Variáveis - criação e inicialização
int nota1 = 0;
int nota2 = 0;
int frequencia = 0;
float soma = 0;

void loop()
{
  //entrada
  
  Serial.println("Digite a primeira nota");//pergunta
  while(! Serial.available() );//Espera o usuário digitar dar um <Enter>
  nota1 = Serial.parseInt();//resposta do usuário
  
  nota2 = 2;
  
  //processamento
  soma = nota1 + nota2;//7 - inteiro (int)
  
  /*Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!*/
  
  //converte nota1 e nota2 para float antes da conta
  
  //saida
   Serial.println( "Resultado da soma eh: "+ String(soma) );
  
  delay(1000);//aguarda 1 segundo antes de rodar o loop novamente
}




/*eu peguei o codigo na variável númerica2 e eu so fiz algumas alterações mais eu não consegui termina*/