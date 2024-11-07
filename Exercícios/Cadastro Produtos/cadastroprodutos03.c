#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

void incluirProduto();
void alterarProduto();
void excluirProduto();
void consultarProduto();
void listarProdutos();

int main() {
    int opcao;

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1. Incluir produto\n");
        printf("2. Alterar produto\n");
        printf("3. Excluir produto\n");
        printf("4. Consultar produto\n");
        printf("5. Listar todos os produtos\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                incluirProduto();
                break;
            case 2:
                alterarProduto();
                break;
            case 3:
                excluirProduto();
                break;
            case 4:
                consultarProduto();
                break;
            case 5:
                listarProdutos();
                break;
            case 6:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 6);

    return 0;
}

void incluirProduto() {
    Produto p;
    FILE *file = fopen("produtos.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Digite o numero do produto: ");
    scanf("%d", &p.numero);
    getchar();
    printf("Digite o nome do produto: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = 0; // Remove o caractere de nova linha
    printf("Digite a quantidade: ");
    scanf("%d", &p.quantidade);
    printf("Digite o preco: ");
    scanf("%f", &p.preco);

    fprintf(file, "%d %s %d %.2f\n", p.numero, p.nome, p.quantidade, p.preco);
    fclose(file);

    printf("Produto incluido com sucesso!\n");
}

void alterarProduto() {
    Produto p;
    int numero, encontrado = 0;
    FILE *file = fopen("produtos.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Digite o numero do produto a ser alterado: ");
    scanf("%d", &numero);

    while (fscanf(file, "%d %49[^\n] %d %f", &p.numero, p.nome, &p.quantidade, &p.preco) == 4) {
        if (p.numero == numero) {
            encontrado = 1;
            printf("Digite o novo nome do produto: ");
            getchar();
            fgets(p.nome, sizeof(p.nome), stdin);
            p.nome[strcspn(p.nome, "\n")] = 0;
            printf("Digite a nova quantidade: ");
            scanf("%d", &p.quantidade);
            printf("Digite o novo preco: ");
            scanf("%f", &p.preco);
        }
        fprintf(tempFile, "%d %s %d %.2f\n", p.numero, p.nome, p.quantidade, p.preco);
    }

    fclose(file);
    fclose(tempFile);
    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    if (encontrado) {
        printf("Produto alterado com sucesso!\n");
    } else {
        printf("Produto nao encontrado!\n");
    }
}

void excluirProduto() {
    Produto p;
    int numero, encontrado = 0;
    FILE *file = fopen("produtos.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");

    if (file == NULL || tempFile == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Digite o numero do produto a ser excluido: ");
    scanf("%d", &numero);

    while (fscanf(file, "%d %49[^\n] %d %f", &p.numero, p.nome, &p.quantidade, &p.preco) == 4) {
        if (p.numero == numero) {
            encontrado = 1;
            continue; // Pula o produto a ser excluido
        }
        fprintf(tempFile, "%d %s %d %.2f\n", p.numero, p.nome, p.quantidade, p.preco);
    }

    fclose(file);
    fclose(tempFile);
    remove("produtos.txt");
    rename("temp.txt", "produtos.txt");

    if (encontrado) {
        printf("Produto excluido com sucesso!\n");
    } else {
        printf("Produto nao encontrado!\n");
    }
}

void consultarProduto() {
    Produto p;
    int numero, encontrado = 0;
    FILE *file = fopen("produtos.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("Digite o numero do produto para consulta: ");
    scanf("%d", &numero);

    while (fscanf(file, "%d %49[^\n] %d %f", &p.numero, p.nome, &p.quantidade, &p.preco) == 4) {
        if (p.numero == numero) {
            printf("\nProduto encontrado:\n");
            printf("Numero: %d\n", p.numero);
            printf("Nome: %s\n", p.nome);
            printf("Quantidade: %d\n", p.quantidade);
            printf("Preco: %.2f\n", p.preco);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto nao encontrado!\n");
    }

    fclose(file);
}

void listarProdutos() {
    Produto p;
    FILE *file = fopen("produtos.txt", "r");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    printf("\nListagem de todos os produtos:\n");
    printf("------------------------------------\n");

    int encontrouProdutos = 0;
    while (fscanf(file, "%d %49[^\n] %d %f", &p.numero, p.nome, &p.quantidade, &p.preco) == 4) {
        printf("Numero: %d | Nome: %s | Quantidade: %d | Preco: %.2f\n",
               p.numero, p.nome, p.quantidade, p.preco);
        encontrouProdutos = 1;
    }

    if (!encontrouProdutos) {
        printf("Nenhum produto cadastrado.\n");
    }

    printf("------------------------------------\n");
    fclose(file);
}
