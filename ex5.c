#define MAX_NOME 50

// Função que verifica se 'busca' está contido em 'nome'
int quantidade(char nome[], char busca[]) {
    int i = 0, j;
    while (nome[i] != '\0') {
        j = 0;
        while (busca[j] != '\0' && nome[i + j] == busca[j]) {
            j++;
        }
        if (busca[j] == '\0') {
            return 1; 
        }
        i++;
    }
    return 0; 
}


void remover_barran(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    char alunos[MAX_ALUNOS][MAX_NOME];
    int total = 0;
    char opcao;
    char busca[MAX_NOME];
    int i, encontrado = 0;

  
    do {
        if (total >= MAX_ALUNOS) {
            printf("\nA lista de alunos já está cheia!\n");
            break;
        }

        printf("Digite o nome do aluno %d: ", total + 1);
        fgets(alunos[total], MAX_NOME, stdin);
        remover_barran(alunos[total]);

        total++;

        if (total < MAX_ALUNOS) {
            printf("Deseja inserir mais um nome? (s/n): ");
            scanf(" %c", &opcao);
            getchar();
        } else {
            break;
        }
    } while (opcao == 's' || opcao == 'S');

    // Busca
    printf("\nDigite o nome (ou parte dele) que deseja procurar: ");
    fgets(busca, MAX_NOME, stdin);
    remover_barran(busca);

    printf("\nResultado da busca:\n");
    for (i = 0; i < total; i++) {
        if (contem(alunos[i], busca)) {
            printf("Indice %d: %s\n", i, alunos[i]);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nenhum aluno encontrado com \"%s\".\n", busca);
    }

    return 0;
}
