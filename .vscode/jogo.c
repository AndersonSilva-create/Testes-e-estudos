#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

const char* nomeJogada(int jogada) {
    switch (jogada) {
        case PEDRA: return "Pedra";
        case PAPEL: return "Papel";
        case TESOURA: return "Tesoura";
        default: return "Inválida";
    }
}

int verificarVitoria(int usuario, int computador) {
    if (usuario == computador) return 0; // Empate
    if ((usuario == PEDRA && computador == TESOURA) ||
        (usuario == PAPEL && computador == PEDRA) ||
        (usuario == TESOURA && computador == PAPEL))
        return 1; // Usuário venceu
    return -1; // Computador venceu
}

void jogarRockPaperScissors() {
    printf("Jogo iniciado!\n");
    printf("Escolha sua jogada:\n1. Pedra\n2. Papel\n3. Tesoura\n");
    
    int escolhaComputador = rand() % 3 + 1;
    int escolhaUsuario;
    scanf("%d", &escolhaUsuario);
    
    if (escolhaUsuario < PEDRA || escolhaUsuario > TESOURA) {
        printf("Escolha inválida.\n");
        return;
    }
    
    printf("Você escolheu %s.\n", nomeJogada(escolhaUsuario));
    printf("Computador escolheu %s.\n", nomeJogada(escolhaComputador));
    
    int resultado = verificarVitoria(escolhaUsuario, escolhaComputador);
    if (resultado == 0)
        printf("Empate!\n");
    else if (resultado == 1)
        printf("Você venceu!\n");
    else
        printf("Computador venceu!\n");
}

int main() {
    srand(time(NULL));
    char escolha;

    printf("---------- Menu ----------\n");
    printf("1. Jogar\n2. Ver Regras\n3. Sair\n");
    scanf(" %c", &escolha);

    switch (escolha)
    {
    case '1':
        jogarRockPaperScissors();


        break;
    case '2':
        printf("Regras do Jogo:\n");
        printf("Você pode escolher entre Pedra, Papel ou Tesoura(1, 2 ou 3).\n");
        printf("Regra 1: Pedra vence Tesoura\n");
        printf("Regra 2: Papel vence Pedra\n");
        printf("Regra 3: Tesoura vence Papel\n");
        break;
    case '3':
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}