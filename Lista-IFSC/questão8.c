#include <stdio.h>  // Biblioteca para entrada/saída (printf e scanf)

int main() {
    // Declaração das variáveis
    float AREA, BASE, ALTURA;  // Usamos 'float' para permitir valores decimais

    // Solicita os valores da base e altura ao usuário
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &BASE);        // Lê a base digitada

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &ALTURA);      // Lê a altura digitada

    // Calcula a área do triângulo
    AREA = (BASE * ALTURA) / 2;  // Fórmula: (BASE × ALTURA) ÷ 2

    // Exibe o resultado com 2 casas decimais
    printf("A area do triangulo eh: %.2f\n", AREA);

    return 0;  // Encerra o programa
}
