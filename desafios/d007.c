/*
* Faça um programa que mostre os 10 primeiros elementos da Sequência 
* de Fibonacci.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int termo_1 = 1;
    int termo_2 = 1;
    int termo_3 = termo_1 + termo_2;

    printf("%d  %d  %d  ", termo_1, termo_1, termo_3);

    for (int n = 0; n < 7; n++) {
        termo_1 = termo_2;
        termo_2 = termo_3;
        termo_3 = termo_1 + termo_2;

        printf("%d  ", termo_3);
    }
    
    return 0;
}