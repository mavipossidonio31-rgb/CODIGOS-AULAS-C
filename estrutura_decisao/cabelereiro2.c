#include <stdio.h>

int main(){

    
    float valorunha = 0;
    float valorpintar = 0;
    float valorcilios = 0;
    float valorcortarcabelo =0;
    float valorhidratacao =0;
    float valorbabyliss =0;
    int opcao = 0; // 1 ->sim, 0->nao

      
    printf("qual o valor da unha?");
    scanf ("%f", &valorunha);

    printf("qual o valor de pintar?");
    scanf ("%f", &valorpintar);

    printf("qual o valor do cilios?");
    scanf ("%f", &valorcilios);

    printf("qual o valor do corte de cabelo?");
    scanf ("%f", &valorcortarcabelo);

    printf("qual o valor da hidratacao?");
    scanf ("%f", &valorhidratacao);

    printf("qual o valor do babyliss ?");
    scanf ("%f", &valorbabyliss);


    
    
    float total = + valorunha + valorcilios + valorcortarcabelo + valorhidratacao + valorbabyliss


         if(opcao == 1){
            printf("qual valor para o unha");
            scanf("%f", &valorunha);
         }

         if(opcao == 1){
            printf("qual valor para pintar ");
            scanf("%f", &valorpintar);
         }

         if(opcao == 1){
            printf("qual valor para o cilios");
            scanf("%f", &valorcilios);
         }

         if(opcao == 1){
            printf("qual valor para cortar o cabelo");
            scanf("%f", &valorcortarcabelo);
         }

         if(opcao == 1){
            printf("qual valor para da hidratacao");
            scanf("%f", &valorhidratacao );
         }

         if(opcao == 1){
            printf("qual valor para o babyliss");
            scanf("%f", &valorbabyliss );
         }

         float total = + valorunha + valorcilios + valorcortarcabelo + valorhidratacao + valorbabyliss


     if (total < 1000){
        printf("o valor ficou bom R$ %.2f", total)
     }
      (total >= 500 && total <= 1000)}
        printf("o valor ficou razoalvel R$ %.2f", total);
     } else if (total > 1100){
         printf("o valor ficou caro R$ %.2f", total);


         
     }
     
    return 0;

}
