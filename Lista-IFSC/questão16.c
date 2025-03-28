#include <stdio.h> //Blibioteca padrão de entrada e saída

int main() {
  int a, b, temp; //Declaração de variáveis

  printf("Digite um número inteiro que será armazenado em a: ");
  scanf("%d", &a); //Armazena o primeiro valor

  printf("Digite outro número inteiro que será armazenado em b: ");
  scanf("%d", &b); //Armazena o segundo valor

  temp = a; //Armazena o valor de a em uma variável temporária
  a = b; //Atribui o valor de b a a
  b = temp; //Atribui o valor de a a b

  printf("Os valores trocados: a = %d e b = %d", a, b);

  return 0;
}
