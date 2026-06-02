#include <stdio.h>

int main()
{
    float notas[4];
    float soma = 0, media;

    // Entrada de dados
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 4;

    // Saída
    printf("\nMedia: %.2f\n", media);

    return 0;
}