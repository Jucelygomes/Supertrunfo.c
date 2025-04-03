#include <stdio.h>

int main(){
    //Estados
    char estado1[10], estado2[10];

    //Cod das Cartas
    char codigo1[10], codigo2[10];

    //Nome das Cidades
    char cidade1[10], cidade2[10];

    //População
    int populacao1, populacao2;

    //Area em km²
    float area1, area2;

    //PIB
    float pib1, pib2;

    //Numeros de Pontos turisticos
    int numerosdepontosturisticos1, numerosdepontosturisticos2;
    
    //Referente a carta A02
    printf("*** CARTA 1 ***\n");
    printf("Digite o nome do estado da carta 1: \n");
    scanf("%s", estado1);

    printf("Digite o código da sua carta 1: \n");
    scanf("%s", codigo1);
  
    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", cidade1);

    printf("Digite o tamanho da populacao da cidade da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da area da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de postos turisticos da carta 1: \n");
    scanf("%d", &numerosdepontosturisticos1);

    
    //Referente a carta 2
    printf("*** CARTA 2 ***\n");

    printf("Digite o nome do estado da carta 2: \n");
    scanf("%s", estado2);

    printf("Digite o código da sua carta 2: \n");
    scanf("%s", codigo2);  

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", cidade2);

    printf("Digite o tamanho da populacao da cidade da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da area da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de postos turisticos da carta 2: \n");
    scanf("%d", &numerosdepontosturisticos2);

    printf("CARTA 1\n");
    printf(" - estado: %s\n - codigo: %s\n - cidade: %s\n", estado1, codigo1, cidade1);
    printf(" - populacao: %d\n - area: %.2fKm²\n - pib: %.2f-bilhoes de reais\n - numerosdepontosturisticos: %d\n", populacao1, area1, pib1, numerosdepontosturisticos1);

    printf("CARTA 2\n");
    printf(" - estado: %s\n - codigo: %s\n - cidade: %s\n", estado2, codigo2, cidade2);
    printf(" - populacao: %d\n - area: %.2fKm²1\n - pib: %.2f-bilhoes de reais\n - numeros de pontos turisticos: %d\n", populacao2, area2, pib2, numerosdepontosturisticos2);

    
    return 0;
	    
}
