#include <stdio.h>
#include "conversor_velocidade/conversor_velocidade.h"
#include "conversor_tempo/conversor_tempo.h"
#include "conversor_potencia/conversor_potencia.h"
#include "conversor_massa/conversor_massa.h"
#include "conversor_area/conversor_area.h"

void main() {
     setlocale(LC_ALL, "Portuguese");

printf("-------------------------------\n"); 
printf(" Seja bem-vindo(a) ao \n");
printf(" conversor de unidades \n"); 
printf("-------------------------------\n");
printf("Selecione a sua opção:\n"); 
printf("1 - Unidades de comprimento\n");
printf("2 - Unidades de massa\n");
printf("3 - Unidades de volume\n");
printf("4 - Unidades de temperatura\n");
printf("5 - Unidade de potência \n");
printf("6 - Unidades de área\n"); 
printf("7 - Unidades de tempo\n");
printf("8 - Unidade de medida para dados\n"); printf("9 - Sair\n");


void menu_velocidade() {
    double kmh = 100.0, ms = 27.78, mph = 62.14;
    printf("\nConversor de Velocidade:\n");
    printf("%.2f km/h -> %.2f m/s\n", kmh, kmh_para_ms(kmh));
    printf("%.2f km/h -> %.2f mph\n", kmh, kmh_para_mph(kmh));
    printf("%.2f m/s -> %.2f mph\n", ms, ms_para_mph(ms));
    printf("%.2f m/s -> %.2f km/h\n", ms, ms_para_kmh(ms));
    printf("%.2f mph -> %.2f m/s\n", mph, mph_para_ms(mph));
    printf("%.2f mph -> %.2f km/h\n", mph, mph_para_kmh(mph));
}

void menu_tempo() {
    double valor;
    printf("\nConversor de Tempo:\n");
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
}

void menu_potencia() {
    int unidadeOrigem;
    double valor;
    printf("\nConversor de Potência:\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Watts (W)\n2. Quilowatts (kW)\n3. Cavalos-vapor (cv)\n4. Horsepower (hp)\n");
    printf("Escolha a unidade de origem (1-4): ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("\nResultado das conversões:\n");
    switch (unidadeOrigem) {
        case 1:
            printf("Quilowatts (kW): %.2lf\n", watts_para_kw(valor));
            printf("Cavalos-vapor (cv): %.2lf\n", watts_para_cv(valor));
            printf("Horsepower (hp): %.2lf\n", watts_para_hp(valor));
            break;
        case 2:
            printf("Watts (W): %.2lf\n", kw_para_watts(valor));
            printf("Cavalos-vapor (cv): %.2lf\n", kw_para_cv(valor));
            printf("Horsepower (hp): %.2lf\n", kw_para_hp(valor));
            break;
        case 3:
            printf("Watts (W): %.2lf\n", cv_para_watts(valor));
            printf("Quilowatts (kW): %.2lf\n", cv_para_kw(valor));
            printf("Horsepower (hp): %.2lf\n", cv_para_hp(valor));
            break;
        case 4:
            printf("Watts (W): %.2lf\n", hp_para_watts(valor));
            printf("Quilowatts (kW): %.2lf\n", hp_para_kw(valor));
            printf("Cavalos-vapor (cv): %.2lf\n", hp_para_cv(valor));
            break;
        default:
            printf("Opção inválida.\n");
    }
}

void menu_massa() {
    int opcao;
    float valor;
    printf("\nConversor de Massa:\n");
    printf("1 - Gramas para Quilogramas\n");
    printf("2 - Quilogramas para Gramas\n");
    printf("3 - Quilogramas para Toneladas\n");
    printf("4 - Toneladas para Quilogramas\n");
    printf("Digite a opção desejada: ");
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
            printf("Opção inválida.\n");
    }
}

void menu_area() {
    int escolha;

 double valorEntrada, valorSaida;
    printf("\nConversor de Área:\n");
    printf("1 - Metro quadrado para Centímetro quadrado\n");
    printf("2 - Centímetro quadrado para Metro quadrado\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Informe o valor em m²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = m2_para_cm2(valorEntrada);
        printf("Resultado: %.2lf cm²\n", valorSaida);
    } else if (escolha == 2) {
        printf("Informe o valor em cm²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = cm2_para_m2(valorEntrada);
        printf("Resultado: %.2lf m²\n", valorSaida);
    } else {
        printf("Opção inválida.\n");
    }
}

int main() {
    int opcao;
    do {
        printf("\nMenu Principal:\n");
        printf("1 - Conversor de Velocidade\n");
        printf("2 - Conversor de Tempo\n");
        printf("3 - Conversor de Potência\n");
        printf("4 - Conversor de Massa\n");
        printf("5 - Conversor de Área\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menu_velocidade();
                break;
            case 2:
                menu_tempo();
                break;
            case 3:
                menu_potencia();
                break;
            case 4:
                menu_massa();
                break;
            case 5:
                menu_area();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}   