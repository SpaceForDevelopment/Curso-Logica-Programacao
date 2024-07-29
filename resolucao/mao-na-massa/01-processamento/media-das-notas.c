#include <stdio.h>

int main(void) {
  // Declaração de variáveis para armazenar as três notas e a média
  float grade1, grade2, grade3, media;

  // Solicitação e leitura da 1ª nota do usuário
  printf("Digite a 1ª nota: ");
  scanf("%f", &grade1);

  // Solicitação e leitura da 2ª nota do usuário
  printf("Digite a 2ª nota: ");
  scanf("%f", &grade2);

  // Solicitação e leitura da 3ª nota do usuário
  printf("Digite a 3ª nota: ");
  scanf("%f", &grade3);

  // Cálculo da média das três notas
  media = (grade1 + grade2 + grade3) / 3.0;

  // Exibição do resultado da média
  printf("\nA média das notas é: %.2f", media);

  return 0; // Indica que o programa terminou com sucesso
}