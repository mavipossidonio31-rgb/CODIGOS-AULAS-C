#include <stdio.h>
#include <locale.h>

void ola () {
    printf("Seja bem-vindo a Calculadora!\n");
}

void Calcular (int opcao, float n1, float n2) {
    float resultado = 0;

    switch (opcao) {
        case 1:
            resultado = n1 + n2;
            printf("A soma é: %.2f\n", resultado);
            break;
        case 2:
            resultado = n1 - n2;
            printf("A subtração é: %.2f\n", resultado);
            break;
        case 3:
            resultado = n1 * n2;
            printf("A multiplicação é: %.2f\n", resultado);
            break;
        case 4:
            
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("A divisão é: %.2f\n", resultado);
            } else {
                printf("Erro: Não é possível dividir por zero!\n");
            }
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main () {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    ola();

    int identificador = 0;
    float n1 = 0;
    float n2 = 0;

    
    printf("\nEscolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da opção: ");
    scanf("%d", &identificador);

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    
    Calcular(identificador, n1, n2);

    return 0;
}