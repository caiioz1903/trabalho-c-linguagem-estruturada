#include <stdio.h>

// Função para calcular o fatorial de um número
double fatorial(int n) {
    double fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int N;
    double E = 1.0; // Começa com 1, que é o primeiro termo

    // Leitura do valor de N
    printf("Digite um valor inteiro e positivo para N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O valor de N deve ser positivo.\n");
        return 1;
    }

    // Calcula E somando os termos 1/i!
    for (int i = 1; i <= N; i++) {
        E += 1.0 / fatorial(i);
    }

    // Exibe o resultado
    printf("O valor de E é: %.10f\n", E);

    return 0;
}
