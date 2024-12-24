#include <stdio.h>
#include "conversor_comprimento.h"

void menuConversorComprimento() {
    printf("\nSelecione a unidade:\n\n");
    printf("1. Quilômetro (km)\n");
    printf("2. Metro (m)\n");
    printf("3. Centímetro (cm)\n");
    printf("4. Milímetro (mm)\n");
}

double converterUnidadesComprimento(double valor, int unidadeOrigem, int unidadeDestino) {
    // Matriz de fatores de conversão entre as unidades
    double fatores[4][4] = {
        {1, 1000, 100000, 1000000},       // Quilômetro para outras unidades
        {0.001, 1, 100, 1000},            // Metro para outras unidades
        {0.00001, 0.01, 1, 10},           // Centímetro para outras unidades
        {0.000001, 0.001, 0.1, 1}         // Milímetro para outras unidades
    };

    return valor * fatores[unidadeOrigem - 1][unidadeDestino - 1];
}
