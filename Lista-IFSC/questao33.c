#include <stdio.h>

int main() {
    float p1, p2, p3, media;

    // Lê as três notas
    printf("Digite a nota da prova 1: ");
    scanf("%f", &p1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &p2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &p3);

    // Calcula a média ponderada: (2*p1 + 3*p2 + 5*p3) / 10
    media = (2*p1 + 3*p2 + 5*p3) / 10.0;

    printf("Media final: %.2f\n", media);
    return 0;
}