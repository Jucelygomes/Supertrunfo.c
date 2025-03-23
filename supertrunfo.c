#include <stdio.h>

int main(){
    //Estados
    char A[10], B[10];

    //Cod das Cartas
    char A02[10], B03[10];

    //Nome das Cidades
    char cidade1[10], cidade2[10];

    //População
    int populacao;

    //Area em km²
    float area;

    //PIB
    float pib;

    //Numeros de Pontos turisticos
    int numerosdepontosturisticos;
    
    
    printf("Digite o cod da sua carta: \n");
    scanf("%s", &A02, &B03);

    printf("Digite o nome do estado: \n");
    scanf("%s", &A, &B);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1, &cidade2);

    printf("Digite o tamanho da populacao da cidade: \n");
    scanf("%s", &populacao);

    printf("Digite o tamanho da area: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);

    printf("Digite o numero de postos turisticos: \n");
    scan("%d", &numerosdepontosturisticos);



    return 0;
	    
}
