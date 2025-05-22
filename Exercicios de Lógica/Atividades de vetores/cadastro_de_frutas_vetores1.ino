void setup()
{
   Serial.begin(9600);
  
  Serial.println("***PROGRAMA SACOLHAO DO ZE DA MOITA***");
  Serial.println();
  
  
  String frutas[6];
  
  Serial.println("Oh Zeh, bora cadastrar as frutas!");
    
    Serial.println();
  
  
  for(int i = 0; i <=5; i++){
   
Serial.println("Informe a " + String(i + 1) + " a Fruta");
   while(!Serial.available());
    String fruta = Serial.readString();
    
    frutas[i] = fruta;
    
    for(int i = 0; i<=4; i++){
    Serial.println(frutas[i]);
    }
  
  }
  
}

void loop()
{
  
