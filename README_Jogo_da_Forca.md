# 🪓 Jogo da Forca em Python

Um jogo da forca interativo para terminal, desenvolvido em Python. O projeto conta com desenho em artes ASCII, diferentes níveis de dificuldade, validação de entradas e consumo de palavras dinâmicas via API com sistema de fallback.

---

## 🚀 Sobre o Projeto

Este projeto foi totalmente concebido e idealizado por Anderson Silva. 

Para elevar a qualidade técnica do projeto, o código original passou por um processo de **refatoração e otimização com o auxílio de Inteligência Artificial**, aplicando:
- **Estruturas de Dados Eficientes:** Uso de conjuntos (`set`) para busca de letras digitadas com complexidade.
- **Tratamento de Exceções:** Sistema de fallback local para garantir que o jogo funcione mesmo sem conexão com a API de palavras.
- **Boas Práticas:** Separação clara de responsabilidades entre funções e tipagem de dados (`type hints`).

---

## 🎮 Funcionalidades

- **Níveis de Dificuldade:** Escolha entre Fácil, Médio e Difícil (altera a quantidade de vidas).
- **Interface ASCII:** Boneco da forca desenhado progressivamente a cada erro.
- **Histórico de Tentativas:** Exibição em tempo real das letras erradas já chutadas.
- **Palavras Dinâmicas:** Busca palavras aleatórias via API (`random-word`) com backup de palavras locais.
- **Menu Interativo:** Opção de jogar novamente sem precisar reiniciar a aplicação.

---

## 🛠️ Tecnologias Utilizadas

- **[Python 3.x](https://www.python.org/)**
- **[random-word](https://pypi.org/project/Random-Word/)** (Biblioteca para geração de palavras aleatórias)
