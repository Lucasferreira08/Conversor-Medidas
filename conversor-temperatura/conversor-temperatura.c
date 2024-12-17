#include <stdio.h>

// Funções para conversões
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double celsiusParaKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitParaCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double fahrenheitParaKelvin(double fahrenheit) {
    return fahrenheitParaCelsius(fahrenheit) + 273.15;
}

double kelvinParaCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinParaFahrenheit(double kelvin) {
    return celsiusParaFahrenheit(kelvinParaCelsius(kelvin));
}

int main() {
    int opcaoEntrada, opcaoSaida;
    double temperatura, resultado;

    printf("Conversor de Temperatura\n");
    printf("=========================\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcaoEntrada);

    printf("Digite o valor da temperatura: ");
    scanf("%lf", &temperatura);

    printf("Escolha a unidade de saida:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcaoSaida);

    // Conversão com base nas opções
    if (opcaoEntrada == 1) { // Celsius
        if (opcaoSaida == 2) {
            resultado = celsiusParaFahrenheit(temperatura);
            printf("Resultado: %.2lf Fahrenheit\n", resultado);
        } else if (opcaoSaida == 3) {
            resultado = celsiusParaKelvin(temperatura);
            printf("Resultado: %.2lf Kelvin\n", resultado);
        } else if (opcaoSaida == 1) {
            printf("Resultado: %.2lf Celsius\n", temperatura);
        } else {
            printf("Opcao de saida invalida!\n");
        }
    } else if (opcaoEntrada == 2) { // Fahrenheit
        if (opcaoSaida == 1) {
            resultado = fahrenheitParaCelsius(temperatura);
            printf("Resultado: %.2lf Celsius\n", resultado);
        } else if (opcaoSaida == 3) {
            resultado = fahrenheitParaKelvin(temperatura);
            printf("Resultado: %.2lf Kelvin\n", resultado);
        } else if (opcaoSaida == 2) {
            printf("Resultado: %.2lf Fahrenheit\n", temperatura);
        } else {
            printf("Opcao de saida invalida!\n");
        }
    } else if (opcaoEntrada == 3) { // Kelvin
        if (opcaoSaida == 1) {
            resultado = kelvinParaCelsius(temperatura);
            printf("Resultado: %.2lf Celsius\n", resultado);
        } else if (opcaoSaida == 2) {
            resultado = kelvinParaFahrenheit(temperatura);
            printf("Resultado: %.2lf Fahrenheit\n", resultado);
        } else if (opcaoSaida == 3) {
            printf("Resultado: %.2lf Kelvin\n", temperatura);
        } else {
            printf("Opcao de saida invalida!\n");
        }
    } else {
        printf("Opcao de entrada invalida!\n");
    }

    return 0;
}
