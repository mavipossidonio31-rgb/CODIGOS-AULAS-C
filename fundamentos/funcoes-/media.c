#include <stdio.h>
#include <locale.h>

void ola () {
    printf("seja bem vindo!");
}

void  CalcularMedia (float n1, float n2 ) {
    float media = (n1+n2)/2;
    printf("a media e :%.2f",media);
}


int main () {
   setlocale(LC_ALL, "pt_BR.UTF-8");

   ola ();

   float n1 =0;
   float n2 =0;

   printf("\nQual a primeira nota");
   scanf("%f" , &n1);

   printf("\nqual a segunda nota");
   scanf("%f" , &n2);

   CalcularMedia (n1, n2);

   return 0;
}
