#include "conversor_potencia.h"

// Funções que realizam as conversões

double watts_para_kw(double watts) {
    return watts / 1000;
}

double watts_para_cv(double watts) {
    return watts / 735.5;
}

double watts_para_hp(double watts) {
    return watts / 745.7;
}

double kw_para_watts(double kw) {
    return kw * 1000;
}

double kw_para_cv(double kw) {
    return kw * 1000 / 735.5;
}

double kw_para_hp(double kw) {
    return kw * 1000 / 745.7;
}

double cv_para_watts(double cv) {
    return cv * 735.5;
}

double cv_para_kw(double cv) {
    return cv * 735.5 / 1000;
}

double cv_para_hp(double cv) {
    return cv * 735.5 / 745.7;
}

double hp_para_watts(double hp) {
    return hp * 745.7;
}

double hp_para_kw(double hp) {
    return hp * 745.7 / 1000;
}

double hp_para_cv(double hp) {
    return hp * 745.7 / 735.5;
}
