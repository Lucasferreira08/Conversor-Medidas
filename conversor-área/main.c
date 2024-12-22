#include "conversor_area.h"
#include "conversor_area.c"

int main()
{
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

    if (escolha == 1)
    {
        printf("Informe o valor em m²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = m2_para_cm2(valorEntrada);
        printf("Resultado: %lf cm²\n", valorSaida);
    }
    else if (escolha == 2)
    {
        printf("Informe o valor em cm²: ");
        scanf("%lf", &valorEntrada);
        valorSaida = cm2_para_m2(valorEntrada);
        printf("Resultado: %lf m²\n", valorSaida);
    }
    else
    {
        printf("Opção inválida.\n");
    }
    return 0;
}
