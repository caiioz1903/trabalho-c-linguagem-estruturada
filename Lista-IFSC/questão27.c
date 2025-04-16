#include <stdio.h> //biblioteca

int main() {
    int codigo; //declarações de variáveis
    int A, B, C, D, E;
    int S, DigitoV;

    do { //fiz um loop para garantir que o código tenha exatamente 5 algarismos
        printf("Digite um código de 5 algarismos: ");
        scanf("%d", &codigo);

        if (codigo < 10000 || codigo > 99999) {
            printf("Código inválido. Deve ter exatamente 5 algarismos.\n\n");
        }
    } while (codigo < 10000 || codigo > 99999);
    
    // extrai cada algarismo
    A = codigo / 10000;
    B = (codigo / 1000) % 10;
    C = (codigo / 100) % 10;
    D = (codigo / 10) % 10;
    E = codigo % 10;

    // Calcula S e o dígito verificador
    S = 6*A + 5*B + 4*C + 3*D + 2*E;
    DigitoV = S % 7;

    printf("O dígito verificador (módulo 7) é: %d\n", DigitoV);

    return 0;
}
