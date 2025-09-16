#include <stdio.h>


void cifraCesar(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];

        
        if (c >= 'A' && c <= 'Z') {
            c = c + 3;
            if (c > 'Z') {
                c = c - 26; 
            }
        }
        // Se for minúscula
        else if (c >= 'a' && c <= 'z') {
            c = c + 3;
            if (c > 'z') {
                c = c - 26; 
        }

        str[i] = c; 
        i++;
    }
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    fgets(palavra, 99, stdin);

    cifraCesar(palavra); 

    printf("String codificada: %s\n", palavra);

    return 0;
}
