#include <stdio.h>
#include <locale.h>

void boasVindas() {
    printf("--- ORCAMENTO DE COMPUTADOR ---\n\n");
}

void calcularOrcamento(int opcao, int parcelas) {

    float placaVideo = 139.90;
    float caixaSom = 99.90;
    float kit = 149.90;
    float monitor = 679.90;

    float total = placaVideo + caixaSom + kit + monitor;

    int pessoas = 6;

    float desconto;
    float valorFinal;
    float valorParcela;
    float valorPorPessoa;

    printf("\nPECAS ESCOLHIDAS:\n");
    printf("Placa de video: R$ %.2f\n", placaVideo);
    printf("Caixa de som: R$ %.2f\n", caixaSom);
    printf("Kit mouse e teclado: R$ %.2f\n", kit);
    printf("Monitor 21 polegadas: R$ %.2f\n", monitor);

    printf("\nValor total das pecas: R$ %.2f\n", total);

    if (opcao == 1) {

        desconto = total * 0.15;
        valorFinal = total - desconto;
        valorPorPessoa = valorFinal / pessoas;

        printf("\nPAGAMENTO A VISTA\n");
        printf("Desconto de 15%%: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", valorFinal);
        printf("Valor por pessoa (6 pessoas): R$ %.2f\n", valorPorPessoa);
    }


    else if (opcao == 2) {

        if (parcelas >= 1 && parcelas <= 12) {

            valorFinal = total;
            valorParcela = valorFinal / parcelas;
            valorPorPessoa = valorFinal / pessoas;

            printf("\nPAGAMENTO PARCELADO\n");
            printf("Valor final: R$ %.2f\n", valorFinal);
            printf("%d parcelas de R$ %.2f\n", parcelas, valorParcela);
            printf("Valor por pessoa (6 pessoas): R$ %.2f\n", valorPorPessoa);
        }
        else {
            printf("Numero de parcelas invalido!\n");
        }
    }

    else {
        printf("Opcao invalida!\n");
    }
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    int parcelas = 0;

    boasVindas();

    printf("Escolha a forma de pagamento:\n");
    printf("1 - A vista (15%% desconto)\n");
    printf("2 - Parcelado em ate 12x sem juros\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 2) {
        printf("Digite o numero de parcelas: ");
        scanf("%d", &parcelas);
    }

    calcularOrcamento(opcao, parcelas);

    return 0;
}