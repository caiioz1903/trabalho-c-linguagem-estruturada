#include <stdio.h> //Blibioteca padrão de entrada e saída

int main() {
  float celsius, fahrenheit; //Declaração de variáveis

  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &fahrenheit); //Ler e armazena o valor digitado na variável fahrenheit

  celsius = (fahrenheit - 32) * 5 / 9; //Conversão de Fahrenheit para Celsius

  printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius", fahrenheit, celsius); //Imp

  return 0;
}
