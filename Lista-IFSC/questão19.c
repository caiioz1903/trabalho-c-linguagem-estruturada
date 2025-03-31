#include <stdio.h>

int main() {
  float comprimento, largura, altura, volume; // declaração de variáveis

  printf("Digite o comprimento da caixa: ");
  scanf("%f", &comprimento); // armazena o comprimento

  printf("Digite a largura da caixa: ");
  scanf("%f", &largura); // armazena a largura

  printf("Digite a altura da caixa: ");
  scanf("%f", &altura); // armazena a altura

  volume = comprimento * largura * altura; // calcula o volume

  printf("O volume da caixa é: %.2f\n", volume);
}
