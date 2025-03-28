#include <stdio.h> //Blibioteca padrão de entrada e saída

int main() {
  float tempo_gasto, velocidade_m, distancia, litros_usados; //Declaração de variáveis
  printf("Informe o tempo gasto na viagem em horas: "); 
  scanf("%f", &tempo_gasto); //Entrada de dados

  printf("Informe a velocidade média durante a viagem em km/h: ");
  scanf("%f", &velocidade_m);

  distancia = tempo_gasto * velocidade_m; //Cálculo da distância

  litros_usados = distancia / 12; //Cálculo da quantidade de litros usados

  printf("A velocidade média durante a viagem foi de %.1f km/h\n", velocidade_m);
  printf("O tempo gasto na viagem foi de %.1f horas\n", tempo_gasto);
  printf("A distância percorrida foi de %.1f km\n", distancia);
  printf("A quantidade de litros usados na viagem foi de %.1f litros", litros_usados);

  return 0;
}
