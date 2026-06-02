#include <stdio.h>

int main() {
    int inicio = 0;
    int fim = 0;
    int i = 0;

    printf("Digite o numero inicial: ");
    scanf("%d", &inicio);

    printf("Digite o numero final: ");
    scanf("%d", &fim);

    printf("\nAnalise dos numeros:\n");

    // O laço conta do início até o fim
    for (i = inicio; i <= fim; i++) {
        
        // Se o resto da divisão por 2 for 0, é par
        if (i % 2 == 0) {
            printf("%d é PAR\n", i);
        } 
        // Senão (se o resto não for 0), só pode ser ímpar
        else {
            printf("%d é ÍMPAR\n", i);
        }
        
    }

    return 0;
}