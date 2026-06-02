#include <stdio.h>

int main(){

    float valorlancherodeio = 0;
    float valorbatatagrande = 0;
    float valorrefricoca = 0;
    float valorsobremesa = 0;

    printf("qual o valor do lanche?");
    scanf ("%f", &valorlancherodeio);

    printf("qual o valor da batata ?");
    scanf("%f" , &valorbatatagrande);

    printf("qual o valor do refri?");
     scanf("%f" , & valorrefricoca );

     printf("qual o valor da sobremesa?")
     scanf("%f",&valorsobremesa );

     float total = valorlancherodeio+valorbatatagrande+valorrefricoca+valorsobremesa;

     if (total < 1000){
        printf("o valor ficou bom R$ %.2f", total);
     }else if (total >= 500 && total <= 1000){
        printf("o valor ficou razoalvel R$ %.2f", total);
     }else if (total > 1100){
         printf("o valor ficou caro R$ %.2f", total);
     }
    return 0;
}