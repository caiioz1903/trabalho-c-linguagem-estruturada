#include <stdio.h> //biblioteca

int main() {
    int a, i, cont; //variaveis
    cont = 0;

    for (i = 0; i < 5; i++) { //loop
        printf("Digite um valor: ");
        scanf("%d", &a);
        if (a < 0) { //Contar os negativos
            cont++;
        }
    }

    printf("Quantidade de negativos: %d\n", cont); //imprimir

    return 0;
}
