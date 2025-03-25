#include <stdio.h> //Blioteca padrão de entrada e saída

int main() {
  float celsius, fahrenheit; //Declaração de variáveis
  
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &celsius); //Entrada de dados

  fahrenheit = (9 * celsius + 160) / 5; //Cálculo da conversão

  printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit); //Saída de dados

  return 0; //Fim do programa
}
