#include <stdio.h>

int main() {
    int compra, pago, troco, n100, n10, n1;

    printf("Digite o valor da compra: ");
    scanf("%d", &compra);
    printf("Digite o valor pago: ");
    scanf("%d", &pago);

    troco = pago - compra;

    n100 = troco / 100;
    troco %= 100;
    n10 = troco / 10;
    troco %= 10;
    n1 = troco;

    printf("Troco total: R$ %d\n", pago - compra);
    printf("Notas de 100: %d\n", n100);
    printf("Notas de 10: %d\n", n10);
    printf("Notas de 1: %d\n", n1);

    return 0;
}