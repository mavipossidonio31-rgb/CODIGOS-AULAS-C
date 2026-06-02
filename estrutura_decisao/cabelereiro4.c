#include <stdio.h>

int main(){

    float valorunha = 0;
    float valorpintar = 0;
    float valorcilios = 0;
    float valorcortarcabelo = 0;
    float valorhidratacao = 0;
    float valorbabyliss = 0;

    int opcao;

    printf("Vai fazer unha? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor da unha? ");
        scanf("%f", &valorunha);
    }

    printf("Vai pintar o cabelo? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor para pintar? ");
        scanf("%f", &valorpintar);
    }

    printf("Vai colocar cilios? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor dos cilios? ");
        scanf("%f", &valorcilios);
    }

    printf("Vai cortar o cabelo? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor do corte de cabelo? ");
        scanf("%f", &valorcortarcabelo);
    }

    printf("Vai fazer hidratacao? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor da hidratacao? ");
        scanf("%f", &valorhidratacao);
    }

    printf("Vai fazer babyliss? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor do babyliss? ");
        scanf("%f", &valorbabyliss);
    }

    float total = valorunha + valorpintar + valorcilios + valorcortarcabelo + valorhidratacao + valorbabyliss;

    if (total < 500){
        printf("O valor ficou bom: R$ %.2f\n", total);
    }
    else if (total >= 500 && total <= 1000){
        printf("O valor ficou razoavel: R$ %.2f\n", total);
    }
    else{
        printf("O valor ficou caro: R$ %.2f\n", total);
    }

    return 0;
}