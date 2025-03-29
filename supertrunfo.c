#include <stdio.h>

int main(){
    //Estados
    char A[10], B[10];

    //Cod das Cartas
    char A02[10], B03[10];

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
    printf("Digite o cod da sua carta A02: \n");
    scanf("%s", A02);

    printf("Digite o nome do estado da carta A02: \n");
    scanf("%s", A);

    printf("Digite o nome da cidade da carta A02: \n");
    scanf("%s", cidade1);

    printf("Digite o tamanho da populacao da cidade da carta A02: \n");
    scanf("%d", &populacao1);

    printf("Digite o tamanho da area da carta A02: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da carta A02: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de postos turisticos da carta A02: \n");
    scanf("%d", &numerosdepontosturisticos1);

    
    printf("carta1: %s\n - estado: %s\n - codigo: %s\n - nome da cidade: %s\n", A02, A, A02, cidade1);

    printf("populacao1: %d\n - area: %f\n - pib: %f\n - numerosdepontosturisticos1: %d\n", populacao1, area1, pib1, numerosdepontosturisticos1);

    
    //Referente a carta B03
    printf("Digite o cod da sua carta B03: \n");
    scanf("%s", B03);

    printf("Digite o nome do estado da carta B03: \n");
    scanf("%s", B);

    printf("Digite o nome da cidade da carta B03: \n");
    scanf("%s", cidade2);

    printf("Digite o tamanho da populacao da cidade da carta B03: \n");
    scanf("%d", &populacao2);

    printf("Digite o tamanho da area da carta B03: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da carta B03: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de postos turisticos da carta B03: \n");
    scanf("%d", &numerosdepontosturisticos2);

    printf("carta2: %s\n - estado: %s\n - codigo: %s\n - nome da cidade: %s\n", B03, B, B03, cidade2);
  
    printf("populacao2: %d\n - area: %f\n - pib: %f\n - numerosdepontosturisticos2: %d\n", populacao2, area2, pib2, numerosdepontosturisticos2);

    
    return 0;
	    
}
