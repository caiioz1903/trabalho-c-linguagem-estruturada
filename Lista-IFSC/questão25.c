#include <stdio.h> //biblioteca

int main() {
  int Int1, Int2; //declaração
  printf("--Divisão de dois números--\n");
  printf("Digite o primeiro valor: ");
  scanf("%d", &Int1);

  printf("Digite o segundo valor: ");
  scanf("%d", &Int2);

  //imprimi o quociente e o resto da divisão
  printf("Quociente: %d\n", Int1 / Int2);
  printf("Resto: %d\n", Int1 % Int2);

  return 0;
}
