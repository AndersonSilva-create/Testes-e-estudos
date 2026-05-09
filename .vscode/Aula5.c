#include <stdio.h>

    void recurssivo(int numero) {
        if (numero > 0) {
            printf("%d\n", numero);
            recurssivo(numero - 1);
        }
    }


int main() {
    
    int quantidade = 10;
    printf("Recurssivo:\n");
    recurssivo(quantidade);

    return 0;
} 