#include <stdio.h>
#include <stdbool.h>

bool comparaStrings(char s1[], char s2[]) {
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return false; //diferente
        }
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return true; // igual
    }
    return false; // diferente
}

int main() {
    char str1[50], str2[50];

    printf("Digite a primeira string: ");
    scanf("%49s", str1);

    printf("Digite a segunda string: ");
    scanf("%49s", str2);

    if (comparaStrings(str1, str2)) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
