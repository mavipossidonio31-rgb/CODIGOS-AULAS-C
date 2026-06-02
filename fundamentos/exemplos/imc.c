#include <stdio.h>

int main(){
    //declaração do imc
    //entrada
    float peso= 70;
    float altura = 1.70;

    //processamento
    int imc= peso / (altura*altura);

    //saida
    printf("o imc e %d" , imc);

    return 0;
}