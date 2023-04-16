/*
* Crie um jogo onde o computador vai sortear um número entre 1 e 5 o 
* jogador vai tentar descobrir qual foi o valor sorteado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define VALOR_MAXIMO 5

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));

    int valor_aleatorio = rand() % VALOR_MAXIMO + 1;
    int valor_usuario;
    
    do {
        puts("Escolha um valor inteiro entre 1 e 5: ");
        scanf("%d", &valor_usuario);

        if (valor_usuario < 1 || valor_usuario > 5) {
            puts("ERRO!");
        }
    } while (valor_usuario < 1 || valor_usuario > 5);

    printf("Valor sorteado pelo computador: %d\n", valor_aleatorio);

    if (valor_usuario == valor_aleatorio) {
        puts("VOCÊ VENCEU!");
    } else {
        puts("VOCÊ PERDEU!");
    }

    return 0;
}