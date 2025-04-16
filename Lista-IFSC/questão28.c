#include <stdio.h> //biblioteca

int main() {
    int N,C,D,U,M; //declarações de variáveis

    do { //loop para garantir que o número tenha 3 algarismos
        printf("Digite um 3 algarismos: ");
        scanf("%d", &N);

        if (N < 100 || N > 999) {
            printf("Número inválido. Deve ter 3 algarismos.\n");
        }
    } while (N < 100 || N > 999);

    C = N / 100; //centena
    D = (N / 10) % 10; //dezena
    U = N % 10;

    M = U * 100 + D * 10 + C; //inverte os algarismos
    printf("O número original é: %d\n", N);
    printf("O número invertido é: %d\n", M);
    
    return 0; 
}
