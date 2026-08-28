// Atividade 7 - Relatório de consumo de combustível
#include <stdio.h>

int main() {
    float quilometragem_inicial, quilometragem_final, litros_consumidos, preco_litro;
    float distancia_percorrida, valor_total_gasto, consumo_carro;

    printf("Digite a quilometragem inicial: ");
    scanf("%f", &quilometragem_inicial);

    printf("Digite a quilometragem final: ");
    scanf("%f", &quilometragem_final);

    printf("Digite o número de litros consumidos: ");
    scanf("%f", &litros_consumidos);

    printf("Digite o preço do litro de combustível: ");
    scanf("%f", &preco_litro);

    distancia_percorrida = quilometragem_final - quilometragem_inicial;
    valor_total_gasto = litros_consumidos * preco_litro;
    consumo_carro = distancia_percorrida / litros_consumidos;

    printf("Distância percorrida: %.2f km\n", distancia_percorrida);
    printf("Valor total gasto: %.2f\n", valor_total_gasto);
    printf("Consumo do carro: %.2f km/l\n", consumo_carro);

    return 0;
}   