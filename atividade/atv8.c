//atividade 8 - Calculo de consumo medio de um carro e lucro do dia 
#include <stdio.h>

int main() {
    float odometro_inicial, odometro_final, litros_gastos, valor_recebido;
    float distancia_percorrida, valor_total_gasto, consumo_medio, lucro;

    printf("Digite a marcação do odômetro no início do dia (Km): ");
    scanf("%f", &odometro_inicial);

    printf("Digite a marcação do odômetro no final do dia (Km): ");
    scanf("%f", &odometro_final);

    printf("Digite a quantidade de litros de combustível gasto: ");
    scanf("%f", &litros_gastos);

    printf("Digite o valor total recebido dos passageiros (R$): ");
    scanf("%f", &valor_recebido);

    distancia_percorrida = odometro_final - odometro_inicial;
    valor_total_gasto = litros_gastos * 6.59;
    consumo_medio = distancia_percorrida / litros_gastos;
    lucro = valor_recebido - valor_total_gasto;

    printf("Média do consumo: %.2f km/l\n", consumo_medio);
    printf("Lucro (líquido) do dia: %.2f R$\n", lucro);

    return 0;
}