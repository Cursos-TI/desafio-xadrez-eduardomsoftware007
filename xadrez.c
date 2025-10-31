#include <stdio.h>

int main() {

    
     //MOVIMENTO DA TORRE  A Torre se move em linha reta (horizontal ou vertical).

    int movimentoTorre = 5; // número de casas
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // linha em branco para separar as seções

    // MOVIMENTO DO BISPO  O Bispo se move em DIAGONAL.

    int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }  

    printf("\n");

    //MOVIMENTO DA RAINHA  A Rainha se move em todas as direções.
   
    int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    printf("\n");
   
    //MOVIMENTO DO CAVALO O Cavalo se move em "L" Duas casas para cima e uma para a direita
    
    int movimentosCima = 2;
    int movimentosEsquerda = 1;
    int contadorEsquerda;

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movimentosCima; i++) {
        printf("Cima (%d)\n", i);
    }

    contadorEsquerda = 1;
    while (contadorEsquerda <= movimentosEsquerda) {
        printf("Esquerda (%d)\n", contadorEsquerda);
        contadorEsquerda++;
    }

    printf("\n");
    printf("Simulação concluída!\n");

  

    return 0;
}