#include <stdio.h>

int main()
{

    int codigo, populacao, pontos;
    char estado[10], nome[100];
    float area, pib;
    printf("escreva a letra da carta");
    scanf("%s", estado);
    printf("escreva o codigo da carta");
    scanf("%d", &codigo);
    printf("escreva o nome da cidade");
    scanf("%s", nome);
    printf("escreva a população da carta");
    scanf("%d", &populacao);
    printf("escreva a area da carta");
    scanf("%f", &area);
    printf("escreva o pib da carta");
    scanf("%f", &pib);
    printf("escreva o numero de pontos turisticos da carta");
    scanf("%d", &pontos);

    printf("\nCarta 1\n");
    printf("Certa: %s\nEstado: %d\nCódigo: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\n", estado, codigo, nome, populacao, area, pib, pontos);

    int codigo2, populacao2, pontos2;
    char estado2[10], nome2[100];
    float area2, pib2;

    printf("escreva a letra da carta");
    scanf("%s", estado2);
    printf("escreva o codigo da carta");
    scanf("%d", &codigo2);
    printf("escreva o nome da cidade");
    scanf("%s", nome2);
    printf("escreva a população da carta");
    scanf("%d", &populacao2);
    printf("escreva a area da carta");
    scanf("%f", &area2);
    printf("escreva o pib da carta");
    scanf("%f", &pib2);
    printf("escreva o numero de pontos turisticos da carta");
    scanf("%d", &pontos2);
    printf("\nCarta 2\n");
    printf("Certa: %s\nEstado: %d\nCódigo: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

    if (area > area2)
    {
        printf("A carta 1 tem uma área maior que a carta 2.\n");
    }
    else if (area < area2)
    {
        printf("A carta 2 tem uma área maior que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm a mesma área.\n");
    }

    if (pib > pib2)
    {
        printf("A carta 1 tem um PIB maior que a carta 2.\n");
    }
    else if (pib < pib2)
    {
        printf("A carta 2 tem um PIB maior que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm o mesmo PIB.\n");
    }

    if (populacao / area > populacao2 / area2)
    {
        printf("A carta 1 tem uma densidade populacional maior que a carta 2.\n");
    }
    else if (populacao / area < populacao2 / area2)
    {
        printf("A carta 2 tem uma densidade populacional maior que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm a mesma densidade populacional.\n");
    }

    if (pontos > pontos2)
    {
        printf("A carta 1 tem mais pontos turísticos que a carta 2.\n");
    }
    else if (pontos < pontos2)
    {
        printf("A carta 2 tem mais pontos turísticos que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm o mesmo número de pontos turísticos.\n");
    }

    if (codigo > codigo2)
    {
        printf("A carta 1 tem um código maior que a carta 2.\n");
    }
    else if (codigo < codigo2)
    {
        printf("A carta 2 tem um código maior que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm o mesmo código.\n");
    }

    if (estado[0] > estado2[0])
    {
        printf("A carta 1 tem um estado com letra inicial maior que a carta 2.\n");
    }
    else if (estado[0] < estado2[0])
    {
        printf("A carta 2 tem um estado com letra inicial maior que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm estados com a mesma letra inicial.\n");
    }

    if (nome[0] > nome2[0])
    {
        printf("A carta 1 tem um nome de cidade com letra inicial maior que a carta 2.\n");
    }
    else if (nome[0] < nome2[0])
    {
        printf("A carta 2 tem um nome de cidade com letra inicial maior que a carta 1.\n");
    }
    else
    {
        printf("As cartas têm nomes de cidade com a mesma letra inicial.\n");
    }

    return 0;
}