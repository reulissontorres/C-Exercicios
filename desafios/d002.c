/*
* Crie um programa que leia o tamanho de três segmentos de reta. 
* Analise seus comprimentos e diga se é possível formar um triângulo com essas 
* retas. Matematicamente, para três segmentos formarem um triângulo, o comprimento 
* de cada lado deve ser menor que a soma dos outros dois. Mostre que tipo de
* triângulo será formado: 
*  - EQUILÁTERO: todos os lados iguais
*  - ISÓSCELES: dois lados iguais
*  - ESCALENO: todos os lados diferentes
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float reta[3];

    for (int i = 0; i < 3; i++) {
        printf("Comprimento da reta %d: ", i+1);
        scanf("%f", &reta[i]);
    }

    if (reta[0] > 0 && reta[1] > 0 && reta[2] > 0) {
        if (!(reta[0] < reta[1] + reta[2] && reta[1] < reta[0] + reta[2] && reta[2] < reta[0] + reta[1])) {
            puts("Essas três retas NÃO podem formar um triângulo.");
            exit(2);
        }
    } else {
        puts("ERRO! Pelo menos um dos valores fornecidos é menor ou igual a zero. Insira somente valores positivos.");
        exit(1);
    }
    
    if (reta[0] == reta[1] && reta[1] == reta[2]) {
        printf("As retas %.1f, %.1f e %.1f podem formar um triângulo EQUILÁTERO.", reta[0], reta[1], reta[2]);
    } else if (reta[0] == reta[1] || reta[0] == reta[2] || reta[1] == reta[2]) {
        printf("As retas %.1f, %.1f e %.1f podem formar um triângulo ISÓCELES.", reta[0], reta[1], reta[2]);
    } else {
        printf("As retas %.1f, %.1f e %.1f podem formar um triângulo ESCALENO.", reta[0], reta[1], reta[2]);
    }

    return 0;
}