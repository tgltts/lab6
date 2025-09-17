#include <stdio.h>

void conferir(char sexo[], int idade, char nome[]) {
    if ((sexo[0] == 'f' || sexo[0] == 'F') && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("%s NAO ACEITA\n", nome);
    }
}


int main(){
    char nome[20];
    char sexo[20];
    int idade;
    printf("Digite o nome: ");
    scanf("%19s", nome);
    
    printf("Qual o sexo: ");
    scanf("%19s", sexo);
    
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    conferir(sexo,idade,nome);
    
    return 0;
}
