#include <stdio.h>
#include <locale.h>

void boasVindas() {
    printf("--- COMPARADOR DE PLANOS DE ACADEMIA ---\n\n");
}

void mostrarAcademias() {

    printf("ACADEMIAS DA CIDADE:\n\n");

    printf("1 - Vida Saude\n");
    printf("Mensalidade: R$ 49.99\n");
    printf("Plano anual: 12x R$ 39.99\n");
    printf("Uso: 3 vezes por semana\n\n");

    printf("2 - Saude em Dia\n");
    printf("Mensalidade: R$ 59.99\n");
    printf("Plano anual: 12x R$ 48.99\n");
    printf("Uso: 4 vezes por semana\n\n");

    printf("3 - Fitness Pro\n");
    printf("Mensalidade: R$ 69.99\n");
    printf("Plano anual: 12x R$ 58.99\n");
    printf("Uso: Quantos dias quiser\n\n");
}

void gerarOrcamento(int academia, int meses) {

    float mensal = 0;
    float anual = 0;
    float total = 0;

    if (academia == 1) {
        mensal = 49.99;
        anual = 39.99 * 12;

        if (meses == 12) {
            total = anual;
            printf("\nAcademia escolhida: Vida Saude\n");
        } else {
            total = mensal * meses;
            printf("\nAcademia escolhida: Vida Saude\n");
        }
    }
    else if (academia == 2) {
        mensal = 59.99;
        anual = 48.99 * 12;

        if (meses == 12) {
            total = anual;
            printf("\nAcademia escolhida: Saude em Dia\n");
        } else {
            total = mensal * meses;
            printf("\nAcademia escolhida: Saude em Dia\n");
        }
    }
    else if (academia == 3) {
        mensal = 69.99;
        anual = 58.99 * 12;

        if (meses == 12) {
            total = anual;
            printf("\nAcademia escolhida: Fitness Pro\n");
        } else {
            total = mensal * meses;
            printf("\nAcademia escolhida: Fitness Pro\n");
        }
    }
    else {
        printf("Opcao invalida!\n");
        return;
    }

    printf("Tempo de contrato: %d meses\n", meses);
    printf("Valor do orcamento: R$ %.2f\n", total);
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int academia;
    int meses;

    boasVindas();
    mostrarAcademias();

    printf("Escolha a academia (1, 2 ou 3): ");
    scanf("%d", &academia);

    printf("Quantos meses deseja treinar? ");
    scanf("%d", &meses);

    gerarOrcamento(academia, meses);

    return 0;
}