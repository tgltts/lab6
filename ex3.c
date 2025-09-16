#include <stdio.h>
#include <stdbool.h>

bool ehPalindromo(char str[]) {
    int i, j;

   
    for (j = 0; str[j] != '\0'; j++);

    j--; 

  
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }

    return true;
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
