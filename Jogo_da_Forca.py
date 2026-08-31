import random
from time import sleep
from random_word import RandomWords

# Desenhos da forca (7 estágios: de 0 a 6 erros visuais)
FORCA_ESTAGIOS = [
    """
       +---+
       |   |
           |
           |
           |
           |
    =========
    """,
    """
       +---+
       |   |
       O   |
           |
           |
           |
    =========
    """,
    """
       +---+
       |   |
       O   |
       |   |
           |
           |
    =========
    """,
    """
       +---+
       |   |
       O   |
      /|   |
           |
           |
    =========
    """,
    """
       +---+
       |   |
       O   |
      /|\\  |
           |
           |
    =========
    """,
    """
       +---+
       |   |
       O   |
      /|\\  |
      /    |
           |
    =========
    """,
    """
       +---+
       |   |
       O   |
      /|\\  |
      / \\  |
           |
    =========
    """
]

PALAVRAS_BACKUP = [
    'algoritmo', 'python', 'desenvolvedor', 'programacao',
    'teclado', 'computador', 'variavel', 'funcao', 'banco'
]


def exibir_cabecalho(texto: str):
    print('=' * 35)
    print(f'{texto:^35}')
    print('=' * 35)


def obter_palavra_valida() -> str:
    try:
        rw = RandomWords()
        palavra = rw.get_random_word()
        if palavra and palavra.isalpha() and 4 <= len(palavra) <= 10:
            return palavra.lower()
    except Exception:
        pass

    return random.choice(PALAVRAS_BACKUP)


def selecionar_dificuldade() -> int:
    print("\nEscolha a dificuldade:")
    print("[1] Fácil (8 vidas)")
    print("[2] Médio (6 vidas)")
    print("[3] Difícil (4 vidas)")

    while True:
        escolha = input("Opção: ").strip()
        if escolha == '1': return 8
        if escolha == '2': return 6
        if escolha == '3': return 4
        print("Opção inválida! Digite 1, 2 ou 3.")


def principal_game():
    vidas_totais = selecionar_dificuldade()
    palavra = obter_palavra_valida()
    tam_palavra = len(palavra)

    letras_certas = set()
    letras_erradas = set()
    erros = 0
    max_estagios = len(FORCA_ESTAGIOS) - 1

    print("\nCarregando palavra...")
    sleep(0.5)
    print(f"A palavra tem {tam_palavra} letras. Digite '999' a qualquer momento para desistir!\n")

    while erros < vidas_totais:
        # CORREÇÃO 1: Mapeamento seguro do número de erros para o índice do desenho
        estagio_atual = int((erros / vidas_totais) * max_estagios)
        print(FORCA_ESTAGIOS[min(estagio_atual, max_estagios)])

        # Renderiza a palavra oculta
        exibicao = [letra if letra in letras_certas else '_' for letra in palavra]
        print(f"Palavra: {' '.join(exibicao)}")

        # Exibe histórico de erros
        if letras_erradas:
            print(f"Erros ({len(letras_erradas)}/{vidas_totais}): {', '.join(sorted(letras_erradas))}")
        print("-" * 35)

        # Condição de vitória
        if '_' not in exibicao:
            print(f"\n PARABÉNS! Você acertou a palavra: \033[32m{palavra.upper()}\033[m")
            return

        chute = input("Digite uma letra: ").strip().lower()

        if chute == '999':
            print("\nVocê desistiu do jogo!")
            print(f"A palavra era: \033[31m{palavra.upper()}\033[m")
            return

        # Validações de entrada
        if len(chute) != 1 or not chute.isalpha():
            print(" Entrada inválida! Digite apenas UMA letra.\n")
            continue

        if chute in letras_certas or chute in letras_erradas:
            print(" Você já tentou essa letra. Tente outra!\n")
            continue

        # Lógica de acerto / erro
        if chute in palavra:
            letras_certas.add(chute)
            print(" Boa! A letra pertence à palavra.\n")
        else:
            letras_erradas.add(chute)
            erros += 1
            print(f" Ops! A letra '{chute}' não está na palavra.\n")

    # Derrota
    print(FORCA_ESTAGIOS[-1])
    print(" FIM DE JOGO! Suas chances acabaram.")
    print(f"A palavra era: \033[31m{palavra.upper()}\033[m")


# Loop do Menu Principal
if __name__ == "__main__":
    while True:
        exibir_cabecalho("JOGO DA FORCA")
        print("[1] - Iniciar Novo Jogo")
        print("[2] - Sair")

        escolha = input("\nSua escolha: ").strip()

        if escolha == '1':
            while True:
                principal_game()
                # CORREÇÃO 2: Nome da variável corrigido para 'de_novo'
                de_novo = input("\nDeseja jogar novamente? (s/n): ").strip().lower()
                if de_novo != 's':
                    break
        elif escolha == '2':
            print("\nObrigado por jogar! Até a próxima.")
            break
        else:
            print("\nOpção inválida! Escolha 1 ou 2.\n")
