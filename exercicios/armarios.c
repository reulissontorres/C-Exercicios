#include <stdio.h>

int main() {
  unsigned char armarios = 0; // inicialmente todos os armários estão desocupados

  while (1) {
    // exibe o status atual dos armários
    printf("Status dos armarios: ");
    for (int i = 0; i < 8; i++) {
      printf("%c ", (armarios & (1 << i)) ? 'A' : 'F');
    }
    printf("\n");

    // pergunta ao usuário qual armário deseja ocupar ou desocupar
    int num_armario;
    printf("Digite o numero do armario que deseja ocupar ou desocupar (1-8): ");
    scanf("%d", &num_armario);

    // verifica se o número do armário é válido
    if (num_armario < 1 || num_armario > 8) {
      printf("Numero de armario invalido. Tente novamente.\n");
      continue;
    }

    // calcula o índice do bit correspondente ao armário selecionado
    int indice_bit = num_armario - 1;

    // verifica se o armário está ocupado ou desocupado
    if (armarios & (1 << indice_bit)) {
      // o armário está ocupado, então desocupa
      armarios &= ~(1 << indice_bit);
      printf("Armario %d desocupado.\n", num_armario);
    } else {
      // o armário está desocupado, então ocupa
      armarios |= (1 << indice_bit);
      printf("Armario %d ocupado.\n", num_armario);
    }
  }

  return 0;
}
