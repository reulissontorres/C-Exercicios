/*
* Vamos melhorar o jogo que fizemos no desafio 3. A partir de 
* agora, o computador vai sortear um número entre 1 e 10 e o jogador 
* vai ter 4 tentativas para tentar acertar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define VALOR_MAXIMO 10

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    srand(time(NULL));

    int valor_aleatorio = rand() % VALOR_MAXIMO + 1;
    int valor_usuario;
    
    for (int k=4; k > 0; k--) {
        printf("Você tem %d tentativas\n", k);
    
        do {
            puts("Escolha um valor inteiro entre 1 e 10: ");
            scanf("%d", &valor_usuario);

            if (valor_usuario < 1 || valor_usuario > 10) {
                puts("ERRO!");
            }

        } while (valor_usuario < 1 || valor_usuario > 10);

        if (valor_usuario == valor_aleatorio) {
            puts("VOCÊ ACERTOU!");
            break;
        } else if (k > 1){
            puts("VOCÊ ERROU!");
        } else {
            puts("GAME OVER!");
        }

        puts("--------------------");
    }

    return 0;
}