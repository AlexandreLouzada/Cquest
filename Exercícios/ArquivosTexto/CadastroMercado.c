#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constantes e definições
#define QTREG 30

// Estrutura para produtos
typedef struct {
    int codigo;
    char nome[QTREG];
    int quantidade;
    float preco;
} REGPRODUTO;

// Variáveis globais
REGPRODUTO produto[QTREG];
int totalProdutos = 0;
float caixaAtual = 800.00;

// Protótipos das funções
void exibirMenu();
void cadastrar();
void alterarEstoque();
void modificarPreco();
void realizarVenda();
void listarProdutos();
void consultarSaldo();

int main() {
    int opcao;

    do {
        exibirMenu();
        scanf("%d", &opcao);
        while (getchar() != '\n'); // Limpa o buffer

        switch (opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                alterarEstoque();
                break;
            case 3:
                modificarPreco();
                break;
            case 4:
                realizarVenda();
                break;
            case 5:
                listarProdutos();
                break;
            case 6:
                consultarSaldo();
                break;
            case 7:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}

void exibirMenu() {
    printf("\n\n** Mercadinho - Sistema de gerenciamento de mercadoria **\n");
    printf("1 - Cadastrar produto\n");
    printf("2 - Atualizar estoque\n");
    printf("3 - Alterar preco do produto\n");
    printf("4 - Realizar venda\n");
    printf("5 - Consultar estoque\n");
    printf("6 - Consultar saldo do caixa\n");
    printf("7 - Sair\n");
    printf("Escolha uma opcao: ");
}

void cadastrar() {
    if (totalProdutos >= QTREG) {
        printf("Limite de produtos atingido! Nao e possivel cadastrar mais produtos.\n");
        return;
    }

    REGPRODUTO p;
    printf("Digite o nome do produto: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = 0; // Remove o '\n'

    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);

    printf("Digite o preco: ");
    scanf("%f", &p.preco);
    while (getchar() != '\n'); // Limpa o buffer

    p.codigo = totalProdutos; // Código gerado automaticamente
    produto[totalProdutos] = p;
    totalProdutos++;

    printf("Produto cadastrado com sucesso!\n");
}

void alterarEstoque() {
    int codigo, novaQuantidade;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    while (getchar() != '\n');

    if (codigo < 0 || codigo >= totalProdutos) {
        printf("Codigo invalido!\n");
        return;
    }

    printf("Produto: %s | Quantidade atual: %d\n", produto[codigo].nome, produto[codigo].quantidade);
    printf("Digite a nova quantidade: ");
    scanf("%d", &novaQuantidade);

    produto[codigo].quantidade = novaQuantidade;
    printf("Estoque atualizado com sucesso!\n");
}

void modificarPreco() {
    int codigo;
    float novoPreco;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    while (getchar() != '\n');

    if (codigo < 0 || codigo >= totalProdutos) {
        printf("Codigo invalido!\n");
        return;
    }

    printf("Produto: %s | Preco atual: %.2f\n", produto[codigo].nome, produto[codigo].preco);
    printf("Digite o novo preco: ");
    scanf("%f", &novoPreco);

    produto[codigo].preco = novoPreco;
    printf("Preco atualizado com sucesso!\n");
}

void realizarVenda() {
    int codigo, quantidade;
    float total = 0;

    do {
        printf("Digite o codigo do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0 || codigo >= totalProdutos) {
            printf("Codigo invalido!\n");
            continue;
        }

        printf("Produto: %s | Quantidade em estoque: %d | Preco: %.2f\n",
               produto[codigo].nome, produto[codigo].quantidade, produto[codigo].preco);
        printf("Digite a quantidade para venda: ");
        scanf("%d", &quantidade);

        if (quantidade > produto[codigo].quantidade) {
            printf("Estoque insuficiente!\n");
        } else {
            produto[codigo].quantidade -= quantidade;
            total += quantidade * produto[codigo].preco;
        }

        printf("Deseja continuar a venda? (1 - Sim, 0 - Nao): ");
        scanf("%d", &codigo);
    } while (codigo == 1);

    caixaAtual += total;
    printf("Venda realizada! Total arrecadado: %.2f\n", total);
}

void listarProdutos() {
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < totalProdutos; i++) {
        printf("Codigo: %d | Nome: %s | Quantidade: %d | Preco: %.2f\n",
               produto[i].codigo, produto[i].nome, produto[i].quantidade, produto[i].preco);
    }
}

void consultarSaldo() {
    printf("Saldo atual em caixa: %.2f\n", caixaAtual);
}
