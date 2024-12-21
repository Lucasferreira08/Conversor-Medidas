#include <stdio.h>
#include "conversor_massa.h"

void converterMassa() {
    float valor;
    int opcao;

    printf("Escolha a conversão de massa:\n");
    printf("1. Quilograma para Grama\n");
    printf("2. Quilograma para Tonelada\n");
    printf("3. Grama para Quilograma\n");
    printf("4. Tonelada para Quilograma\n");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
            printf("%.2f kg = %.2f g\n", valor, valor * 1000);
            break;
        case 2:
            printf("%.2f kg = %.2f t\n", valor, valor / 1000);
            break;
        case 3:
            printf("%.2f g = %.2f kg\n", valor, valor / 1000);
            break;
        case 4:
            printf("%.2f t = %.2f kg\n", valor, valor * 1000);
            break;
        default:
            printf("Opção inválida.\n");
    }
}
