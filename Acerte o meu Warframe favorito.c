#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Converte uma string para minúsculas
void paraMinusculo(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char respostaCorreta[] = "Mirage Prime";
    char tentativa[50];

    printf("Acerte o meu Warframe favorito:\n");
    fgets(tentativa, sizeof(tentativa), stdin);

    tentativa[strcspn(tentativa, "\n")] = 0;

    // Converter ambas as strings para minúsculas antes de comparar
    paraMinusculo(tentativa);

    char respostaCorretaMinuscula[50];
    strcpy(respostaCorretaMinuscula, respostaCorreta);
    paraMinusculo(respostaCorretaMinuscula);

    if (strcmp(tentativa, respostaCorretaMinuscula) == 0) {
        printf("UHULLLLL! Você acertou!\n");
    } else {
        printf("OH NO, vc me conhece tão mal assim? O meu Warframe favorito é %s.\n", respostaCorreta);
    }

    return 0;
}
