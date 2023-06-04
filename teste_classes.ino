//Incluindo a biblioteca
#include "PushButton.hpp"
//Definindo a porta digital do botao
#define btn1 10
#define btn2 9

//Criando objetos
PushButton button1(btn1);
PushButton button2(btn2);

void setup(){
  //Inicializando monitor serial
  Serial.begin(9600);
}

void loop(){
  //Se 'clicarmos' o button1, será escrito "Clicaldo!" no monitor serial
  if(button1.clickBtn()){
    Serial.println("Clicado!");
  }

  //Se 'pressionarmos' o button2, será escrito "Pressionado!" no monitor serial
  if(button2.pressBtn()){
    Serial.println("Pressionado!");
  }
}