#include <stdio.h>

void main() {
  int a, quadrado, cubo; // declaração de variáveis

  printf("Digite um número inteiro: "); 
  scanf("%d", &a); // armazena o valor
  
  quadrado = a * a; // calcula o quadrado
  cubo = a * a * a; // calcula o cubo

  printf("O quadrado de %d é %d e o cubo é %d", a, quadrado, cubo); // mostra o resultado

  return;
}
