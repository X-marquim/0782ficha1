#include <stdio.h>

int main() {
    int receitas, despesas, saldo;

    printf("Valor das receitas: ");
    scanf("%d", &receitas);

    printf("Valor das dispesas: ");
    scanf("%d", &despesas);

    saldo = receitas - despesas;
    printf("Saldo: %d", saldo);

    return 0;
}