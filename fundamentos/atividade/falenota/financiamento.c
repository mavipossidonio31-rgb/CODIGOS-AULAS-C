#include <stdio.h>
#include <locale.h>

#define juros_veiculo 0,015 // 1.5% ao mes
#define juros_imovel 0,005  // 0.5% ao mes

int main()
{

    // 1 variaveis
    char Nome[50];

    int tipo_categoria = 0;
    int tipo_especifico = 0;
    int meses = 0;
    int prazo_minimo = 0;
    int prazo_maximo = 0;
    float valor_bem = 0;
    float renda_mensal = 0;
    float taxa_juros = 0;
    float total_juros = 0;
    float valor_total = 0.0;
    float parcela = 0;
    float limite_parcela = 0;

    printf("Digite seu Nome  ");
    scanf("%s", Nome);

    printf("n===olá seja Bem-Vindo a empresa de finaciamemto Finantech ===\n");
    scanf("bem-vindo(a), %s!\n", Nome);

    printf("\nQual o valor da sua renda mensal:");
    scanf("%f", &renda_mensal);

    printf("\nEscolha o tipo_categoria que vc deseja:\n");
    printf("[1] veiculo \n");
    printf("[2] imovel \n");
    printf("opcao:");
    scanf("%d", &tipo_categoria);
// 2 
    if (tipo_categoria == 1)
    {
        taxa_juros = juros_veiculo;
        printf("\nescolha o tipo de veiculo: \n");
        printf("[1] caminhao \n");
        printf("[2] carros \n");
        printf("[3] motos \n");
        printf("opcao:");
        scanf("%d", tipo_especifico);

        if (tipo_especifico == 1)
        {
            prazo_minimo = 100;
            prazo_maximo = 200;
            printf("o valor do caminhao:R$");
            scanf("%f", &valor_bem);
        }
        else if (tipo_especifico == 2)
        {
            prazo_minimo = 6;
            prazo_maximo = 48;
            printf("o valor do carro:R$");
            scanf("%f", &valor_bem);
        }
        else if (tipo_especifico == 3)
        {
            prazo_minimo = 3 ;
            prazo_maximo = 24 ;
            printf("o valor da moto:R$");
            scanf("%f", &valor_bem);
        }
    }
    //3
    else if (tipo_categoria == 2)
    {
        taxa_juros = juros_imovel;
        printf("\nescolha o tipo de imovel: \n");
        printf("[1] casa\n");
        printf("[2] apartamento\n");
        printf("opcao:");
        scanf("%d", tipo_especifico);

        if (tipo_especifico == 1)
        {

            prazo_minimo = 150;
            prazo_maximo = 360;
            printf("o valor da casa :R$");
            scanf("%f", &valor_bem);
        }
        if (tipo_especifico == 2)
        {

            prazo_minimo = 100;
            prazo_maximo = 300;
            printf("o valor do apartamento:R$");
            scanf("%f", &valor_bem);
        }
    }

    // 4

    {
        printf("\ndigite a quantidade de parcelas (%d ate d% meses):", prazo_minimo, prazo_maximo);
        scanf("%d, &meses");

        if (meses < prazo_minimo || meses > prazo_maximo)
        {

            printf("prazo invalido para tipo \n");
        }
         (meses < prazo_minimo || meses > prazo_maximo)
            ;

        total_juros = meses * (taxa_juros * 100);

        valor_total = valor_bem * valor_bem * (taxa_juros / 100);

        valor_total = valor_bem + total_juros;

        parcela = valor_total / meses;

        limite_parcela = renda_mensal * 0.30;

        // 5
        parcela = (valor_bem / meses) + (valor_bem * taxa_juros);

        limite_parcela = renda_mensal * 0.30;

        // 6
        ("\n=== resultado da analise ===\n");
        printf("valor da parcela calculado: R$ %.2f\n", parcela);
        printf("seu limite maximo  permitido por parcela: R$ %.2f\n", limite_parcela);

        if (parcela <= limite_parcela)
        {
            printf("\nparaben financiamento aprovado.\n");
            printf("vc pagara %d parcelas mensais de R$ %.2f\n", meses, parcela);
        }
        else
        {
            printf("\nFinaciamento Reprovado.\n");
            printf("Motivo da parcela utrapasou  ");
        }

        printf("\nTenha uma ótima tarde.");
  printf("\n Desenvolvido por MARIA VITORIA");


        return 0;
    }
}


