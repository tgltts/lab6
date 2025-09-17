#include <stdio.h>
#include <stdbool.h>

bool comparar (char str1[],char str2[]){
    int i = 0;
    
    while (str1[i] != '\0' && str2[i] != '\0'){
        if(str1[i] != str2[i]){
            return false;
        }
        i++;
    }
    if(str1[i] == '\0' && str2[i] == '\0'){
        return true;
    }
    

}

int main() {
    char str1[50], str2[50];

    printf("Digite a primeira string: ");
    scanf("%49s", str1);

    printf("Digite a segunda string: ");
    scanf("%49s", str2);

    if (comparar(str1, str2)) {
        printf("As strings sao iguais.\n");
    } else {
        printf("As strings sao diferentes.\n");
    }

    return 0;
}
