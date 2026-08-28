//Faça um programa que leia os preços de uma mercadoria em abril e maio. Tendo como base a variação dos preços desta mercadoria, calcule a taxa de inflação.

#include <stdio.h>

int main() {
    float preco_abril, preco_maio;
    float taxa_inflacao;

    printf("Digite o preço da mercadoria em abril: ");
    scanf("%f", &preco_abril);

    printf("Digite o preço da mercadoria em maio: ");
    scanf("%f", &preco_maio);

    taxa_inflacao = ((preco_maio - preco_abril) / preco_abril) * 100;

    printf("Taxa de inflação: %.2f%%\n", taxa_inflacao);

    return 0;
}