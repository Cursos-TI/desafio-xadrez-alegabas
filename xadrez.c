#include <stdio.h>

// Função recursiva para mover a Torre 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva com loops aninhados para mover o Bispo 5 casas para cima na diagonal direita
void moverBispo(int casas) {
    if (casas == 0) return;

    // Simula o movimento: sobe 1 linha e vai 1 coluna para a direita
    for (int linha = 0; linha < 1; linha++) {
        for (int coluna = 0; coluna < 1; coluna++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);
}

// Função com loops complexos para mover o Cavalo 2 casas para cima e 1 para a direita
void moverCavalo(int movimentos) {
    int movimentoAtual = 0;

    for (int i = 1; i <= movimentos * 2; i++) {
        for (int j = 1; j <= movimentos; j++) {
            if (i == 2 && j == 1) {
                printf("Cima\n");
                printf("Cima\n");
                printf("Direita\n");
                movimentoAtual++;

                if (movimentoAtual >= movimentos) {
                    break;
                }
            } else {
                continue;
            }
        }

        if (movimentoAtual >= movimentos) {
            break;
        }
    }
}

int main() {
    // Define o número de casas para cada peça
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
    int movCavalo = 1;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(movTorre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(movBispo);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(movRainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(movCavalo);

    return 0;
}
