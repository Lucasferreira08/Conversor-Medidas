#include <stdio.h>
#include "conversor_velocidade/conversor_velocidade.h"
#include "../conversor_tempo/conversor_tempo.h"

int main() {
    double valor;
    double kmh = 100.0;
    double ms = 27.78;
    double mph = 62.14;
  
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

    return 0;
}