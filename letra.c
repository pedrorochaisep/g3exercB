#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main() {
    int n;
    printf("Insira um valor inteiro positivo (<50): ");
    scanf("%d", &n);

    if (n <= 0 || n >= 50) {
        printf("Valor inválido.\n");
        return EXIT_FAILURE;
    }

    char* vetor = n_letras(n);
    printf("Caracteres inseridos: %s\n", vetor);

    char* novo_vetor = repete_letras(vetor, 3);
    printf("Caracteres repetidos: %s\n", novo_vetor);

    free(vetor); 
    free(novo_vetor);

    return EXIT_SUCCESS;
}
