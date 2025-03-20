int valorBotao;

void setup()
{
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(5,OUTPUT);

  pinMode(8,INPUT);
 
}

void loop(){
  digitalWrite(5,HIGH);
  
  valorBotao = digitalRead(8);	
  if(valorBotao == 1){
    digitalWrite(5,LOW);
      digitalWrite(3,HIGH);
    	delay(1000);
          digitalWrite(3,LOW);
        
      digitalWrite(2,HIGH);
          delay(3000);
    		digitalWrite(2,LOW);
    
  }
}