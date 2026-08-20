#include <stdio.h>

int main(){
    char nome[50], email [50], cpf [12];;
    int idade;
   

    printf("Digite seu nome: \n");
    fgets(nome, 50, stdin);

    getchar();

    printf("Digite seu email: \n");
    fgets(email, 50, stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu CPF: \n");
    scanf("%11s", cpf);


    printf("cadastro realizado com sucesso!\n");

    printf("Nome: %s\n", nome);
    printf("Email: %s\n", email);
    printf("Idade: %d\n", idade);
    printf("CPF: %s\n", cpf);   

    if (cpf [0] == 0)  {
        printf("CPF inválido!\n");
    } else {
        printf("CPF Válido!\n");
    }


    if (idade < 18) {
        printf("Idade inválida!\n");
    } else {
        printf("idade  válida!\n");
    }
        return 0;
    }


