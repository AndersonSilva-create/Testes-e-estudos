#include <stdio.h>

int main() {
    
    char produtoA[25] = "Produto A", produtoB[25] = "Produto B";
    unsigned int estoqueA = 2432, estoqueB = 4321;
    float preçoA = 23.75, preçoB = 45.50;
    unsigned int estoqueMinA = 500, estoqueMinB = 1000;
    double valorTotalA = estoqueA * preçoA, valorTotalB = estoqueB * preçoB;

    // Informaçõees
    printf("O produto %s tem %u inidade no estoque, cada unidade custa R$%.2f e o estoque mminimo é de %u unidades.\n", produtoA, estoqueA, preçoA, estoqueMinA);
    printf("O produto %s tem %u inidade no estoque, cada unidade custa R$%.2f e o estoque mminimo é de %u unidades.\n", produtoB, estoqueB, preçoB, estoqueMinB);
    printf("O valor total do estoque é de R$%.2f para o produto %s e R$%.2f para o produto %s.\n", valorTotalA, produtoA, valorTotalB, produtoB);

    return 0;
}