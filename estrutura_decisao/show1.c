#include <stdio.h>
#include <stdbool.h>
  
int main (){
    bool comprouingressoantes =true;
    bool comprouingressonahora = false;

    printf("comprou o ingresso antes ? 0->nao, 1->sim");
    scanf("%i, comprouingressoantes");

    printf("comprou  o ingresso na hora? 0->nao, 1->sim");
    scanf("%i,comprouingressonahora");


    if (comprouingressoantes || comprouingressonahora == true){
        printf("vai assistir o show!!!");
    }else{
        printf("nao vai assistir o show");

    }
    return0;
}