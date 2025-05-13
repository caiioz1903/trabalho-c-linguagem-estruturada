#include <stdio.h>

int main() {
    float A, B, C, soma;

    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

    soma = A + B;

    if (soma > C)
        printf("A + B eh maior que C\n");
    else if (soma < C)
        printf("A + B eh menor que C\n");
    else
        printf("A + B eh igual a C\n");

    return 0;
}