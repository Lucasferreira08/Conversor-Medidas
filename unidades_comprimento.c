#include <stdio.h>
#include <locale.h>

void menuUnidadeComprimento() {
    printf("Selecione a unidade:\n\n");
    printf("1. Quil�metro (km)\n");
    printf("2. Metro (m)\n");
    printf("3. Cent�metro (cm)\n");
    printf("4. Mil�metro (mm)\n");
}

double converterUnidades(double valor, int unidadeOrigem, int unidadeDestino) {
    // Matriz de fatores de convers�o entre as unidades
    double fatores[4][4] = {
        {1, 1000, 100000, 1000000},       // Quil�metro para outras unidades
        {0.001, 1, 100, 1000},            // Metro para outras unidades
        {0.00001, 0.01, 1, 10},           // Cent�metro para outras unidades
        {0.000001, 0.001, 0.1, 1}         // Mil�metro para outras unidades
    };

    return valor * fatores[unidadeOrigem - 1][unidadeDestino - 1];
}

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int unidadeOrigem, unidadeDestino;
    double valor, resultado;

    printf("Conversor de Unidades de Comprimento\n\n");

    menuUnidadeComprimento();
    printf("\nDigite o n�mero correspondente � unidade de origem: ");
    scanf("%d", &unidadeOrigem);

    if (unidadeOrigem < 1 || unidadeOrigem > 4) {
        printf("Unidade de origem inv�lida!\n");
        return 1;
    }

    printf("\nDigite o valor a ser convertido: ");
    scanf("%lf", &valor);

    menuUnidadeComprimento();
    printf("\nDigite o n�mero correspondente � unidade de destino: ");
    scanf("%d", &unidadeDestino);

    if (unidadeDestino < 1 || unidadeDestino > 4) {
        printf("Unidade de destino inv�lida!\n");
        return 1;
    }

    // Convers�o direta entre as unidades
    resultado = converterUnidades(valor, unidadeOrigem, unidadeDestino);

    printf("\n%.2lf na unidade %d equivale a %.2lf na unidade %d.\n", 
        valor, unidadeOrigem, resultado, unidadeDestino);

    return 0;
}
