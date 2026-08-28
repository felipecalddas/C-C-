//Atividade 1 - Cálculo de idade
#include <stdio.h>

int main(){
    int anoNascimento, idadeAtual, anoAtual;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual:");
    scanf("%d", &anoAtual);
    idadeAtual = anoAtual - anoNascimento;
    printf("Sua idade atual é: %d\n", idadeAtual);

    return 0;
    
}