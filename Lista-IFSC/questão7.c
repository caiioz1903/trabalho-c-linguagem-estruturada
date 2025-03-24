#include <stdio.h>  // Biblioteca para entrada/saída (ex: printf)

int main() {
    // Declaração das variáveis
    float AREA, RAIO;             // 'float' para números decimais
    const float PI = 3.14;     // Constante PI (valor fixo)

    // Solicita o valor do RAIO ao usuário
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &RAIO);           // Lê o valor digitado e armazena em RAIO

    // Calcula a área (PI * RAIO ao quadrado)
    AREA = PI * RAIO * RAIO;      // Alternativa: AREA = PI * pow(RAIO, 2); (com <math.h>)

    // Exibe o resultado
    printf("A area da circunferencia eh: %.2f\n", AREA);  // "%.2f" mostra 2 casas decimais

    return 0;  // Encerra o programa
}
