#include <stdio.h>

int main() {
    int numero = 0;
    int i;
    int res;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%i", &numero);

        if (numero != 0) {
            printf("\nTabuada do %i:\n", numero);

            i = 0;
            while (i <= 10) {
                res = i * numero;
                printf("%i x %i = %i\n", numero, i, res);
                i++;
            }
            printf("\n");
        }

    } while (numero != 0);

    printf("Fim\n");

    return 0;
}