**Autor:** Marcos Gabriel <br>
**Data da última atualização:** 26/12/2023

## Descrição
Criei está classe para facilitar o trabalho e interação com os componentes PushButtons. Caso veja algo que possa ser melhorado, por favor, entre em contato comigo.

## Arquivo .ino (Código Principal):
Este arquivo .ino contém o código principal do projeto, que utiliza a biblioteca PushButton para interagir com botões conectados a pinos digitais do Arduino.

1. Inclusão de Biblioteca:
O código começa com a inclusão da biblioteca "PushButton.hpp". Essa biblioteca contém a definição da classe PushButton e seus métodos.

2. Definição de Pinos:
São definidas três constantes (btn1, btn2 e btn3) para representar os pinos digitais aos quais os botões estão conectados (10, 9 e 8, respectivamente).

3. Criação de Objetos PushButton:
Três objetos PushButton são criados usando os construtores da classe. Cada objeto é associado a um pino de botão específico.

4. Função Setup:
No método setup(), a comunicação serial é iniciada com uma taxa de baud rate de 9600, permitindo a comunicação com o monitor serial.

5. Loop Principal:
O método loop() é onde a interação com os botões acontece. Ele consiste em três seções condicionais:

- Se o botão 1 for clicado, a mensagem "Btn1 Clicado!" é exibida no monitor serial.
- Se o botão 2 for clicado, a mensagem "Btn2 Clicado!" é exibida no monitor serial.
- Se o botão 3 for mantido pressionado, a mensagem "Btn3 está pressionado!" é exibida no monitor serial.

## Arquivo PushButton.hpp (Definição da Classe):

Este arquivo contém a definição da classe PushButton.

1. Inclusão de Bibliotecas:
A biblioteca padrão do Arduino, <Arduino.h>, é incluída para que as definições do Arduino possam ser usadas.

2. Definição da Classe PushButton:
A classe PushButton é definida com métodos públicos e membros protegidos.

- O construtor da classe recebe um pino e um tempo como argumentos e inicializa os membros correspondentes.
- Os métodos pressBtn() e clickBtn() são declarados como públicos. Esses métodos serão usados para verificar o estado dos botões.

## Arquivo PushButton.cpp (Implementação da Classe):

Este arquivo contém a implementação dos métodos da classe PushButton.

1. Inclusão de "PushButton.hpp":
A biblioteca PushButton.hpp é incluída para que a implementação dos métodos da classe possa ter acesso às definições.

2. Construtor da Classe PushButton:
A implementação do construtor inicializa os membros da classe, configurando o pino do botão como entrada com resistor pull-up e configurando o estado antigo como verdadeiro.

3. Método pressButton():
O método pressBtn() retorna o estado do botão invertido (usando a função digitalRead(_pin)). Ou seja, retorna true quando o botão é pressionado.

4. Método clickButton():
O método clickBtn() verifica se o botão foi pressionado no momento em que o método é chamado, retornando true apenas se o botão tiver sido pressionado (clicado) desde a última vez que o método foi chamado. Isso é feito usando um intervalo de tempo (_time) para distinguir um clique de pressionamento contínuo.

O conjunto de códigos forma um sistema de detecção de botões que responde a diferentes tipos de interações (clique e pressionamento) e fornece feedback ao usuário através do monitor serial. A classe PushButton é modular e reutilizável, permitindo a fácil adição de mais botões e interações em projetos Arduino.