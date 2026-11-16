
#include <stdio.h>


struct Aluno{
    char nome[50];
    int idade;
    float notas[3];
};



int main()
{
    struct Aluno dadosAluno;
    printf("informe o nome do aluno: ");
    scanf ("%s", &dadosAluno.nome);
    
    //fgets(dadosAluno.nome, 50, stdin)
    //scanf ("%49[^\n]", dadosAluno.nome)
    
    printf("informe a idade do aluno: ");
    scanf ("%d", &dadosAluno.idade);
    
    for(int i=0; i<3; i++){
    printf("informe as notas do aluno: ");
    scanf ("%f", &dadosAluno.notas[i]);
    
    }
    
    printf("Dados do Aluno (a)");
    printf("%s\n", dadosAluno.nome);
    printf("%d\n", dadosAluno.idade);
    printf("notas\n");
    
    for(int i=0; i<3; i++){
        printf("notas %f", dadosAluno.notas[i]);
}
  
    
    
    return 0;
}



#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    struct Produto produto;
    int opcao, venda, reposicao;
    float valorEstoque, valorCompra;

    // Cadastro do produto
    printf("=== CADASTRO DE PRODUTO ===\n");

    printf("Nome do produto: ");
    scanf(" %[^\n]", produto.nome);

    printf("Preco do produto: R$ ");
    scanf("%f", &produto.preco);

    printf("Quantidade em estoque: ");
    scanf("%d", &produto.quantidade);

    printf("\nProduto cadastrado com sucesso!\n");

    do {
        printf("\n===== MENU DE OPCOES =====\n");
        printf("1 - Mostrar produto\n");
        printf("2 - Calcular valor do estoque\n");
        printf("3 - Registrar venda\n");
        printf("4 - Repor estoque\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\n=== PRODUTO CADASTRADO ===\n");
                printf("Nome: %s\n", produto.nome);
                printf("Preco: R$ %.2f\n", produto.preco);
                printf("Quantidade: %d unidades\n",
                       produto.quantidade);
                break;

            case 2:
                valorEstoque = produto.preco * produto.quantidade;

                printf("\n=== VALOR DO ESTOQUE ===\n");
                printf("Produto: %s\n", produto.nome);
                printf("Valor total: R$ %.2f\n", valorEstoque);
                break;

            case 3:
                printf("\nQuantas unidades deseja comprar? ");
                scanf("%d", &venda);

                if (venda > 0 && venda <= produto.quantidade) {
                    valorCompra = venda * produto.preco;
                    produto.quantidade -= venda;

                    printf("\nVenda realizada com sucesso!\n");
                    printf("Valor da compra: R$ %.2f\n", valorCompra);
                    printf("Estoque restante: %d unidades\n",
                           produto.quantidade);
                } else {
                    printf("\nVenda nao pode ser realizada!\n");
                    printf("Quantidade indisponivel ou invalida.\n");
                }
                break;

            case 4:
                printf("\nQuantas unidades chegaram? ");
                scanf("%d", &reposicao);

                if (reposicao > 0) {
                    produto.quantidade += reposicao;

                    valorEstoque = produto.preco * produto.quantidade;

                    printf("\nEstoque atualizado!\n");
                    printf("Produto: %s\n", produto.nome);
                    printf("Preco unitario: R$ %.2f\n", produto.preco);
                    printf("Quantidade atual: %d unidades\n",
                           produto.quantidade);
                    printf("Valor total do estoque: R$ %.2f\n",
                           valorEstoque);
                } else {
                    printf("\nQuantidade de reposicao invalida!\n");
                }
                break;

            case 0:
                printf("\nPrograma encerrado!\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}




