/*
* Desenvolva um programa que leia o primeiro termo e a razão de uma 
* PA (Progressão Aritmética), mostrando na tela os 10 primeiros elementos
* da PA e a soma entre todos os valores da sequência.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float an, primeiro_termo, razao, soma_termos=0;

    puts("Primeiro termo da PA: ");
    scanf("%f", &primeiro_termo);
    puts("Razão da PA: ");
    scanf("%f", &razao);

    puts("10 primeiros termos da PA: ");
    printf("[");

    for (int n = 1; n <= 10; n++) {
        an = primeiro_termo + (n - 1) * razao;
        soma_termos += an;

        if (n < 10) {
            printf("%.1f -> ", an);
        } else {
            printf("%.1f]\n", an);
        }

    }

    printf("Soma dos 10 primeiros termos: %.1f\n", soma_termos);

    return 0;
}