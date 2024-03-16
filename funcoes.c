#include <stdio.h>
#include <stdlib.h>

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