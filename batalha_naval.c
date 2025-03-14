#include <stdio.h>

#define TAMANHO 10
#define TAMANHO_HABILIDADE 5
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int orientacao) {
    if (orientacao == 0) { // Horizontal
        for (int i = 0; i < 3; i++) {
            if (coluna + i < TAMANHO) {
                tabuleiro[linha][coluna + i] = NAVIO;
            }
        }
    } else if (orientacao == 1) { // Vertical
        for (int i = 0; i < 3; i++) {
            if (linha + i < TAMANHO) {
                tabuleiro[linha + i][coluna] = NAVIO;
            }
        }
    }
}

void aplicarHabilidade(int tabuleiro[TAMANHO][TAMANHO], int linhaOrigem, int colunaOrigem, int habilidade[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE]) {
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int linha = linhaOrigem + i - TAMANHO_HABILIDADE / 2;
            int coluna = colunaOrigem + j - TAMANHO_HABILIDADE / 2;

            if (linha >= 0 && linha < TAMANHO && coluna >= 0 && coluna < TAMANHO && habilidade[i][j] == 1) {
                tabuleiro[linha][coluna] = HABILIDADE;
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    inicializarTabuleiro(tabuleiro);

    posicionarNavio(tabuleiro, 1, 1, 0); // Navio horizontal
    posicionarNavio(tabuleiro, 4, 4, 1); // Navio vertical

    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 1, 0},
        {0, 0, 1, 0, 0}
    };

    aplicarHabilidade(tabuleiro, 2, 2, cone);
    aplicarHabilidade(tabuleiro, 6, 6, cruz);
    aplicarHabilidade(tabuleiro, 8, 8, octaedro);

    exibirTabuleiro(tabuleiro);

    return 0;
}
