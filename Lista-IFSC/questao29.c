#include <stdio.h>

int main() {
    int data; //Declaração de variaveis
    int dia, mes, ano;

    // Leitura da data no formato DDMMAA
    printf("Digite a data no formato DDMMAA: ");
    scanf("%d", &data);

    // Extração dos componentes da data
    dia = data / 10000;            // Dois primeiros dígitos
    mes = (data / 100) % 100;      // Dígitos do meio
    ano = data % 100;              // Dois últimos dígitos

    // Impressão no formato AAMMDD
    printf("Data no formato AAMMDD: %02d%02d%02d\n", ano, mes, dia);

    return 0;
}
