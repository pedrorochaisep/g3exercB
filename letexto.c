#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

int main() {
    char *texto = recebe_texto();

    printf("Texto inserido: %s\n", texto);
    printf("Dimensão do texto: %zu caracteres\n", strlen(texto));
    
    int espacos = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == ' ') {
            espacos++;
        }
    }
    printf("Número de espaços no texto: %d\n", espacos);

    free(texto); // Libera a memória alocada para o texto

    return EXIT_SUCCESS;
}
