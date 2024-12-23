#include <stdio.h>
#include "conversor_velocidade/conversor_velocidade.h"
#include "conversor_tempo/conversor_tempo.h"
#include "conversor_potencia/conversor_potencia.h"
#include "conversor_massa/conversor_massa.h"
#include "conversor_area/conversor_area.h"

int main() {
    double valor;
    double kmh = 100.0;
    double ms = 27.78;
    double mph = 62.14;
    int unidadeOrigem;
    double valor2;
    float valor3;
    int opcao;
    int escolha;
    double valorEntrada, valorSaida;

    // compilação: -I./conversor_tempo -I./conversor_velocidade -I./conversor_potencia -I./conversor_massa -I./conversor_area  main.c ./conversor_tempo/conversor_tempo.c ./conversor_velocidade/conversor_velocidade.c ./conversor_potencia/conversor_potencia.c ./conversor_massa/conversor_massa.c ./conversor_area/conversor_area.c  -o main
  
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

    // conversor de massa
    printf("Conversor de Unidades - Escolha a opcao:\n");
    printf("1 - Gramas para Quilogramas\n");
    printf("2 - Quilogramas para Gramas\n");
    printf("3 - Quilogramas para Toneladas\n");
    printf("4 - Toneladas para Quilogramas\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor3);

    switch (opcao) {
        case 1:
            printf("%.2f g = %.2f kg\n", valor3, gramas_para_quilogramas(valor3));
            break;
        case 2:
            printf("%.2f kg = %.2f g\n", valor3, quilogramas_para_gramas(valor3));
            break;
        case 3:
            printf("%.2f kg = %.2f toneladas\n", valor3, quilogramas_para_toneladas(valor3));
            break;
        case 4:
            printf("%.2f toneladas = %.2f kg\n", valor3, toneladas_para_quilogramas(valor3));
            break;
        default:
            printf("Opcao invalida.\n");
    }

    // conversor area
    printf("\n-------------------------------------------------\n");
    printf("Conversor de área\n");
    printf("-------------------------------------------------\n");
    printf("Informe o número da escolha a opção desejada:\n");
    printf("1- Metro quadrado para Centímetro quadrado;\n");
    printf("2- Centímetro quadrado para Metro quadrado;\n");
    printf("-------------------------------------------------\n");
    printf(" > ");
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        printf("Informe o valor em m²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = m2_para_cm2(valorEntrada);
        printf("Resultado: %lf cm²\n", valorSaida);
    }
    else if (escolha == 2)
    {
        printf("Informe o valor em cm²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = cm2_para_m2(valorEntrada);
        printf("Resultado: %lf m²\n", valorSaida);
    }
    else
    {
        printf("Opção inválida.\n");
    }

    return 0;
}