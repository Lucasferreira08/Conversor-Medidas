#include <stdio.h>
#include "conversor_velocidade/conversor_velocidade.h"
#include "conversor_tempo/conversor_tempo.h"
#include "conversor_potencia/conversor_potencia.h"

int main() {
    double valor;
    double kmh = 100.0;
    double ms = 27.78;
    double mph = 62.14;
    int unidadeOrigem;
    double valor2;

    // compilação: gcc -I./conversor_tempo -I./conversor_velocidade -I./conversor_potencia  main.c ./conversor_tempo/conversor_tempo.c ./conversor_velocidade/conversor_velocidade.c ./conversor_potencia/conversor_potencia.c -o main
  
    // conversor velocidade

    printf("%.2f km/h -> %.2f m/s\n", kmh, kmh_para_ms(kmh));
    printf("%.2f km/h -> %.2f mph\n", kmh, kmh_para_mph(kmh));
    printf("%.2f m/s -> %.2f mph\n", ms, ms_para_mph(ms));
    printf("%.2f m/s -> %.2f km/h\n", ms, ms_para_kmh(ms));
    printf("%.2f mph -> %.2f m/s\n", mph, mph_para_ms(mph));
    printf("%.2f mph -> %.2f km/h\n", mph, mph_para_kmh(mph));

    printf("\nPressione Enter para sair...");
    getchar();  // Aguarda o usuário pressionar Enter

    // conversor tempo

    printf("Digite um valor em segundos: ");
    scanf("%lf", &valor);
    printf("%.2lf segundos = %.2lf minutos\n", valor, segundos_para_minutos(valor));
    printf("%.2lf segundos = %.2lf horas\n", valor, segundos_para_horas(valor));

    printf("\nDigite um valor em minutos: ");
    scanf("%lf", &valor);
    printf("%.2lf minutos = %.2lf segundos\n", valor, minutos_para_segundos(valor));
    printf("%.2lf minutos = %.2lf horas\n", valor, minutos_para_horas(valor));

    printf("\nDigite um valor em horas: ");
    scanf("%lf", &valor);
    printf("%.2lf horas = %.2lf segundos\n", valor, horas_para_segundos(valor));
    printf("%.2lf horas = %.2lf minutos\n", valor, horas_para_minutos(valor));

    // conversor de potencia

    printf("Conversor de Unidades de Potência\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv)\n");
    printf("4. Horsepower (hp)\n");
    printf("Escolha a unidade de origem (1-4): ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor2);

    printf("\nResultado das conversões:\n");

    // Converter para todas as unidades possíveis
    if (unidadeOrigem == 1) { // Se a unidade de origem for Watts
        printf("Quilowatts (kW): %.2lf\n", watts_para_kw(valor2));
        printf("Cavalos-vapor (cv): %.2lf\n", watts_para_cv(valor2));
        printf("Horsepower (hp): %.2lf\n", watts_para_hp(valor2));
    } else if (unidadeOrigem == 2) { // Se a unidade de origem for Quilowatts
        printf("Watts (W): %.2lf\n", kw_para_watts(valor2));
        printf("Cavalos-vapor (cv): %.2lf\n", kw_para_cv(valor2));
        printf("Horsepower (hp): %.2lf\n", kw_para_hp(valor2));
    } else if (unidadeOrigem == 3) { // Se a unidade de origem for Cavalos-vapor
        printf("Watts (W): %.2lf\n", cv_para_watts(valor2));
        printf("Quilowatts (kW): %.2lf\n", cv_para_kw(valor2));
        printf("Horsepower (hp): %.2lf\n", cv_para_hp(valor2));
    } else if (unidadeOrigem == 4) { // Se a unidade de origem for Horsepower
        printf("Watts (W): %.2lf\n", hp_para_watts(valor2));
        printf("Quilowatts (kW): %.2lf\n", hp_para_kw(valor2));
        printf("Cavalos-vapor (cv): %.2lf\n", hp_para_cv(valor2));
    }

    return 0;
}