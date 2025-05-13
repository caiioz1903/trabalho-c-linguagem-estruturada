#include <stdio.h>

int main() {
    char nome[50];
    float preco, desconto;
    float total = 0;

    for (int i = 1; i <= 4; i++) {
        printf("Nome do artigo %d: ", i);
        scanf("%s", nome);
        printf("Preco do artigo: ");
        scanf("%f", &preco);
        printf("Percentual de desconto: ");
        scanf("%f", &desconto);

        float precoDesc = preco * (1 - desconto / 100);
        printf("Preco com desconto de %s: R$ %.2f\n", nome, precoDesc);
        total += precoDesc;
    }

    printf("Total a pagar: R$ %.2f\n", total);
    return 0;
}