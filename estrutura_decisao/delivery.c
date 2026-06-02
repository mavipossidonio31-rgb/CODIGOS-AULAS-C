#include <stdio.h>

//funca para retornar o valor pr km
float calcularvalorkm(int qtdekmpercorridos){
    if(qtdekmpercorridos <= 100){
        return qtdekmpercorridos * 0.20;
    }
    if (qtdeKmpercorridos > 100 && qtdekmpercorridos <= 200)
    {
        return qtdeKmpercorridos * 0.80;
    }
    if (qtdeKmpercorridos > 300)
    {
        return qtdeKmpercorridos * 1.05;
    }
   
}

float calcularvalorentrega(int qtdeentregas){
    if (qtdeentregas <=10)
    {
        return 7.99;
    }
    if (qtdeentregas > 10 && qtdeentregas <=20)
    {
        return 16.99;
    }
    if (qtdeentregas > 20 && qtdeentregas <= 30)
    {
        return 28.99;
    }
    if (qtdeentregas > 30)
    {
        return 41.99;
    }
   
}

int main (){
    //variaveis 
    int trabalhousegunda = 0;
    int qtdeentregassegunda=0;
    int kmsegunada=0;
    float totalentregassegunda=0;
    float totalkmsegunda=0;

    int trabalhouterca=0;
    int qtdeentregasterca=0;
     int kmterca=0;
     float totalentregasterca=0;
    float totalkmterca=0;
     


    int trabalhouquarta=0;
    int qtdeentregasquarta=0;
     int kmsquarta=0;
     float totalentregasquarta=0;
    float totalkmquarta=0;


    int trabalhouquinta = 0;
    int qtdeentregasquinta=0;
     int kmquinta=0;
     float totalentregasquinta=0;
    float totalkmquinta=0;


    int trabalhousexta=0;
    int qtdeentregassexta=0;
     int kmsexta=0;
     float totalentregassexta=0;
    float totalkmsexta=0;


    int trabalhousabado=0;
    int qtdeentregassabado=0;
     int kmsabado=0;
     float totalentregassabado=0;
    float totalkmsabado=0;


    int trabalhoudomingo=0;
    int qtdeentregasdomingo=0;
     int kmdomingo=0;
     float totalentregasdomingo=0;
    float totalkmdomingo=0;
    int totaldias=0


    printf ("sou algoritmo que ajuda o matias ,let s go\n");

   printf("trabalhou segunda ? 1(sim) 2(nao)");
   scanf("%i", &trabalhousegunda);
   if (trabalhousegunda == 1)
   {
    totaldias++;
    printf("quantas entregas fez na segunada ");
    scanf("%i",&qtdeentregassegunda);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmsegunada);
    totalentregassegunda= calcularvalorentrega(qtdeentregassegunda);
    totalkmsegunda= calcularvalorkm(kmsegunada)
   }

   printf("trabalhou terca ? 1(sim) 2(nao)");
   scanf("%i", &trabalhouterca);
   if (trabalhouterca == 1)
   {
      totaldias++;
    printf("quantas entregas fez na terca ");
    scanf("%i",&qtdeentregasterca);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmterca);
    totalentregasterca= calcularvalorentrega(qtdeentregasterca);
    totalkmterca= calcularvalorkm(kmterca)

   }

   printf("trabalhou quarta ? 1(sim) 2(nao)");
   scanf("%i", &trabalhouquarta);
   if (trabalhouquarta == 1)
   {
      totaldias++;
    printf("quantas entregas fez na quarta ");
    scanf("%i",&qtdeentregasquarta);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmquarta);
    totalentregasquarta= calcularvalorentrega(qtdeentregasquarta);
    totalkmquarta= calcularvalorkm(kmquarta)
   }

   printf("trabalhou quinta ? 1(sim) 2(nao)");
   scanf("%i", &trabalhouquinta);
   if (trabalhouquinta==1)
   {
      totaldias++;
    printf("quantas entregas fez na quinta ");
    scanf("%i",&qtdeentregasquinta);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmquinta);
    totalentregasquinta= calcularvalorentrega(qtdeentregasquinta);
    totalkmquinta= calcularvalorkm(kmquinta)
   }

   printf("trabalhou sexta ? 1(sim) 2(nao)");
   scanf("%i", &trabalhousexta);
   if (trabalhousexta==1)
   {
      totaldias++;
    printf("quantas entregas fez na sexta ");
    scanf("%i",&qtdeentregassexta);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmsexta);
     totalentregassexta= calcularvalorentrega(qtdeentregassexta);
    totalkmsexta= calcularvalorkm(kmsexta)
   }

   printf("trabalhou sabado ? 1(sim) 2(nao)");
   scanf("%i", &trabalhousabado);
   if (trabalhousabado==1)
   {
      totaldias++;
    printf("quantas entregas fez na sabado ");
    scanf("%i",&qtdeentregassabado);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmsabado);
     totalentregassabado= calcularvalorentrega(qtdeentregassabado);
    totalkmsabado= calcularvalorkm(kmsabado);
   }

   printf("trabalhou domingo ? 1(sim) 2(nao)");
   scanf("%i", &trabalhoudomingo);
   if (trabalhoudomingo==1)
   {
      totaldias++;
    printf("quantas entregas fez no  domingo ");
    scanf("%i",&qtdeentregasdomingo);

    printf("quantos kilometros percorreu?");
    scanf("%i", &kmdomingo);
     totalentregasdomingo= calcularvalorentrega(qtdeentregasdomingo);
    totalkmdomingo= calcularvalorkm(kmdomingo);
   }

   //relatorio da semana completa 

