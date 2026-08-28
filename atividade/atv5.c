// Atividade 5 - Cálculo de percentual de votos brancos, nulos e válidos

#include <stdio.h>

int main() {
    int brancos, nulos, validos, total;
    float percentual_brancos, percentual_nulos, percentual_validos;

    printf("Digite o número de votos brancos: ");
    scanf("%d", &brancos);

    printf("Digite o número de votos nulos: ");
    scanf("%d", &nulos);

    printf("Digite o número de votos válidos: ");
    scanf("%d", &validos);

    total = brancos + nulos + validos;

    percentual_brancos = (float)brancos / total * 100;
    percentual_nulos = (float)nulos / total * 100;
    percentual_validos = (float)validos / total * 100;

    printf("Percentual de votos brancos: %.2f%%\n", percentual_brancos);
    printf("Percentual de votos nulos: %.2f%%\n", percentual_nulos);
    printf("Percentual de votos válidos: %.2f%%\n", percentual_validos);

    return 0;
}