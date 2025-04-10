#include <stdio.h>

int main() {
  int Val1, Val2; // Declarei as variáveis

  printf("Digite um valor: ");
  scanf("%d", &Val1); //armazenando o valor digitado na variável Val1

  printf("Digite outro valor: ");
  scanf("%d", &Val2); //armazenando o valor digitado na variável Val2

  int Media = (Val1 + Val2) / 2; //calcula a média

  printf("A media dos valores é: %d", Media); //impri
  return 0;
}
