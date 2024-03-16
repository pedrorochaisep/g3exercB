#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* n_letras(int n) {
    char* vetor = (char*)malloc((n + 1) * sizeof(char)); 
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }

    printf("Insira %d letras:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &vetor[i]); 
    }
    vetor[n] = '\0'; 

    return vetor;
}

char* repete_letras(char *vec, int nrep) {
    int len = strlen(vec);
    char *novo_vec = (char*)malloc((len * nrep + 1) * sizeof(char)); 
    if (novo_vec == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < nrep; j++) {
            novo_vec[i * nrep + j] = vec[i];
        }
    }
    novo_vec[len * nrep] = '\0'; 

    return novo_vec;
}
