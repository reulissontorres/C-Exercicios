/*
* Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));

    int valor_aleatorio = rand() % 3;
    int valor_usuario = 0;

    puts("====================");
    puts("1 - PEDRA\n"
    "2 - PAPEL\n"
    "3 - TESOURA\n"
    "--------------------\n"
    "ESCOLHA:");

    do {
        scanf("%d", &valor_usuario);
        if (valor_usuario < 1 || valor_usuario > 3) {
            puts("ERRO! Escolha um número de 1 a 3.");
        }
    } while (valor_usuario < 1 || valor_usuario > 3);
    
    puts("====================");
    
    switch (valor_usuario) {
    case PEDRA:
        if (valor_aleatorio == PEDRA) {
            puts("O COMPUTADOR ESCOLHEU PEDRA.");
            puts("EMPATE!");
        }
        if (valor_aleatorio == PAPEL) {
            puts("O COMPUTADOR ESCOLHEU PAPEL.");
            puts("VOCÊ PERDEU!");
        }
        if (valor_aleatorio == TESOURA) {
            puts("O COMPUTADOR ESCOLHEU TESOURA.");
            puts("VOCÊ GANHOU!");
        }
        break;
    case PAPEL:
        if (valor_aleatorio == PEDRA) {
            puts("O COMPUTADOR ESCOLHEU PEDRA.");
            puts("VOCÊ GANHOU!");
        }
        if (valor_aleatorio == PAPEL) {
            puts("O COMPUTADOR ESCOLHEU PAPEL.");
            puts("EMPATE!");
        }
        if (valor_aleatorio == TESOURA) {
            puts("O COMPUTADOR ESCOLHEU TESOURA.");
            puts("VOCÊ PERDEU!");
        }
        break;
    case TESOURA:
        if (valor_aleatorio == PEDRA) {
            puts("O COMPUTADOR ESCOLHEU PEDRA.");
            puts("VOCÊ PERDEU!");
        }
        if (valor_aleatorio == PAPEL) {
            puts("O COMPUTADOR ESCOLHEU PAPEL.");
            puts("VOCÊ GANHOU!");
        }
        if (valor_aleatorio == TESOURA) {
            puts("O COMPUTADOR ESCOLHEU TESOURA.");
            puts("VOCÊ PERDEU!");
        }
        break;
    default:
        break;
    }

    return 0;
}