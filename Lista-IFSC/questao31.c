#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um número: "); // input do primeiro número
    scanf("%d", &num1);

    printf("Digite outro número: "); // input do segundo número
    scanf("%d", &num2);

    if (num1 > num2) { // condição para verificar qual número é maior
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    }else
        printf("Os números são iguais\n");
    
    return 0;
}
