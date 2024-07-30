#include <stdio.h>

int main(void) {
  float grade; // Declaração da variável para armazenar a nota do aluno
  int approved = 0, reproved = 0,
      quantityStudents = 0; // Declaração e inicialização dos contadores de
                            // aprovados e reprovados e da quantidade de alunos

  // Solicita ao usuário a quantidade de alunos cujas notas serão inseridas
  printf("Digite a quantidade de notas de alunos que deseja inserir: ");
  scanf("%d", &quantityStudents);

  // Loop para entrada das notas de cada aluno e verificação de aprovação ou
  // reprovação
  for (int i = 0; i < quantityStudents; i++) {
    printf("Digite a nota do %dº aluno: ", i + 1); // Solicita a nota do aluno
    scanf("%f", &grade);                           // Lê a nota do aluno

    // Verifica se o aluno foi aprovado ou reprovado e atualiza os contadores
    if (grade >= 60) {
      approved++; // Incrementa o contador de aprovados
    } else {
      reproved++; // Incrementa o contador de reprovados
    }
  }

  // Exibe o total de alunos aprovados e reprovados
  printf("\nTotal de alunos aprovados: %d\n", approved);
  printf("Total de alunos reprovados: %d\n", reproved);

  return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}