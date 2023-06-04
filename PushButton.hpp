//
// Classe PushButtons
//  arquivo hpp

#ifndef PUSHBUTTON
#define PUSHBUTTON

//incluindo a biblioteca padrão do arduino
#include <Arduino.h>

//Criando a classe PushButton
class PushButton {
  //definindo métodos públicos
  public:
    PushButton(const uint8_t pin);
    bool pressBtn();
    bool clickBtn();

  //definindo métodos privados
  protected:  
    const uint8_t _pin;
};

#endif
