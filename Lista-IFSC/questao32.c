#include <stdio.h>

 int main() {
    int N; //Variável
        
    printf("Digite um número: "); //entrada de dados
    scanf("%d", &N);

    if (N <= 10) //condições
        printf("F1\n");
    else
        if (N > 10 && N <= 100)
            printf("F2\n");
        else
            printf("F3\n");
    return 0;
 }
