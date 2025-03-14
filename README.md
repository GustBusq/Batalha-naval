Batalha Naval com Habilidades Especiais

Descrição

Este é um projeto em C que implementa um jogo simplificado de Batalha Naval com funcionalidades aprimoradas. O jogo utiliza um tabuleiro 10x10 e permite o posicionamento de navios tanto horizontalmente, verticalmente quanto diagonalmente. Além disso, o projeto inclui habilidades especiais que afetam áreas específicas do tabuleiro.

Funcionalidades

Tabuleiro 10x10: Representado por uma matriz bidimensional preenchida com água (valor 0).

Posicionamento de Navios:

2 navios posicionados horizontalmente/verticalmente.

2 navios posicionados diagonalmente.

Navios são representados pelo valor 3.

Habilidades Especiais:

Cone: Expande de um ponto central para baixo.

Cruz: Possui formato de cruz com ponto de origem no centro.

Octaedro: Representado como um losango com ponto de origem central.

Áreas afetadas pelas habilidades são marcadas com o valor 5.

Validação de sobreposição e limites do tabuleiro.

Exibição do tabuleiro com diferentes elementos representados por números diferentes.

Como executar o programa

Compile o código usando um compilador C, por exemplo:

gcc nome_do_arquivo.c -o batalha_naval

Execute o programa compilado:

./batalha_naval

Exemplo de Saída

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 3 0 0 0 0 0 0 0
0 0 3 0 0 0 0 0 0 0
0 0 3 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

Próximos Passos

Implementar a lógica de dano causado pelos ataques das habilidades.

Permitir que o usuário defina as coordenadas dos navios e habilidades.

Melhorar a interface de exibição do tabuleiro.

Autor

Desenvolvido por Gustavo.

Tenho 18 anos, estou inicando agora no mundo da programação, sempre buscando conhecimento, e inovação, esse é primeiro passo, e inicio de um grande salto, para mergulhar nesse mundo incrivel que chamamos de tecnologia da informação