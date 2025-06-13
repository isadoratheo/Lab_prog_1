#include <stdio.h>

// Definindo uma struct para o Warframe
typedef struct {
    char nome[30];
    char tipo[30];
    char habilidade[50];
} Warframe;

int main() {
    // Criando os Warframes atualizados
    Warframe lista[3] = {
        {"Mirage Prime", "Ofensiva/Enganosa", "Clones ilusórios e dano em área"},
        {"Ivara Prime", "Furtiva/Exploradora", "Arco silencioso e modo invisível"},
        {"Mag", "Magnética", "Manipulação de metal e escudos inimigos"}
    };

    Warframe *ptr = lista; // ponteiro para o primeiro Warframe

    int escolha;

    printf("=== Escolha seu Warframe ===\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, (ptr + i)->nome); // acessando via ponteiro
    }

    printf("Digite o número do Warframe que você quer: ");
    scanf("%d", &escolha);

    if (escolha >= 1 && escolha <= 3) {
        Warframe *selecionado = ptr + (escolha - 1); //ponteiro escolhido

        printf("\nVocê escolheu: %s\n", selecionado->nome);
        printf("Tipo: %s\n", selecionado->tipo);
        printf("Habilidade Especial: %s\n", selecionado->habilidade);
    } else {
        printf("Escolha inválida!\n");
    }

    return 0;
}
