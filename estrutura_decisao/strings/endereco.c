#include <stdio.h>

int main(){

 setlocale (LC_ALL,"pt_BR.UTF-8");

 char nome[14]= "maria vitoria";
 char logradouro [18]="rua dos cristais";
 char bairro[13]= "mario dedine";
 char cidade[12]= "piracicaba";
 char uf[3]="SP";

 printf ("---minhas informacoes residencias---");
 printf("\nlogradouro: %s" , logradouro);
 printf("\nbairro: %s ",  bairro  );
 printf("\ncidade: %s", cidade);
 printf("\nuf: %s", uf);

return 0;
}