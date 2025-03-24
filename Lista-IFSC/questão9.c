#include <stdio.h>
#include <string.h>  // Para strcspn(), strcpy(), strcat()

int main() {
    char nome[50], sobrenome[50], nome_completo[100];

    // a) Ler o nome (Composto ou não)
    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove a quebra de linha (\n)

    // b) Ler o sobrenome (Composto ou não)
    printf("Digite seu sobrenome: ");
    fgets(sobrenome, 50, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';

    // c) Concatenar nome e sobrenome
    strcpy(nome_completo, nome);      // Copia o nome para nome_completo
    strcat(nome_completo, " ");       // Adiciona um espaço
    strcat(nome_completo, sobrenome); // Adiciona o sobrenome

    // d) Apresentar o nome completo
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}
