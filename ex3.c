#include <stdio.h>
#include <stdbool.h>

bool ehPalindromo(char str[]) {
    int i = 0, j = 0;

    while (str[j] != '\0') {
        j++;
    }
    j--;

    // Compara do início e do fim
    while (i < j) {
        if (str[i] != str[j]) {
            return false; // Não é palíndromo
        }
        i++;
        j--;
    }
    return true; // É palíndromo
}

int main() {
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%49s", palavra);

    if (ehPalindromo(palavra)) {
        printf("%s e um palindromo.\n", palavra);
    } else {
        printf("%s NAO e um palindromo.\n", palavra);
    }

    return 0;
}
