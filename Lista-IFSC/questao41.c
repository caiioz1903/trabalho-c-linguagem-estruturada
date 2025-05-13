#include <stdio.h>

int main() {
    float salarioMin = 1320.0; // Supondo salário mínimo atual
    int carrosVendidos;
    float valorTotalVendas, salarioTotal;

    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Valor total das vendas: ");
    scanf("%f", &valorTotalVendas);

    salarioTotal = 2*salarioMin + carrosVendidos*50 + valorTotalVendas*0.05;

    printf("Salario total do vendedor: R$ %.2f\n", salarioTotal);
    return 0;
}