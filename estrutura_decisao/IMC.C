#include <stdio.h>

int main()
{

  float peso = 0;
  float altura = 0;
  float IMC = 0;

  printf("qual e o seu peso ?");
  scanf("%f", &peso);

  printf("qual e sua altura ?");
  scanf("%f", &altura);

  float IMC = peso / (altura * altura);
  
    if (IMC >= 17.7 && IMC <= 25.8)
      {
  printf("peso normal");
      }

   else if (IMC >= 25.8 && IMC <= 30.2)
      }
  printf("sobrepeso");
     {


   else if (IMC >= 30.2)
    {
  printf("obesidade");
}

  return 0;
}