#include <stdio.h>
#include <stdbool.h>

int processaVetor(int vetor[], int n);

void main()
{
    int v[] = { 1000, 10, 5, 20, 500, 3 };
    int valor = 0;

    valor = processaVetor(v, 5);
    
    printf("%d\n", valor);
}

// Exemplo de implementação dentro de uma função
int processaVetor(int vetor[], int n)
{
    int soma = 0;
    bool parar = false;

    for (int i = 0; i < n && !parar; i++)
    {
        if (vetor[i] < 0)
        {
            parar = true; // Substitui o break
        }
        else if (!(vetor[i] > 100 && vetor[i] % 2 == 0)) 
        {
            soma += vetor[i]; // Só soma se ñ for par maior que 100 (substitui o continue)
        }
    }

    return soma;
}