/*
você está trabalhando e gostaria de
gurdar25% do seu salário todo mês.
o banco está com um investimento que 
rende 6.8% ao mês de juros e você 
vai usar esse formato de investimento.
crie um algoritimo para calcular seus 
investimento.
/*
 #include  <stdio.h>

   int main() {

   //Entrada
   float Salário = 0;
   int tempo=0 ;
   const float guarda25 = 0,25;
   const float juros = 0.068;

printf("quanto e seu salrio? ");
scanf("%i", &salario);

printf("por quanto tempo vc quer guardar seu salario");
scanf("%i" , &tempo);

   //Processamento
   float totalJurosPercentual= tempo * juros;// total de juros
   float salari25 = salario * guardar25;// 25% do salario
   float tatolDinheiro= tempo * salari25;//montante guardado
   float totaljurosValor = totalDinheiro*totalJurosPercentual;
   float totalComJuros = totalJurosValor + totalDinheiro;//valor total;


   //Saída
   printf("total juros em %.2f\n" , totalJurosPercentual);
   printf("valor gurdado sem juros R$ %.2f\n" ,totalDinheiro);
   printf("meses %i \n" , tempo);
   printf("valor do juros do banco R$ %.2f\n" ,totalJurosValor);
   printf("valor guardado com juros R$ %.2f" ,totalComJuros);
