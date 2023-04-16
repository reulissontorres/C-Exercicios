/*
Escreva um programa que calcule a soma dos números de 1 a 100.
*/

#include <stdio.h>

int main() {

    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos números de 1 a 100 é %d.\n", soma);

    return 0;
}