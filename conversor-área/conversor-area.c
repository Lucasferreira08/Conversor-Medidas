#include <stdio.h>

double cm2_para_m2(double valor){
    return valor / 10000.0;
}

double m2_para_cm2(double valor){
    return valor * 10000.0;
}

void conversor_area(){
    int escolha;
    double valorEntrada, valorSaida;

    printf("\n-------------------------------------------------\n");
    printf("Conversor de área\n");
    printf("-------------------------------------------------\n");
    printf("Informe o número da escolha a opção desejada:\n");
    printf("1- Metro quadrado para Centímetro quadrado;\n");
    printf("2- Centímetro quadrado para Metro quadrado;\n");
    printf("-------------------------------------------------\n");
    printf(" > ");
    scanf("%d", &escolha);

    if (escolha == 1){
        printf("Informe o valor em m²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = m2_para_cm2(valorEntrada);
        printf("Resultado: %lf cm²\n", valorSaida);
    }
    else if (escolha == 2){
        printf("Informe o valor em cm²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = cm2_para_m2(valorEntrada);
        printf("Resultado: %lf m²\n", valorSaida);
    }
    else{
        printf("Opção inválida.\n");
    }
}

int main(){

    conversor_area();
    return 0;
}