#include <stdio.h>

int main() {
    int anos, meses, dias, total;

    printf("Informe a idade:\nAnos: ");
    scanf("%d", &anos);
    printf("Meses: ");
    scanf("%d", &meses);
    printf("Dias: ");
    scanf("%d", &dias);

    total = (anos * 365) + (meses * 30) + dias;

    printf("Voce viveu aproximadamente %d dias.\n", total);
    return 0;
}