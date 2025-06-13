#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[100];  // Vetor de caracteres (String)
    int i = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    // Laço while
    while (palavra[i] != '\0') { 
        char letra = tolower(palavra[i]);  // tolower ou to lower seria tipo to lower case, ou seja minusculo

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("A letra '%c' é uma vogal.\n", palavra[i]);
        } else {
            printf("A letra '%c' é uma consoante.\n", palavra[i]);
        }
        
        i++; 
    }

    return 0;
}
