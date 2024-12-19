#include "conversor_tempo.h"

// Função que converte segundos para minutos
double segundos_para_minutos(double segundos) {
    return segundos / 60.0;
}

// Função que converte segundos para horas
double segundos_para_horas(double segundos) {
    return segundos / 3600.0;
}

// Função que converte minutos para segundos
double minutos_para_segundos(double minutos) {
    return minutos * 60.0;
}

// Função que converte minutos para horas
double minutos_para_horas(double minutos) {
    return minutos / 60.0;
}

// Função que converte horas para segundos
double horas_para_segundos(double horas) {
    return horas * 3600.0;
}

// Função que converte horas para minutos
double horas_para_minutos(double horas) {
    return horas * 60.0;
}