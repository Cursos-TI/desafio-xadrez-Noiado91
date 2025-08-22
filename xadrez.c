#include <stdio.h>

int main() {
    // Quantidade de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i; // Variável auxiliar para loops

    // =========================
    // Movimento da Torre (for)
    // =========================
    printf("Movimento da Torre:\n");
    // Torre se move 5 casas para a direita
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // =========================
    // Movimento do Bispo (while)
    // =========================
    printf("Movimento do Bispo:\n");
    // Bispo se move 5 casas na diagonal para cima e à direita
    i = 1; // Inicializa a variável de controle
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++; // Incrementa a variável de controle
    }
    printf("\n");

    // =========================
    // Movimento da Rainha (do-while)
    // =========================
    printf("Movimento da Rainha:\n");
    // Rainha se move 8 casas para a esquerda
    i = 1; // Inicializa a variável de controle
    do {
        printf("Esquerda\n");
        i++; // Incrementa a variável de controle
    } while (i <= casasRainha);

    return 0;
}