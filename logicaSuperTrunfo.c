#include <stdio.h>

int main(){
  
    // declaracao de variaveis

    char estado1 = 'G', estado2 = 'B';
    char codigo1[4] = "GO1", codigo2[4] = "BR2";
    char nome1[50] = "Goiânia", nome2[50] = "Brasília";
    int populacao1 = 1494599, populacao2 = 2817381;
    float area1 = 729.29, area2 = 988.55;
    float pib1 = 428.86, pib2 = 632.52;
    int pontosturisticos1 = 50, pontosturisticos2 = 30;

    // CARTA 1 //

    printf("###\nCarta 1\n###");
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Ponto Turisticos: %d\n", pontosturisticos1);

    // CARTA 2 //

    printf("###\nCarta 2\n###");
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Ponto Turisticos: %d\n", pontosturisticos2);


    //Cálculo de novos atributos
    float densidade1 = populacao1/area1;
    float densidade2 = populacao2/area2;
    float pibpercapita1 = pib1/populacao1;
    float pibpercapita2 = pib2/populacao2;

    // Impressao dos novos atributos
    printf("###\nNovos Atributos\n###");
    printf("Densidade 1: %f\n", densidade1);
    printf("Desindade 2: %f\n", densidade2);
    printf("Pib per capita 1: %f\n", pibpercapita1);
    printf("Pib per capita 2: %f\n", pibpercapita2);

    // Menu de Comparacao
    
    int opcao1, opcao2;
    printf("\nEscolha dois atributos para comparacao:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    printf("6. PIB per capita\n");

    printf("Atributo 1: ");
    scanf("%d", &opcao1);
    printf("Atributo 2: ");
    scanf("%d", &opcao2);

    // Logica da comparacao combinada

    printf("Resultado da comparacao\n");

    float valor1 = 0, valor2 = 0;

    switch (opcao1)
    {
    case 1: valor1 = populacao1; break;
    case 2: valor1 = area1; break;
    case 3: valor1 = pib1; break;
    case 4: valor1 = pontosturisticos1; break;
    case 5: valor1 = densidade1; break;
    case 6: valor1 = pibpercapita1; break;
    default: printf("Opcao invalida\n");
    }

    switch (opcao2)
    { 
    case 1: valor2 = populacao2; break;
    case 2: valor2 = area2; break;
    case 3: valor2 = pib2; break;
    case 4: valor2 = pontosturisticos2; break;
    case 5: valor2 = densidade2; break;
    case 6: valor2 = pibpercapita2; break;
    default: printf("Opcao invalida\n");
    }

     // Comparação dos atributos escolhidos
     printf("Resultado da comparação:\n");
     if (valor1 > valor2) {
         printf("%s (%s) é maior que %s (%s) no atributo escolhido.\n", nome1, codigo1, nome2, codigo2);
     } else if (valor1 < valor2) {
         printf("%s (%s) é maior que %s (%s) no atributo escolhido.\n", nome2, codigo2, nome1, codigo1);
     } else {
         printf("Ambos têm o mesmo valor no atributo escolhido.\n");
     }
 
     return 0;
 }