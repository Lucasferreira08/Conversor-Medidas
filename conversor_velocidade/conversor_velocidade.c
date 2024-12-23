// Arquivo de implementação da biblioteca de conversor de velocidade

#include "conversor_velocidade.h"


// Funções que realizam as conversões abaixo
double kmh_para_ms(double kmh){
    return kmh/3.6;
}

double kmh_para_mph(double kmh){
    return kmh*0.621371;
}

double ms_para_mph(double ms){
    return ms*2.23694;
}

double ms_para_kmh(double ms){
    return ms*3.6;
}

double mph_para_ms(double mph){
    return mph/2.23694;
}

double mph_para_kmh(double mph){
    return mph/0.621371;
}