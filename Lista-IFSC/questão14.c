#include <stdio.h> //Blibioteca padrão de entrada e saída

int main() {
  float raio, altura, volume; //Declaração de variáveis
  const float pi = 3.14159;

  printf("Digite o raio da lata: "); //Imprime na tela"
  scanf("%f", &raio);

  printf("Dgite a altura da lata: "); //Imprime na tela"
  scanf("%f", &altura);

  volume = pi * raio * raio * altura; //Cálculo do volume

  printf("O volume da lata é aproximadamente: %.2f", volume); //Imprime na tela o volume"
  
  return 0;
}
