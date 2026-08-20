#include <stdio.h>
//biblioteca de entrada e saída padrão
 
int main(){
    char nome[50], email[50];
    int idade, matricula;
    float saldo, media;
// Variáveis
 
 
    printf("Digite seu nome: \n"); // printf (imprime na tela)
    fgets(nome, 50, stdin); // fgets (Variável, tamanho, entrada padrão)
    printf("seu nome é: %s", nome);
 
    printf("Digite seu email: \n"); // printf (imprime na tela)
    fgets(email, 50, stdin); // fgets (Variável, tamanho, entrada padrão)
    printf("seu email é: %s", email); // printf (imprime na tela)
 
    printf("Digite sua matricula: \n"); // printf (imprime na tela)
    scanf("%d", &matricula); // scanf (variavel de entrada, endereço da variavel)
    printf("sua matricula é: %d", matricula); // printf (imprime na tela)
 
    printf("Digite sua idade: \n"); // printf (imprime na tela)
    scanf("%d", &idade); // scanf (variavel de entrada, endereço da variavel)
    printf("sua idade é: %d", idade); // printf (imprime na tela)
 
    return 0;
 
}
 
// #include <stdio.h>    
// int main (){
 
// Variáveis (idade, matricula, saldo, media, nome, email)
// int idade, matricula;
// float saldo, media;
// char nome[50], email[50];
 
//return 0;
//}
 
               
//tipo de dado - Float  
// (real), (inteiro)
 
//tipo de dado - Inteiro
// (int), pode ser positivo ou negativo +/-
 
//tipo de dado - Char - Letras
// (letras, números, caractere especial, acentuação, espaço em branco)
 
// Operadores
// Aritmeticos - + (adição), - (subtração), * (multiplicação), / (divisão)
// Relacionais - == (igual), != (diferente), < (menor), > (maior), <= (menor ou igual), >= (maior ou igual)
// Lógicos - && (e), || (ou), ! (não)
// Atribuição - = (atribuição), += (adição e atribuição), -= (subtração e atribuição), *= (multiplicação e atribuição), /= (divisão e atribuição)
 