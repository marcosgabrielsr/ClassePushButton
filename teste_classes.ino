//Incluindo a biblioteca
#include "PushButton.hpp"
//Definindo a porta digital do botao
#define btn1 10
#define btn2 9
#define btn3 8

//Criando objetos
PushButton button1(btn1, 3000);
PushButton button2(btn2, 250);
PushButton button3(btn3, 170);

void setup(){
  //Inicializando monitor serial
  Serial.begin(9600);
}

void loop(){
  //Se 'clicarmos' o button1, será escrito "Btn1 Clicaldo!" no monitor serial
  if(button1.clickBtn()){
    Serial.println("Btn1 Clicado!");
  }

  //Se 'clicarmos' o button2, será escrito "Btn2 Clicaldo!" no monitor serial
  if(button2.clickBtn()){
    Serial.println("Btn2 Clicado!");
  }

  //Se 'mantermos pressionarmos' o button3, será escrito "Btn3 está pressionado!" no monitor serial
  if(button3.pressBtn()){
    Serial.println("Btn3 está pressionado!");
  }
}