#include <stdio.h>

/*
 * Simula o movimento de três peças de xadrez: Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente.
 * As direções são impressas a cada casa percorrida.
 */

// Função recursiva para simular o movimento da Torre (direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para simular o movimento da Rainha (esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para simular o movimento do Bispo (cima-direita)
// Também utiliza loops aninhados para simular movimento diagonal
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0 || casasHorizontais <= 0) return;
    for (int v = 1; v <= casasVerticais; v++) {
        for (int h = 1; h <= casasHorizontais; h++) {
            printf("Cima Direita\n");
        }
    }
    moverBispo(casasVerticais - 1, casasHorizontais - 1);
}

int main() {
    // Movimento da Torre: 5 casas para a direita (utiliza for)
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (utiliza while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha: 8 casas para a esquerda (utiliza do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);


    // Movimento do Cavalo: 2 casas para baixo e 1 para a esquerda (utiliza loops aninhados)
    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }
    int contadorEsquerda = 0;
    while (contadorEsquerda < casasEsquerda) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }

    
    /*
     * Funções recursivas para Torre, Bispo e Rainha
     */

    // Chamada das funções recursivas para cada peça
    int casasTorreRec = 5;
    printf("\nMovimento Recursivo da Torre:\n");
    moverTorre(casasTorreRec);

    int casasBispoVert = 3; // vertical (linhas)
    int casasBispoHor = 3;  // horizontal (colunas)
    printf("\nMovimento Recursivo e Aninhado do Bispo:\n");
    moverBispo(casasBispoVert, casasBispoHor);

    int casasRainhaRec = 8;
    printf("\nMovimento Recursivo da Rainha:\n");
    moverRainha(casasRainhaRec);

    /*
     * Movimento do Cavalo: "L" para cima e para a direita
     * Utiliza loops aninhados e controle de fluxo com break/continue
     * O Cavalo move duas casas para cima e uma para a direita
     */
    int movimentosCavalo = 3; // número de movimentos "L" a serem simulados
    printf("\nMovimento Complexo do Cavalo:\n");
    for (int m = 1; m <= movimentosCavalo; m++) {
        int casasCima = 2;
        int casasDireita = 1;
        for (int cima = 1; cima <= casasCima; cima++) {
            // Se for o segundo movimento para cima, pula para direita
            if (cima == casasCima) {
                for (int direita = 1; direita <= casasDireita; direita++) {
                    printf("Direita\n");
                    // Se já moveu para direita, encerra este movimento "L"
                    break;
                }
                continue;
            }
            printf("Cima\n");
        }
        // Linha em branco para separar cada movimento "L"
        printf("\n");
    }


    return 0;
}
