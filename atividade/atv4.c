///Atividade 4 - Cálculo de reajuste salarial de um funcionário

#include <stdio.h>

int main(){
    float salario, percentual, novo_salario;

    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste:");
    scanf("%f", &percentual);

    novo_salario = salario + (salario * percentual / 100);
    printf("O novo salário é: %.2f", novo_salario);

    return 0;
}