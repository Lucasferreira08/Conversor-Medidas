#include <stdio.h>
#include "conversor_memoria.h"

double bits_para_bytes(double bits) {
    return bits / 8;
}

double bits_para_KB(double bits) {
    return bits / (8 * 1024);
}

double bits_para_MB(double bits) {
    return bits / (8 * 1024 * 1024);
}

double bits_para_GB(double bits) {
    return bits / (8.0 * 1024.0 * 1024.0 * 1024.0);
}

double bits_para_TB(double bits) {
    return bits / (8.0 * 1024.0 * 1024.0 * 1024.0 * 1024.0);
}

double bytes_para_bits(double bytes) {
    return bytes * 8;
}

double bytes_para_KB(double bytes) {
    return bytes / 1024.0;
}

double bytes_para_MB(double bytes) {
    return bytes / (1024.0 * 1024.0);
}

double bytes_para_GB(double bytes) {
    return bytes / (1024.0 * 1024.0 * 1024.0);
}

double bytes_para_TB(double bytes) {
    return bytes / (1024.0 * 1024.0 * 1024.0 * 1024.0);
}

double KB_para_bits(double KB) {
    return KB * 8.0 * 1024.0;
}

double KB_para_bytes(double KB) {
    return KB * 1024.0;
}

double KB_para_MB(double KB) {
    return KB / 1024.0;
}

double KB_para_GB(double KB) {
    return KB / (1024.0 * 1024.0);
}

double KB_para_TB(double KB) {
    return KB / (1024.0 * 1024.0 * 1024.0);
}

double MB_para_bits(double MB) {
    return MB * 8 * 1024 * 1024;
}

double MB_para_bytes(double MB) {
    return MB * 1024 * 1024;
}

double MB_para_KB(double MB) {
    return MB * 1024;
}

double MB_para_GB(double MB) {
    return MB / 1024;
}

double MB_para_TB(double MB) {
    return MB / (1024 * 1024);
}

double GB_para_bits(double GB) {
    return GB * 8 * 1024 * 1024 * 1024;
}

double GB_para_bytes(double GB) {
    return GB * 1024 * 1024 * 1024;
}

double GB_para_KB(double GB) {
    return GB * 1024 * 1024;
}

double GB_para_MB(double GB) {
    return GB * 1024;
}

double GB_para_TB(double GB) {
    return GB / 1024;
}

double TB_para_bits(double TB) {
    return TB * 8 * 1024 * 1024 * 1024 * 1024;
}

double TB_para_bytes(double TB) {
    return TB * 1024 * 1024 * 1024 * 1024;
}

double TB_para_KB(double TB) {
    return TB * 1024 * 1024 * 1024;
}

double TB_para_MB(double TB) {
    return TB * 1024 * 1024;
}

double TB_para_GB(double TB) {
    return TB * 1024;
}

void conversorMemoria() {
    int unidadeOrigemMemoria;
    double valorMemoria;    

    printf("Conversor de Unidades de Memória\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Bits\n");
    printf("2. Bytes (B)\n");
    printf("3. Kilobytes (KB)\n");
    printf("4. Megabytes (MB)\n");
    printf("5. Gigabytes (GB)\n");
    printf("6. Terabytes (TB)\n");
    scanf("%d", &unidadeOrigemMemoria);
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valorMemoria);
    printf("\nResultado das conversões:\n");

    



    switch (unidadeOrigemMemoria) {
        case 1:
            printf("%.2lf bits = %.2lf bytes\n", valorMemoria, bits_para_bytes(valorMemoria));
            printf("%.2lf bits = %.2lf KB\n", valorMemoria, bits_para_KB(valorMemoria));
            printf("%.2lf bits = %.2lf MB\n", valorMemoria, bits_para_MB(valorMemoria));
            printf("%.2lf bits = %.2lf GB\n", valorMemoria, bits_para_GB(valorMemoria));
            printf("%.2lf bits = %.2lf TB\n", valorMemoria, bits_para_TB(valorMemoria));
            break;
        case 2:
            printf("%.2lf bytes = %.2lf bits\n", valorMemoria, bytes_para_bits(valorMemoria));
            printf("%.2lf bytes = %.2lf KB\n", valorMemoria, bytes_para_KB(valorMemoria));
            printf("%.2lf bytes = %.2lf MB\n", valorMemoria, bytes_para_MB(valorMemoria));
            printf("%.2lf bytes = %.2lf GB\n", valorMemoria, bytes_para_GB(valorMemoria));
            printf("%.2lf bytes = %.2lf TB\n", valorMemoria, bytes_para_TB(valorMemoria));
            break;
        case 3:
            printf("%.2lf KB = %.2lf bits\n", valorMemoria, KB_para_bits(valorMemoria));
            printf("%.2lf KB = %.2lf bytes\n", valorMemoria, KB_para_bytes(valorMemoria));
            printf("%.2lf KB = %.2lf MB\n", valorMemoria, KB_para_MB(valorMemoria));
            printf("%.2lf KB = %.2lf GB\n", valorMemoria, KB_para_GB(valorMemoria));
            printf("%.2lf KB = %.2lf TB\n", valorMemoria, KB_para_TB(valorMemoria));
            break;
        case 4:
            printf("%.2lf MB = %.2lf bits\n", valorMemoria, MB_para_bits(valorMemoria));
            printf("%.2lf MB = %.2lf bytes\n", valorMemoria, MB_para_bytes(valorMemoria));
            printf("%.2lf MB = %.2lf KB\n", valorMemoria, MB_para_KB(valorMemoria));
            printf("%.2lf MB = %.2lf GB\n", valorMemoria, MB_para_GB(valorMemoria));

    }

}