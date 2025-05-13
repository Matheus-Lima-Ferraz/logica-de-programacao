// C++ code
//

float numero1 = 0.0;
float numero2 = 0.0;
float soma;
int escolhaDaOperacao;
int contador = 0;


void setup()
{
  
  Serial.begin(9600);
  
  
  
  do{
    Serial.println("Bem-vindo(a) a calculadora mega inteligente :P!!!");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");  
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir"); 


    while(!Serial.available ()){}//espera o usúario digitar


    escolhaDaOperacao = Serial.parseInt();//armazena o que o usúario digitou na variável


    Serial.println("Agora, para realizar a operacao, digite o 1º numero:");
    while(!Serial.available ()){}
    numero1 = Serial.parseFloat();


    Serial.println("Agora, digite o segundo numero:");
    while(!Serial.available ()){}
    numero2 = Serial.parseFloat();


    if(escolhaDaOperacao == 1){
      soma = numero1 + numero2;
      Serial.println("WOW!!! o resultado foi: " + String(soma));
    }

    Serial.println("Voce deseja continuar? Se sim, digite [s], se não digite [n]");
    while(!Serial.available ()){}//espera o usúario digitar


    if(Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;


      Serial.println("Até breve, obrigado por usar a calculadora inteligente ^^");
      Serial.println("Caso queira voltar, reinicie o sistema.");
    }    
     	
  }
  while(contador != 0);
}

void loop()
 {
  //sem codigo
 }
  
