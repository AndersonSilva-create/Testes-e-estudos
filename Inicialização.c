//Aula 1 - Inicialização de Variáveis

#include <stdio.h>

int main() {
    int codigo, populacao, pontos;
    char estado[10], nome[100];
    float area, pib;
    printf("esreva a letra da carta");
    scanf("%9s", estado);
    printf("esreva o codigo da carta");
    scanf("%d", &codigo);
    printf("esreva o nome da cidade");
    scanf("%99s", nome);
    printf("esreva a população da carta");
    scanf("%d", &populacao);
    printf("esreva a area da carta");
    scanf("%f", &area);
    printf("esreva o pib da carta");
    scanf("%f", &pib);
    printf("esreva o numero de pontos turisticos da carta");
    scanf("%d", &pontos);
    printf("\nCarta 1\n");
    printf("Certa: %s\nEstado: %d\nCódigo: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\n", estado, codigo, nome, populacao, area, pib, pontos);
    return 0;
}
