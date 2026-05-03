#include <stdio.h>

int main()
{

    int codigo, populacao, pontos, escolha;
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
    printf("Estado: %s\nCódigo: %d\nCidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\n", estado, codigo, nome, populacao, area, pib, pontos);

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
    printf("Estado: %s\nCódigo: %d\nCidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\n", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

    printf("\nComparação entre as cartas:\n1 - Pontos Turísticos\n2 - População\n3 - Área\n4 - PIB\n5 - Densidade demográfica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        if (pontos > pontos2) {
            printf("A carta 1 tem mais pontos turísticos do que a carta 2.\n");
        } else if (pontos < pontos2) {
            printf("A carta 2 tem mais pontos turisticos do que a carta 1.\n");
        } else {
            printf("As cartas têm o mesmo número de pontos turísticos.\n");
        }
        break;
    case 2:
        if (populacao > populacao2) {
            printf("A carta 1 tem mais população do que a carta 2.\n");
        } else if (populacao < populacao2) {
            printf("A carta 2 tem mais população do que a carta 1.\n");
        } else {
            printf("As cartas têm a mesma população.\n");
        }
        break;
    case 3:
        if (area > area2) {
            printf("A carta 1 tem mais área do que a carta 2.\n");
        } else if (area < area2) {
            printf("A carta 2 tem mais área do que a carta 1.\n");
        } else {
            printf("As cartas têm a mesma área.\n");
        }
        break;
    case 4:
        if (pib > pib2) {
            printf("A carta 1 tem mais PIB do que a carta 2.\n");
        } else if (pib < pib2) {
            printf("A carta 2 tem mais PIB do que a carta 1.\n");
        } else {
            printf("As cartas têm o mesmo PIB.\n");
        }
        break;
    case 5:
        {
            float densidade1 = populacao / area;
            float densidade2 = populacao2 / area2;
            if (densidade1 > densidade2) {
                printf("A carta 1 tem uma densidade demográfica maior do que a carta 2.\n");
            } else if (densidade1 < densidade2) {
                printf("A carta 2 tem uma densidade demográfica maior do que a carta 1.\n");
            } else {
                printf("As cartas têm a mesma densidade demográfica.\n");
            }
        }
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    return 0;
}