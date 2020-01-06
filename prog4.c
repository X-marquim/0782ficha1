#include <stdio.h>

int main() {
    char nome[50];
    double teste1, teste2, teste3, final;

    printf("Nome: ");
    scanf("%s", nome);

    printf("Nota do primeiro teste: ");
    scanf("%lf", &teste1);

    printf("Nota do segundo teste: ");
    scanf("%lf", &teste2);

    printf("Nota do terceiro teste: ");
    scanf("%lf", &teste3);

    final = (teste1 * 0.25) + (teste2 * 0.35) + (teste3 * 0.40); 
    printf("Note final: %lf", final);
    
    return 0;
}