// /Atividade 3 - Programa que calcula o cubo de um numero inteiro 

#include <stdio.h>

    int main(){
        int  numero, cubo;
        
        printf("Digite um número: ");
        scanf("%d", &numero);               

        cubo = numero * numero * numero;
        printf("O cubo de %d é %d\n", numero, cubo);    


        return 0;
        
    }
    