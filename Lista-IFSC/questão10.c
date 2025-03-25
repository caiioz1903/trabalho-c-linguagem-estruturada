#include <stdio.h>  // Biblioteca para entrada/saída

int main() {
    // Declaração das variáveis
    int num1, num2, soma;

    // Ler o primeiro número inteiro
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    // Ler o segundo número inteiro
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    //Efetuar a adição
    soma = num1 + num2;

    //Apresentar o valor calculado
    printf("A soma dos numeros é: %d\n", soma);

    return 0;  //Encerra o programa
}
