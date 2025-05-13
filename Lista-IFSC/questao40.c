#include <stdio.h>

int main() {
    char nome[50];
    int qtdPar, qtdPor, qtdArr;
    float precoPar, precoPor, precoArr;
    float totalBruto, desconto, totalFinal;

    printf("Nome do cliente: ");
    scanf("%s", nome);

    printf("Quantidade de parafusos: ");
    scanf("%d", &qtdPar);
    printf("Preco unitario dos parafusos: ");
    scanf("%f", &precoPar);

    printf("Quantidade de porcas: ");
    scanf("%d", &qtdPor);
    printf("Preco unitario das porcas: ");
    scanf("%f", &precoPor);

    printf("Quantidade de arruelas: ");
    scanf("%d", &qtdArr);
    printf("Preco unitario das arruelas: ");
    scanf("%f", &precoArr);

    totalBruto = qtdPar*precoPar + qtdPor*precoPor + qtdArr*precoArr;
    desconto = qtdPar*precoPar*0.2 + qtdPor*precoPor*0.1 + qtdArr*precoArr*0.3;
    totalFinal = totalBruto - desconto;

    printf("Cliente: %s\n", nome);
    printf("Total com desconto: R$ %.2f\n", totalFinal);
    printf("Total de desconto: R$ %.2f\n", desconto);

    return 0;
}