// C++ code
//Variável Globais
/*
  
  Cria cada vetor tamanho 4,
  fazendo parte do mesmo cadastro
*/
String convidados[4];//cria um vetor tamanho 4
int idadeConvidados[4];//Camel case  
String emailConvidados[4];

//Funções
void desenhaCabecalho()
{
  Serial.println(" CHURRASCAO DO MATHEUS ");
  Serial.println();
  Serial.println();
}


void setup()
{
  Serial.begin(9600);//inicia a comunicação serial  
}


void loop()
{
 //fazeer um cabeçalho bonitinho para o programa 
  desenhaCabecalho();//chama a função pra desenha o cabeçalho
  
  //cadastra os dados
  for(int i = 0; i < 4 ; i++)
 { 
  //solicitar o nome do usúario
   Serial.println("Iniforme " + String);
   while(!Serial.available());
   convidados[i] = Serial.readString();
   
   //solicitar a idade 
    Serial.println("Informe a idade de " + convidados[i]);
    while(!Serial.available());
    idadeConvidados[i] = Serial.parseInt();
      
   //solicitar o email
    Serial.println("Informe o email de " + convidados[i]);
    while(!Serial.available());
    emailConvidados[i] = Serial.readString();
    
}//fim do for
  
  
 //Exibir a lista de convidados 
 //obs: só vai na esta quem for maior de idade >= 18
  
  
 //criar um for ???
 //Exibir com o print cada um dos arrays
 //pular uma linha
  
  
  delay(2000);//pausa de 2 segundos 
}//fim do loop