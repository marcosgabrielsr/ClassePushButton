#Classe PushButton

##Defininção:
 - Classe criada para trabalhar com pushbuttons com qualquer placa que tenha um sistema de entradas e possa ser programada pela arduino IDE

##Criação:
### - Passo 1: Inicialmente começamos criando o arquivo .hpp, onde criamos uma defininção inicial da classe e definimos os métodos privados e públicos
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1122987439829553182/image.png">
</div>

### - Passo 2: Depois criamos um arquivo .cpp, onde criamos a função construtora da classe e criamos as funções que serão acessadas pelos objetos
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1122988222922883162/image.png">
</div>

##Métodos:
### - pressBtn(): Uma função que retorna o estado do botão, se ele está pressionado(true) ou não(false)
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1115041735412822056/image.png">
</div>

### - clickBtn(): Uma função que retorna true no instante em que o botão é pressionado, ou seja, se ele for mantido pressionado será retornado false
<div align="center">
  <img src="https://cdn.discordapp.com/attachments/1112460925547581622/1122995425528529028/image.png">
</div>

##Considerações finais:
Esta é uma atualização, nela foi alterado antigos erros na função construtora e adicionao a opção de setar um tempo para controle do Efeito Bouncing do botão. Acredito que esta versão esteja mais otimizada e mais fácil de se entender.
