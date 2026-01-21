#include <stdio.h>
int main()
{
    // VARIAVEIS CARTA 1
char cidade[20];
int populacao, pontos_turisticos;
char estado;
char codigo_carta[8];
float area, pib;

//VARIAVEIS CARTA 2
char cidade2[20];
int populacao2, pontos_turisticos2;
char estado2;
char codigo_carta2[8];
float area2, pib2;

//carta 1

printf("Carta 1:\n");

printf("Digite a letra do estado: ");
scanf(" %c", &estado);  

printf(" Digite o código da carta: ");
scanf(" %s", codigo_carta);

printf("Digite o nome da cidade: ");
scanf(" %s", cidade);

printf("Digite o numero da população: ");
scanf("%d", &populacao);

printf("Area em KM2: ");
scanf(" %f", &area);

printf("Digite o valor do PIB: ");
scanf(" %f", &pib);

printf("Digite o numero de pontos turisticos: ");
scanf(" %d", &pontos_turisticos);

printf("\n"); // Pula uma linha para organizar


// Carta2:



printf("Carta 2:\n");

printf("Digite a letra do estado: ");
scanf(" %c", &estado2);

printf(" Digite o código da carta: ");
scanf(" %s", codigo_carta2);

printf("Digite o nome da cidade: ");
scanf(" %s", cidade2);

printf("Digite o numero da população: ");
scanf(" %d", &populacao2);

printf("Area em KM2: ");
scanf(" %f", &area2);

printf("Digite o valor do PIB: ");
scanf(" %f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf(" %d", &pontos_turisticos2);

// Exibição Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area); // .2f limita a duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    // Exibição Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2); // .2f limita a duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
return 0;





}
