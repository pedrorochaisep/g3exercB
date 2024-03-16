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

char* recebe_texto() {
    int capacity = 10;
    int size = 0; 
    char *texto = (char*)malloc(capacity * sizeof(char)); 

    if (texto == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(EXIT_FAILURE);
    }

    printf("Insira o texto (terminar com ##):\n");

    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        if (size >= capacity) {
            capacity *= 2; 
            texto = (char*)realloc(texto, capacity * sizeof(char)); 
            if (texto == NULL) {
                printf("Erro ao realocar memória.\n");
                exit(EXIT_FAILURE);
            }
        }
        if (c == '#' && size > 0 && texto[size - 1] == '#') {
            break; 
        }
        texto[size++] = c;
    }
    texto[size] = '\0'; 

    texto = (char*)realloc(texto, (size + 1) * sizeof(char));

    return texto;
}