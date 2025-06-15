#include <stdio.h>

int main() {
    //movimento da Torre
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    //movimento do Bispo
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (i <= casasBispo) {
        printf("Cima Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    //movimento da Rainha
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    return 0;
}
