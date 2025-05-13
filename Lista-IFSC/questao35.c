#include <stdio.h>

int main() {
    char nome[50];
    float n1, n2, n3, media;

    printf("Nome do candidato: ");
    scanf("%s", nome);
    printf("Nota em Portugues: ");
    scanf("%f", &n1);
    printf("Nota em Matematica: ");
    scanf("%f", &n2);
    printf("Nota em Conhecimentos Gerais: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("Media: %.2f\n", media);
    if (media > 7.0 && n1 >= 5 && n2 >= 5 && n3 >= 5)
        printf("Candidato aprovado!\n");
    else
        printf("Candidato reprovado!\n");

    return 0;
}