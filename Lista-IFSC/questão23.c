#include <stdio.h> //biblioteca

int main() {
  int NumA, NumB; //declaração de variáveis

  printf("Digite o primeiro número: ");
  scanf("%d", &NumA); //leitura

  printf("Digite o segundo número: ");
  scanf("%d", &NumB); //leitura

  //imprimi na ordem inversa
  printf("Números na ordem inversa: %d e %d\n", NumB, NumA);

  return 0;
}
