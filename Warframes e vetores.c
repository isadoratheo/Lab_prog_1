#include <stdio.h>
#include <string.h>

#define TAM 5
#define MAX_NOME 30

int main() {
    char armas[TAM][MAX_NOME];

    printf("Cadastro de armas favoritas no Warframe:\n");

    for (int i = 0; i < TAM; i++) {
        printf("Digite o nome da arma %d: ", i + 1);
        fgets(armas[i], MAX_NOME, stdin);//Entrada
        
        
        armas[i][strcspn(armas[i], "\n")] = '\0';
    }
    
    
    printf("\nSuas armas favoritas são:\n");
    for (int i = 0; i < TAM; i++) {
        printf("- %s\n", armas[i]);//Saída
    }

    return 0;
}
