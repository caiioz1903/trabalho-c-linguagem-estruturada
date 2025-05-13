#include <stdio.h>

int main() {
    char nome[50];
    float venda, comissao, total = 0;

    for (int i = 0; i < 3; i++) {
        printf("Nome do corretor: ");
        scanf("%s", nome);
        printf("Valor da venda: R$ ");
        scanf("%f", &venda);

        if (venda > 50000)
            comissao = venda * 0.12;
        else if (venda >= 30000)
            comissao = venda * 0.095;
        else
            comissao = venda * 0.07;

        total += venda;

        printf("Comissao de %s: R$ %.2f\n", nome, comissao);
    }

    printf("Total de vendas da empresa: R$ %.2f\n", total);
    return 0;
}