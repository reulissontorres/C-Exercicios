#include <stdio.h>

/* Simula passagem por referência */
void referencia(int *a, int *b) {
    *a = *a + 1;
    *b = *b + 1;
}

/* Simula passagem por valor-resultado */
void valorResultado(int *a, int *b) {
    int copiaA = *a;
    int copiaB = *b;

    copiaA = copiaA + 1;
    copiaB = copiaB + 1;

    *a = copiaA;
    *b = copiaB;
}

int main() {
    int x;

    x = 10;
    referencia(&x, &x);
    printf("Passagem por referencia: x = %d\n", x);

    x = 10;
    valorResultado(&x, &x);
    printf("Passagem por valor-resultado: x = %d\n", x);

    return 0;
}