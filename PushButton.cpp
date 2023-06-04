//
// Classe PushButton
//  arquivo cpp

#include "PushButton.hpp"
    //Criando a função construtora da classe
    PushButton::PushButton(const uint8_t pin):
    _pin(pin)
    {
        //define o pino do botão como entrada com resistor pullup
        pinMode(_pin, INPUT_PULLUP);
    }

    //Método pressBtn(): Verifica se o botão está pressioando, ou seja se for empurrado retornará true
    //se não retornará false
    bool PushButton::pressBtn(){
      return !digitalRead(_pin);
    }

    //Método clickBtn(): Verifica se o botão foi pressionado, e retorna true apenas no instante em que ele foi pressionado(clicado)
    //*OBS: Classe criada para trabalhar com arduino UNO com suas 14 portas digitais
    bool PushButton::clickBtn(){
      //Um array que salva o tempo de cada botão para evitar o efeito boucing
      static unsigned long timeBtn[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
      //Um array que salva o estado antigo de cada botão
      static bool oldState[14] = {true, true, true, true, true, true, true, true, true, true, true, true};
      //variavel que recebe a leitura do pino do botão
      bool stateBtn = digitalRead(_pin);
      //variavel que será retornada que sempre retorna false ao não ser quando o botão é clicado
      bool value = false;

      //Verifica se já se passou o tempo em milissegundos por meio da função millis()
      if((millis() - timeBtn[_pin] >= 120)){
        //verifica se o estado anterior é diferente do estaudo atual(stateBtn)
        if(oldState[_pin] && !stateBtn){
          //reseta o tempo referente ao pino do botão
          timeBtn[_pin] = millis();
          //value recebe true
          value = true;
        }
        //o estado antigo do botão recebe o estado atual
        oldState[_pin] = stateBtn;
      }

      //retorna value
      return value;
    }
