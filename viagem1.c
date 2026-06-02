#include <stdio.h>
#include <locale.h>

void boasVindas() {
    printf("--- CALCULADOR DE VIAGEM  ---\n\n");
}

void CalcularViagem(float km, float precoGasolina, float precoEtanol) {

    float gastoGasolina = (km / 10.0) * precoGasolina;
    float gastoEtanol = (km / 7.0) * precoEtanol;

    printf("\nGasto estimado com Gasolina: R$ %.2f\n", gastoGasolina);
    printf("Gasto estimado com Etanol: R$ %.2f\n", gastoEtanol);

    if (gastoEtanol < gastoGasolina) {
        printf("\nVANTAGEM: Vá de ETANOL!\n");
    } else {
        printf("\nVANTAGEM: Vá de GASOLINA!\n");
    }
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    boasVindas();

    float distancia = 0;
    float pGasolina = 0;
    float pEtanol = 0;

    printf("Digite a distância da viagem (em km): ");
    scanf("%f", &distancia);

    printf("Digite o preço do litro da GASOLINA: R$ ");
    scanf("%f", &pGasolina);

    printf("Digite o preço do litro do ETANOL: R$ ");
    scanf("%f", &pEtanol);

    CalcularViagem(distancia, pGasolina, pEtanol);

    return 0;
}