#include <stdio.h>

/*
 * Simula o movimento de três peças de xadrez: Torre, Bispo e Rainha.
 * Cada peça utiliza uma estrutura de repetição diferente.
 * As direções são impressas a cada casa percorrida.
 */

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


    return 0;
}