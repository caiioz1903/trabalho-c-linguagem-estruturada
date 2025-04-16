#include <stdio.h> //biblioteca

int main() {
  float velocidade_km, velocidade_ms; //declaração

  printf("## Conversor de velocidade ##\n");
  printf("Digite a velocidade em km/h: ");
  scanf("%f", &velocidade_km);

  velocidade_ms = velocidade_km / 3.6; //calculo
  printf("A velocidade em m/s é: %.1f\n", velocidade_ms);

  return 0;
}
