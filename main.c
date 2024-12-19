#include <stdio.h>
#include "conversor_velocidade/conversor_velocidade.h"

int main(void){
    double kmh = 100.0;
    double ms = 27.78;
    double mph = 62.14;

    printf("%.2f km/h -> %.2f m/s\n", kmh, kmh_para_ms(kmh));
    printf("%.2f km/h -> %.2f mph\n", kmh, kmh_para_mph(kmh));
    printf("%.2f m/s -> %.2f mph\n", ms, ms_para_mph(ms));
    printf("%.2f m/s -> %.2f km/h\n", ms, ms_para_kmh(ms));
    printf("%.2f mph -> %.2f m/s\n", mph, mph_para_ms(mph));
    printf("%.2f mph -> %.2f km/h\n", mph, mph_para_kmh(mph));

    printf("\nPressione Enter para sair...");
    getchar();  // Aguarda o usuário pressionar Enter

    return 0;
}