#include <stdio.h>
#include "conversor_comprimento.h"

void menuConversorComprimento() {
    printf("\nSelecione a unidade:\n\n");
    printf("1. Quil�metro (km)\n");
    printf("2. Metro (m)\n");
    printf("3. Cent�metro (cm)\n");
    printf("4. Mil�metro (mm)\n");
}

double converterUnidadesComprimento(double valor, int unidadeOrigem, int unidadeDestino) {
    // Matriz de fatores de convers�o entre as unidades
    double fatores[4][4] = {
        {1, 1000, 100000, 1000000},       // Quil�metro para outras unidades
        {0.001, 1, 100, 1000},            // Metro para outras unidades
        {0.00001, 0.01, 1, 10},           // Cent�metro para outras unidades
        {0.000001, 0.001, 0.1, 1}         // Mil�metro para outras unidades
    };

    return valor * fatores[unidadeOrigem - 1][unidadeDestino - 1];
}
