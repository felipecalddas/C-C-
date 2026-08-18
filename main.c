#include <stdio.h>

int main(){
    char nome[50];
    int idade;

    printf("DIgite seu nome: \n");
    fgets(nome, 50, stdin);
    printf("seu nome é: %s", nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("sua idade é: %d", idade);

    return 0;

}