#include <stdio.h>

int main() {
  int A, B; // declaração de variáveis
  
  printf("Digite um número inteiro: ");
  scanf("%d", &A); // armazena o valor de a

  printf("Digite outro número inteiro: ");
  scanf("%d", &B); // armazena o valor de b

  int quadrado_a = A * A; // calcula o quadrado de a
  int quadrado_b = B * B; // calcula o quadrado de b
  int soma_quadrados = quadrado_a + quadrado_b; // calcula a soma dos quadrados

  printf("A soma dos quadrados de %d e %d é %d", A, B, soma_quadrados);
  
  return 0;
}
