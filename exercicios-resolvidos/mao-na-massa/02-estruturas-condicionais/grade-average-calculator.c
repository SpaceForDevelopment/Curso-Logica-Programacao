#include <stdio.h>

int main(void) {
  // Declaração das variáveis
  float grade1, grade2, grade3;
  int approved = 0, reproved = 0;

  // Leitura das notas finais dos alunos
  printf("Digite a nota final do 1º aluno: ");
  scanf("%f", &grade1);
  printf("Digite a nota final do 2º aluno: ");
  scanf("%f", &grade2);
  printf("Digite a nota final do 3º aluno: ");
  scanf("%f", &grade3);

  // Verificação da condição de aprovação para o 1º aluno
  if (grade1 >= 60) {
    approved++;
  } else {
    reproved++;
  }

  // Verificação da condição de aprovação para o 2º aluno
  if (grade2 >= 60) {
    approved++;
  } else {
    reproved++;
  }

  // Verificação da condição de aprovação para o 3º aluno
  if (grade3 >= 60) {
    approved++;
  } else {
    reproved++;
  }

  // Exibição dos resultados
  printf("\nTotal de alunos aprovados: %d\n", approved);
  printf("Total de alunos reprovados: %d\n", reproved);

  return 0; // Indica que o programa terminou com sucesso
}