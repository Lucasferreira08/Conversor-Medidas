#include <stdio.h>
#include "conversor_massa.h"

int main() {
    float valor;
    int opcao;

    printf("Conversor de Unidades - Escolha a opcao:\n");
    printf("1 - Gramas para Quilogramas\n");
    printf("2 - Quilogramas para Gramas\n");
    printf("3 - Quilogramas para Toneladas\n");
    printf("4 - Toneladas para Quilogramas\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    switch (opcao) {
        case 1:
            printf("%.2f g = %.2f kg\n", valor, gramas_para_quilogramas(valor));
            break;
        case 2:
            printf("%.2f kg = %.2f g\n", valor, quilogramas_para_gramas(valor));
            break;
        case 3:
            printf("%.2f kg = %.2f toneladas\n", valor, quilogramas_para_toneladas(valor));
            break;
        case 4:
            printf("%.2f toneladas = %.2f kg\n", valor, toneladas_para_quilogramas(valor));
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
