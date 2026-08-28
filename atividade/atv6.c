// Atividade 6 - Cálculo de saldo devedor e quantidade de prestações pendentes

#include <stdio.h>

int main() {
    int total_prestacoes, prestacoes_pagas;
    float valor_prestacao, saldo_devedor;
    int prestacoes_pendentes;

    printf("Digite o número total de prestações: ");
    scanf("%d", &total_prestacoes);

    printf("Digite o número de prestações pagas: ");
    scanf("%d", &prestacoes_pagas);

    printf("Digite o valor atual da prestação: ");
    scanf("%f", &valor_prestacao);

    prestacoes_pendentes = total_prestacoes - prestacoes_pagas;
    saldo_devedor = prestacoes_pendentes * valor_prestacao;

    printf("Saldo devedor atual: %.2f\n", saldo_devedor);
    printf("Quantidade de prestações sem pagar: %d\n", prestacoes_pendentes);

    return 0;
}