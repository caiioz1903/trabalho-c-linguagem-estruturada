#include <stdio.h>

int main() {
    int matricula;
    int ano, semestre;

    // Leitura da matrícula
    printf("Digite o número de matrícula (formato AASDDDD): ");
    scanf("%d", &matricula);

    // Extração do ano (dois primeiros dígitos)
    ano = matricula / 100000;

    // Extração do semestre (terceiro dígito)
    semestre = (matricula / 10000) % 10; 

    // Impressão do resultado
    printf("Ano da matrícula: 20%02d\n", ano);
    printf("Semestre da matrícula: %dº semestre\n", semestre);

    return 0;
}
