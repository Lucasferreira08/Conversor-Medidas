#include <stdio.h>
#include "conversor_potencia.h"

int main() {
    int unidadeOrigem;
    double valor;

    printf("Conversor de Unidades de Potência\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv)\n");
    printf("4. Horsepower (hp)\n");
    printf("Escolha a unidade de origem (1-4): ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("\nResultado das conversões:\n");

    // Converter para todas as unidades possíveis
    if (unidadeOrigem == 1) { // Se a unidade de origem for Watts
        printf("Quilowatts (kW): %.2lf\n", watts_para_kw(valor));
        printf("Cavalos-vapor (cv): %.2lf\n", watts_para_cv(valor));
        printf("Horsepower (hp): %.2lf\n", watts_para_hp(valor));
    } else if (unidadeOrigem == 2) { // Se a unidade de origem for Quilowatts
        printf("Watts (W): %.2lf\n", kw_para_watts(valor));
        printf("Cavalos-vapor (cv): %.2lf\n", kw_para_cv(valor));
        printf("Horsepower (hp): %.2lf\n", kw_para_hp(valor));
    } else if (unidadeOrigem == 3) { // Se a unidade de origem for Cavalos-vapor
        printf("Watts (W): %.2lf\n", cv_para_watts(valor));
        printf("Quilowatts (kW): %.2lf\n", cv_para_kw(valor));
        printf("Horsepower (hp): %.2lf\n", cv_para_hp(valor));
    } else if (unidadeOrigem == 4) { // Se a unidade de origem for Horsepower
        printf("Watts (W): %.2lf\n", hp_para_watts(valor));
        printf("Quilowatts (kW): %.2lf\n", hp_para_kw(valor));
        printf("Cavalos-vapor (cv): %.2lf\n", hp_para_cv(valor));
    }

    return 0;
}
