#include <stdio.h>

int main(){
    //declaração do imc
    //entrada
    float peso= 0;
    float altura = 0;

    printf("qual e o seu peso p?");
    scanf("%f", &peso);

    printf("qual e sua altura a?");
     scanf("%f", &altura);

     //processamento
    int imc= peso / (altura*altura);



    //saida
    printf("o imc e %d" , imc);

    return 0;
}