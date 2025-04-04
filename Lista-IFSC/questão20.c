#include <stdio.h>

int main() {
  int A, B; // declaração de variáveis

  printf("Este programa calcula o quadrado da soma de dois números inteiros.\n");
  
  printf("Digite um número inteiro: ");
  scanf("%d", &A); // armazena o valor de a

  printf("Digite outro número inteiro: ");
  scanf("%d", &B); // armazena o valor de b

  int soma = A + B; //faço a soma 
  int quadrado = soma * soma; // calcula o quadrado da soma

  printf("O quadrado da soma de %d e %d é %d\n", A, B, quadrado); //resultado

  return 0;
}
