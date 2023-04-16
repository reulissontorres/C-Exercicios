/*
* Escreva um programa que peça ao usuário 10 números
* e imprima o maior e o menor número digitado.
*/

#include <stdio.h>

int main() {

    int numero, menor, maior;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do inteiro: ", i+1);
        scanf("%d", &numero);

        if (i == 0) {
            menor, maior = numero;
        } else {
            if (numero < menor) {
                menor = numero;
            }
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    printf("O menor valor digitado foi: %d\n", menor);
    printf("O maior valor digitado foi: %d\n", maior);

    return 0;
}