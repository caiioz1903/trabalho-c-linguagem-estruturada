#include <stdio.h>

int main() {
    float a, b, c, temp;

    printf("Digite tres valores: ");
    scanf("%f %f %f", &a, &b, &c);

    // Ordenação simples por troca
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Valores em ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    return 0;
}