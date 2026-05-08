#include <stdio.h>

int main() {
    int b = 1, r = 1;
    printf("Torre:\n");

    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }
    printf("Bispo:\n");
    while (b <= 5)
    {
        printf("Direita\nEsquerda\n");
        b++;
    }
    printf("Rainha:\n");
    do {
        printf("Direita\n");
        r++;
    } while (r <= 8);   

    
    
    return 0;
}