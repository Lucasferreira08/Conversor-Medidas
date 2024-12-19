#include <stdio.h>

// Função para realizar a conversão entre as unidades
float converter(float valor, int origem, int destino) {
    // Se a origem e o destino forem a mesma unidade, retorna o valor original
    if (origem == destino) {
        return valor;
    }

    // Converte o valor de acordo com a origem e o destino
    // De Watts (W)
    if (origem == 1) {
        if (destino == 2) {  // Watts para Quilowatts (kW)
            return valor / 1000;
        } else if (destino == 3) {  // Watts para Cavalos-vapor (cv)
            return valor / 735.5;
        } else if (destino == 4) {  // Watts para Horsepower (hp)
            return valor / 745.7;
        }
    }
    // De Quilowatts (kW)
    else if (origem == 2) {
        if (destino == 1) {  // Quilowatts para Watts
            return valor * 1000;
        } else if (destino == 3) {  // Quilowatts para Cavalos-vapor (cv)
            return valor * 1000 / 735.5;
        } else if (destino == 4) {  // Quilowatts para Horsepower (hp)
            return valor * 1000 / 745.7;
        }
    }
    // De Cavalos-vapor (cv)
    else if (origem == 3) {
        if (destino == 1) {  // Cavalos-vapor para Watts
            return valor * 735.5;
        } else if (destino == 2) {  // Cavalos-vapor para Quilowatts
            return valor * 735.5 / 1000;
        } else if (destino == 4) {  // Cavalos-vapor para Horsepower (hp)
            return valor * 735.5 / 745.7;
        }
    }
    // De Horsepower (hp)
    else if (origem == 4) {
        if (destino == 1) {  // Horsepower para Watts
            return valor * 745.7;
        } else if (destino == 2) {  // Horsepower para Quilowatts
            return valor * 745.7 / 1000;
        } else if (destino == 3) {  // Horsepower para Cavalos-vapor
            return valor * 745.7 / 735.5;
        }
    }

    return -1;  // Caso inválido
}

int main() {
    int unidadeOrigem;
    float valor, resultado;

    printf("Conversor de Unidades de Potencia\n");
    printf("Escolha a unidade de origem:\n");
    printf("1. Watts (W)\n");
    printf("2. Quilowatts (kW)\n");
    printf("3. Cavalos-vapor (cv)\n");
    printf("4. Horsepower (hp)\n");
    printf("Escolha a unidade de origem (1-4): ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Exibe a conversão para todas as unidades
    printf("\nResultado das conversoes:\n");

    // Converter para Watts (W)
    resultado = converter(valor, unidadeOrigem, 1);
    printf("Watts (W): %.2f\n", resultado);

    // Converter para Quilowatts (kW)
    resultado = converter(valor, unidadeOrigem, 2);
    printf("Quilowatts (kW): %.2f\n", resultado);

    // Converter para Cavalos-vapor (cv)
    resultado = converter(valor, unidadeOrigem, 3);
    printf("Cavalos-vapor (cv): %.2f\n", resultado);

    // Converter para Horsepower (hp)
    resultado = converter(valor, unidadeOrigem, 4);
    printf("Horsepower (hp): %.2f\n", resultado);

    return 0;
}
