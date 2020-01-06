#include <stdio.h>

int main() {
    int salario, alimentacao, descontos, salarioL;

    printf("Insere o salario: ");
    scanf("%d", &salario);

    printf("Insere o subsidio de alimentacao: ");
    scanf("%d", &alimentacao);

    printf("Insere os descontos: ");
    scanf("%d", &descontos);

    salarioL = (salario + alimentacao) - descontos;
    printf("O seu salario liquido é de %d euros.", salarioL);
    return 0;
}