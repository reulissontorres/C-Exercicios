/*
* Escreva um programa que calcule a média
* de um vetor de números inteiros.
*/

#include <stdio.h>

#define TAM 5

int main() {

    int vetor[TAM] = {2, 3, 7, 9, 11};
    int somaTotal = 0;
    float media;

    for (int i = 0; i < TAM; i++) {
        somaTotal += vetor[i];
    }

    media = (float) somaTotal / TAM;

    puts("Vetor:");
    for (int i = 0; i < TAM; i++) {
        if (i == 0) {
            printf("[");
        }
        if (i < TAM-1) {
            printf("%d, ", vetor[i]);
        } else {
            printf("%d]\n", vetor[i]);
        }
    }

    printf("Valor da média: %.2f", media);

    return 0;
}