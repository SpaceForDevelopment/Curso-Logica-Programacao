#include <stdio.h>

int main(void) {
  // Declaração das variáveis
  float grade, highestGrade = 0.0, lowestGrade = 1000.0, sumGrades = 0.0;
  int quantityStudents = 0, studentWithHighestGrade = 0, studentWithLowestGrade = 0;

  // Solicitação do número de alunos ao usuário
  printf("Digite a quantidade de notas que deseja inserir no vetor: ");
  scanf("%d", &quantityStudents);

  // Declaração de um vetor de floats para armazenar as notas dos alunos
  float grades[quantityStudents];

  printf("\n"); // Linha em branco para separar a entrada de dados da exibição de resultados

  // Loop para inserir as notas dos alunos no vetor
  for (int i = 0; i < quantityStudents; i++) {
    printf("Digite a nota final do %dº aluno: ", i + 1);
    scanf("%f", &grades[i]);
  }

  // Exibição das notas cadastradas no vetor
  printf("\nNotas cadastradas no vetor:\n");

  // Loop para processar as notas, encontrar maior, menor e calcular soma
  for (int i = 0; i < quantityStudents; i++) {
    // Verifica se a nota atual é a maior já registrada
    if (grades[i] > highestGrade) {
      highestGrade = grades[i];
      studentWithHighestGrade = i + 1; // Guarda o índice do aluno com a maior nota
    }

    // Verifica se a nota atual é a menor já registrada
    if (grades[i] < lowestGrade) {
      lowestGrade = grades[i];
      studentWithLowestGrade = i + 1; // Guarda o índice do aluno com a menor nota
    }

    // Soma as notas para calcular a média posteriormente
    sumGrades += grades[i];

    // Exibe a nota do aluno
    printf("\nNota do %dº aluno: %.2f", i + 1, grades[i]);
  }

  printf("\n"); // Linha em branco para separar as notas dos resultados finais

  // Exibição dos resultados finais
  printf("\n***** Resultados *****\n");
  printf("\nO %dº aluno obteve a maior nota, que foi %.2f pontos.", studentWithHighestGrade, highestGrade);
  printf("\nO %dº aluno obteve a menor nota, que foi %.2f pontos.", studentWithLowestGrade, lowestGrade);
  printf("\nA média das notas finais dos alunos foi: %.2f pontos.", sumGrades / quantityStudents);

  return 0;
}