#include <stdio.h>

void main() {
  int a, quadrado, cubo;

  printf("Digite um número inteiro: ");
  scanf("%d", &a);
  
  quadrado = a * a;
  cubo = a * a * a;

  printf("O quadrado de %d é %d e o cubo é %d", a, quadrado, cubo);

  return;
}
