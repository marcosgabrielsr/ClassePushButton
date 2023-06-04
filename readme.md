# Classe PushButton

## Defininção:
 - Classe criada para trabalhar com pushbuttons com placas com microcontrolador Atmega328p, ou com placas que tenham 14 portas digitais

## Criação:
### - Passo 1:
Inicialmente começamos criando o arquivo .hpp, onde criamos uma defininção inicial da classe e definimos os métodos privados e públicos
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1115039944138821642/image.png">
</div>

### - Passo 2:
Depois criamos um arquivo .cpp, onde criamos a função construtora da classe e criamos as funções que serão acessadas pelos objetos
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1115040965829328958/image.png">
</div>

## Métodos:
### - pressBtn():
Uma função que retorna o estado do botão, se ele está pressionado(true) ou não(false)
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1115041735412822056/image.png">
</div>

### - clickBtn():
Uma função que retorna true no instante em que o botão é pressionado, ou seja, se ele for mantido pressionado será retornado false
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1115042372653436939/image.png">
</div>

## Considerações finais:
Este projeto é meu primeiro projeto trabalhando com classes, planejo estudar mais para ir o deixando mais otimizado e podendo ser utilizado em outros tipois de placas, fique à vontade para fazer alterações e contribuir para o projeto
