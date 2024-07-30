#include <stdio.h>

int main(void) {
  // Declaração das variáveis
  float grade;
  int quantityStudents = 0;

  // Solicitação do número de alunos ao usuário
  printf("Digite a quantidade de alunos que deseja inserir no vetor: ");
  scanf("%d", &quantityStudents);

  // Declaração de um vetor de floats para armazenar as notas dos alunos
  float grades[quantityStudents];

  printf("\n");

  // Loop para inserir as notas dos alunos no vetor
  for (int i = 0; i < quantityStudents; i++) {
    printf("Digite a nota do %dº aluno: ", i + 1);
    scanf("%f", &grades[i]);
  }

  // Exibição das notas cadastradas no vetor
  printf("\nNotas cadastradas no vetor:\n");

  for (int i = 0; i < quantityStudents; i++) {
    printf("\nNota do %dº aluno: %.2f", i + 1, grades[i]);
  }
  
  return 0;
}