#include <stdio.h>
#include <string.h>

// Definindo uma struct para o livro
struct Livro {
    char titulo[100];
    char autor[100];
    char editora[100];
    int anoPublicacao;
    int qtdPaginas;
};

int main() {
    // Declarando um vetor de livros
    struct Livro livros[100];
    int quantidade;
    int i;

    // Pergunta quantos livros o usuário quer cadastrar
    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar(); // limpar buffer do teclado

    // Cadastro dos livros
    for (i = 0; i < quantidade; i++) {
        printf("\nCadastro do Livro %d\n", i + 1);

        printf("Titulo: ");
        fgets(livros[i].titulo, 100, stdin);
        livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0'; // remover \n

        printf("Autor: ");
        fgets(livros[i].autor, 100, stdin);
        livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';

        printf("Editora: ");
        fgets(livros[i].editora, 100, stdin);
        livros[i].editora[strcspn(livros[i].editora, "\n")] = '\0';

        printf("Ano de Publicacao: ");
        scanf("%d", &livros[i].anoPublicacao);

        printf("Quantidade de Paginas: ");
        scanf("%d", &livros[i].qtdPaginas);
        getchar(); // limpar buffer
    }

    // Mostrando os livros cadastrados
    printf("\n=== Lista de Livros Cadastrados ===\n");
    for (i = 0; i < quantidade; i++) {
        printf("\nLivro %d\n", i + 1);
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Editora: %s\n", livros[i].editora);
        printf("Ano de Publicacao: %d\n", livros[i].anoPublicacao);
        printf("Quantidade de Paginas: %d\n", livros[i].qtdPaginas);
    }

    return 0;
}
