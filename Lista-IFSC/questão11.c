#include <stdio.h>

int main() {
    // Declaração das variáveis
    float HT, VH, PD;       // Entradas
    float SB, TD, SL;       // Resultados

    // a) Obter horas trabalhadas
    printf("Digite as horas trabalhadas no mes (HT): ");
    scanf("%f", &HT);

    // b) Obter valor da hora trabalhada
    printf("Digite o valor da hora trabalhada (VH): ");
    scanf("%f", &VH);

    // c) Obter percentual de desconto
    printf("Digite o percentual de desconto (PD %%): ");
    scanf("%f", &PD);

    // d) Calcular salário bruto
    SB = HT * VH;

    // e) Calcular total de desconto
    TD = (PD / 100) * SB;

    // f) Calcular salário líquido
    SL = SB - TD;

    // g) Apresentar resultados
    printf("\nFolha de Pagamento\n");
    printf("Horas trabalhadas: %.2f h\n", HT);
    printf("Salario Bruto: R$ %.2f\n", SB);
    printf("Desconto (%.1f%%): R$ %.2f\n", PD, TD);
    printf("Salario Liquido: R$ %.2f\n", SL);

    return 0;
}
