//Importando bibliotecas
#include <Arduino.h>
#include "PushButton.hpp"

//Mapeando hardware
#define pinBtn1 8
#define pinBtn2 9

//Criando objetos PushButton
PushButton button1(pinBtn1, 170);
PushButton button2(pinBtn2, 170);

void setup(){
    //Inicializando monitor serial
    Serial.begin(9600);
}

void loop(){
    //Verifica se o button1 foi clicado
    if(button1.clickButton())
        Serial.println("Button1 foi clicado!");
    
    //Verifica se o button2 está sendo pressionado
    if(button2.pressButton())
        Serial.println("Button2 está sendo pressionado!");
}