    /*
    você precisa comprar um carro e
    pretender realizar o pagamento  de 
    forma parcelada.
    crie um algoritmo que calcule o valor 
    das parcelas descontando a o valor 
    da entrada de 30%.
    */
   #include  <stdio.h>

   int main() {
       //entrada 
       float valorCarro = 0;
       int qtdeParcelas = 0;
       const float entrada30 = 0.30;

       printf("Qual valor do carro");
       scanf("%f" , &valorCarro);

       printf("Quantas parcelas deseja pagar");

       //processamneto
       float valorEntrada = valorCarro * entrada30;
       float valorPagar = valorCarro - entrada30;
       float valorParcela = ValorPagar/qtdeParcelas;

      //saída 
      printf("valor carro R$ %.2f\n" , valorCarro);
      printf("valor da entrada R$ %.2f \n," valorEntrada);
      printf("valor a pagar R$ %.2f \n",valorPagar);
      printf("%i parcelas de R$ %.2f\n" ,qtdeParcelas, valorParcela);



       return 0;
}




