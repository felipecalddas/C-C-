//Atividade 2 - Programa que lê um numero inteiro e imprime seu antecessor e sucessor. 


#include <stdio.h>

int main(){
    int numero, antecessor, sucessor;

    printf("Digite um número: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O antecessor de %d é %d\n", numero, antecessor);
    printf("O sucessor de %d é %d\n", numero, sucessor);

    return 0;
}