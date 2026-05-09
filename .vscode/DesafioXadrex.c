#include <stdio.h>

    void moveTorre(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            moveTorre(casas - 1);
        }
    }

    void moveBispo(int casas) {
        if (casas > 0) {
            printf("Direita\nEsquerda\n");
            moveBispo(casas - 1);
        }
    }

    void moveRainha(int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            moveRainha(casas - 1);
        }
    }

     void moveCavalo(int movimentos) {
        if (movimentos > 0) {
            for (int i = 0; i < 2; i++) {
                printf("Cima\n");
            }
            printf("Direita\n");
            moveCavalo(movimentos - 1);
        }
    }




int main() {
    // Imprimme o movimento da TORRE
    printf("Torre:\n");
    moveTorre(5);
    printf("\n");

    // Imprimme o movimento do BISPO
    printf("Bispo:\n");
    moveBispo(5);
    printf("\n");

    // Imprimme o movimento da RAINHA
    printf("Rainha:\n");
    moveRainha(8);
    printf("\n");

    // Imprimme o movimento do CAVALO
    printf("Cavalo:\n");
    moveCavalo(1);
    printf("\n");

    return 0;
}