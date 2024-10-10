#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100

// Estrutura que define o produto
typedef struct {
    int numero;
    char nome[50];
    int quantidade;
    float preco;
} Produto;

// Array que armazenará os produtos e um contador
Produto produtos[MAX_PRODUTOS];
int contador_produtos = 0;

// Função para adicionar um novo produto
void adicionar_produto() {
    if (contador_produtos >= MAX_PRODUTOS) {
        printf("Limite máximo de produtos atingido.\n");
        return;
    }

    Produto p;
    
    printf("Digite o número do produto: ");
    scanf("%d", &p.numero);
    
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]s", p.nome);
    
    printf("Digite a quantidade do produto: ");
    scanf("%d", &p.quantidade);
    
    printf("Digite o preço do produto: ");
    scanf("%f", &p.preco);
    
    produtos[contador_produtos] = p;
    contador_produtos++;

    printf("Produto adicionado com sucesso!\n");
}

// Função para exibir todos os produtos cadastrados
void exibir_produtos() {
    if (contador_produtos == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    
    printf("Lista de Produtos Cadastrados:\n");
    for (int i = 0; i < contador_produtos; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Número: %d\n", produtos[i].numero);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: %.2f\n", produtos[i].preco);
        printf("---------------------------\n");
    }
}

// Função para atualizar um produto existente
void atualizar_produto() {
    int numero, encontrado = -1;
    
    printf("Digite o número do produto que deseja atualizar: ");
    scanf("%d", &numero);
    
    // Procurar o produto pelo número
    for (int i = 0; i < contador_produtos; i++) {
        if (produtos[i].numero == numero) {
            encontrado = i;
            break;
        }
    }
    
    if (encontrado != -1) {
        printf("Produto encontrado!\n");
        
        printf("Digite o novo nome do produto: ");
        scanf(" %[^\n]s", produtos[encontrado].nome);
        
        printf("Digite a nova quantidade do produto: ");
        scanf("%d", &produtos[encontrado].quantidade);
        
        printf("Digite o novo preço do produto: ");
        scanf("%f", &produtos[encontrado].preco);
        
        printf("Produto atualizado com sucesso!\n");
    } else {
        printf("Produto com número %d não encontrado.\n", numero);
    }
}

// Função para excluir um produto
void excluir_produto() {
    int numero, encontrado = -1;
    
    printf("Digite o número do produto que deseja excluir: ");
    scanf("%d", &numero);
    
    // Procurar o produto pelo número
    for (int i = 0; i < contador_produtos; i++) {
        if (produtos[i].numero == numero) {
            encontrado = i;
            break;
        }
    }
    
    if (encontrado != -1) {
        // Deslocar todos os produtos após o excluído para preencher o espaço
        for (int i = encontrado; i < contador_produtos - 1; i++) {
            produtos[i] = produtos[i + 1];
        }
        contador_produtos--;  // Reduz o contador de produtos
        printf("Produto excluído com sucesso!\n");
    } else {
        printf("Produto com número %d não encontrado.\n", numero);
    }
}

// Função para salvar os produtos em um arquivo de texto
void salvar_produtos() {
    FILE *arquivo = fopen("produtos.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < contador_produtos; i++) {
        fprintf(arquivo, "%d %s %d %.2f\n", 
                produtos[i].numero, 
                produtos[i].nome, 
                produtos[i].quantidade, 
                produtos[i].preco);
    }

    fclose(arquivo);
    printf("Produtos salvos com sucesso no arquivo.\n");
}

// Função para carregar os produtos de um arquivo de texto
void carregar_produtos() {
    FILE *arquivo = fopen("produtos.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    contador_produtos = 0;
    while (fscanf(arquivo, "%d %s %d %f", 
                  &produtos[contador_produtos].numero, 
                  produtos[contador_produtos].nome, 
                  &produtos[contador_produtos].quantidade, 
                  &produtos[contador_produtos].preco) != EOF) {
        contador_produtos++;
    }

    fclose(arquivo);
    printf("Produtos carregados com sucesso do arquivo.\n");
}

// Função para exibir o menu do sistema
void menu() {
    int opcao;
    do {
        printf("\n==== Sistema CRUD de Cadastro de Produtos ====\n");
        printf("1. Adicionar Produto\n");
        printf("2. Exibir Produtos\n");
        printf("3. Atualizar Produto\n");
        printf("4. Excluir Produto\n");
        printf("5. Salvar Produtos em Arquivo\n");
        printf("6. Carregar Produtos de Arquivo\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                adicionar_produto();
                break;
            case 2:
                exibir_produtos();
                break;
            case 3:
                atualizar_produto();
                break;
            case 4:
                excluir_produto();
                break;
            case 5:
                salvar_produtos();
                break;
            case 6:
                carregar_produtos();
                break;
            case 7:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }
    } while (opcao != 7);
}

int main() {
    // Carregar os produtos do arquivo ao iniciar o sistema
    carregar_produtos();
    
    // Iniciar o sistema
    menu();
    
    return 0;
}
