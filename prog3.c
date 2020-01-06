#include <stdio.h>

int main() {
    const double potencia = 5.42, precoKwh = 0.16, iva = 0.18;
    double consumo, final;

    printf("Consumo de eletricidade: ");
    scanf("%lf", &consumo);

    final = potencia + (consumo * precoKwh);
    printf("Valor a pagar com IVA = %lf euros", (final * iva) + final);

    return 0;
}