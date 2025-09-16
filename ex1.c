#include <stdio.h>

int main() {
    char nome[50];
    char sexo[10];
    int idade;

    printf("Digite o nome: ");
    scanf("%49s", nome);

    printf("Digite o sexo (masculino/feminino): ");
    scanf("%9s", sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if ((sexo[0] == 'f' || sexo[0] == 'F') && idade < 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("%s NAO ACEITA\n", nome);
    }

    return 0;
}
