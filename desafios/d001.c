/*
* Escreva um programa para calcular a redução do tempo de vida de um 
* fumante. Pergunte a quantidade de cigarros fumados por dias e quantos anos ele 
* já fumou. Considere que um fumante perde 10 min de vida a cada cigarro. Calcule 
* quantos dias de vida um fumante perderá e exiba o total em dias.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int qtdCigarrosPorDia, qtdAnos, totalMinutos, totalDiasPerdidos = 0;

    puts("Quantidade de cigarros fumados por dia: ");
    scanf("%d", &qtdCigarrosPorDia);
    puts("Por quantos anos já fumou: ");
    scanf("%d", &qtdAnos);
    /*
    Total de cigarros fumados na vida = cigarros fumados por dia * quantidade de anos fumando * 365
    Total de minutos de vida perdidos = cigarros fumados * 10
    Total de dias de vida perdidos    = minutos de vida perdidos / duração do dia em minutos
    */
    totalDiasPerdidos = (qtdCigarrosPorDia * qtdAnos * 365 * 10) / (24 * 60);

    printf("Você perdeu %d dias de vida\n", totalDiasPerdidos);

    return 0;
}