printf("\nsegunda: %s", trabalhousegunda==1? "sim": "nao");
printf("\nquantidade de entregas: %i", qtdeentregassegunda);
printf("\n km percorridos: %i;" kmsegunada);
printf("\n  valora receber : R$ %.2f" , totalentregassegunda + totalkmsegunda);

printf("\nterca: %s", trabalhouterca==1? "sim": "nao");
printf("\nquantidade de entregas: %i", qtdeentregasterca);
printf("\n km percorridos: %i;" kmterca);
printf("\n  valora receber : R$ %.2f" , totalentregasterca + totalkmterca);


printf("\nquarta: %s", trabalhouquarta==1? "sim": "nao");
printf("\nquantidade de entregas: %i", qtdeentregasquarta);
printf("\n km percorridos: %i;" kmsquarta);
printf("\n  valora receber : R$ %.2f" , totalentregasquarta + totalkmquarta);


printf("\nquinta: %s", trabalhouquinta==1? "sim": "nao"); 
printf("\nquantidade de entregas: %i", qtdeentregasquinta);
printf("\n km percorridos: %i;" kmquinta);
printf("\n  valora receber : R$ %.2f" , totalentregasquinta + totalkmquinta);


printf("\nsexta: %s", trabalhousexta==1? "sim": "nao");  
printf("\nquantidade de entregas: %i", qtdeentregassexta);
printf("\n km percorridos: %i;" kmsexta);
printf("\n  valora receber : R$ %.2f" , totalentregassexta + totalkmsexta);


printf("\nsabado: %s", trabalhousabado==1? "sim": "nao");
printf("\nquantidade de entregas: %i", qtdeentregassabado);
printf("\n km percorridos: %i;" kmsabado);
printf("\n  valora receber : R$ %.2f" , totalentregassabado + totalkmsabado);


printf("\ndomingo: %s", trabalhoudomingo==1? "sim": "nao");
printf("\nquantidade de entregas: %i", qtdeentregasdomingo);
printf("\n km percorridos: %i;" kmdomingo);
printf("\n  valora receber : R$ %.2f" , totalentregasdomingo + totalkmdomingo);

printf("\ntotal semanal");
printf("\ntotal de dias trabalhado : %i", totaldias);
int totalentregas = qtdeentregassegunda +qtdeentregasterca +qtdeentregasquarta +qtdeentregasquinta+qtdeentregassexta+qtdeentregassabado+qtdeentregasdomingo
printf("\ntotal das entregas %i" , totalentregas);
int totalkms = totalkmsegunda+totalkmterca+totalkmquarta+totalkmquinta+totalkmsexta+totalentregassabado+totalkmdomingo
printf("\ntotal de kms %i", totalkms);

printf("\nmedia entregas por dia %i", totalentregas/totaldias);

float totalgeral = totalentregassegunda + totalentregasdomingo +
totalentregassegunda+totalkmsegunda+
totalentregasterca+totalkmterca+
totalentregasquarta+totalkmterca+
totalentregasquinta+totalkmquinta+
totalentregassexta+totalkmsexta+
totalentregassabado+totalkmsabado+
totalentregasdomingo+totalkmdomingo;


printf("\nmedia valor por dia %.2f" , totalgeral);

// ganhou o bonus
int media = totalentregas/totaldias;
if(totaldias== 7 && totalkms >= 200 && media >= 26){
    printf("\nbonus de R$ 179,99");

}

return 0;

}







