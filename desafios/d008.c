/*
* Crie uma lógica que preencha um vetor de 20 posições com números 
* aleatórios (entre 0 e 99) gerados pelo computador. Logo em seguida,
* mostre os números gerados e depois coloque o vetor em ordem crescente,
* mostrando no final os valores ordenados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define MAX_VAL 99

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    srand(time(NULL));

    // Preenchimento do vetor
    int vetor[20];

    for (int i = 0; i < 20; i++)
    {
        vetor[i] = rand() % (MAX_VAL + 1);
    }

    // Exibição do vetor original
    puts("Vetor original:");
    for (int i = 0; i < 20; i++)
    {
        if (i == 0)
        {
            printf("[");
        }
        if (i < 19)
        {
            printf("%d, ", vetor[i]);
 
        } else
        {
            printf("%d]\n", vetor[i]);
        }
    }

    // Ordenação do vetor
    for (int i = 0; i < 19; i++)
    {
        int aux;
        //int menor;

        for (int j = i+1; j < 20; j++)
        {
            if (vetor[j] < vetor[i])
            {
                //menor = vetor[j];
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    // Exibição do vetor ordenado
    puts("Vetor ordenado:");
    for (int i = 0; i < 20; i++)
    {
        if (i == 0)
        {
            printf("[");
        }
        if (i < 19)
        {
            printf("%d, ", vetor[i]);
        } else
        {
            printf("%d]\n", vetor[i]);
        }
    }

    return 0;
}