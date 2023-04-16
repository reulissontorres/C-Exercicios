/*
* Escreva um programa que peça ao usuário um número inteiro
* e imprima se ele é par ou ímpar.
*/

#include <stdio.h>

int main() {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é PAR\n", numero);
    }
    if (numero % 2 == 1) {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}