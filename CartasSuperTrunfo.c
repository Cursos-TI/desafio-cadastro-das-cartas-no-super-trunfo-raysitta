#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.
    char letra_carta1;
    char nome_carta1[50];
    char cidade_carta1[50];
    float quantidade_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    //Declaração de variaveis da carta 2.
    char letra_carta2;
    char nome_carta2[50];
    char cidade_carta2[50];
    float quantidade_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    //Inserindo dados da Carta 1.
    printf("Digite a letra da carta: \n");
    scanf(" %c", &letra_carta1);

    printf("Digite o código da carta: \n");
    scanf("%s", nome_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_carta1);

    printf("Digite a População: \n");
    scanf("%f", &quantidade_carta1);

    printf("Digite a Área: \n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta1);

    printf("Digite o número de Pontos Túristicos: \n");
    scanf("%d", &pontos_turisticos_carta1);

    //Exibindo informações da carta 1.
    printf("Estado: %c\n", letra_carta1); 
    printf("Código: %s\n", nome_carta1); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade_carta1); //Usado %s para imprimir a string.
    printf("População: %f\n", quantidade_carta1); //Usado %f para consistência
    printf("Área: %f\n", area_carta1); //Usado %f para consistência
    printf("PIB: %f\n", pib_carta1); //Usado %f para consistência
    printf("Número de Pontos Túristicos: %d\n", pontos_turisticos_carta1); //Usado %d para imprimir o int.

    printf("\n\n");

    //Inserindo dados da carta 2.
    printf("Digite a letra da carta: \n");
    scanf(" %c", &letra_carta2);

    printf("Digite o código da carta: \n");
    scanf("%s", nome_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade_carta2);

    printf("Digite a População: \n");
    scanf("%f", &quantidade_carta2);

    printf("Digite a Área: \n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib_carta2);

    printf("Digite o número de Pontos Túristicos: \n");
    scanf("%d", &pontos_turisticos_carta2);
    
    //Exibindo informações da carta 2.
    printf("Estado: %c\n", letra_carta2); 
    printf("Código: %s\n", nome_carta2); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade_carta2); //Usado %s para imprimir a string.
    printf("População: %f\n", quantidade_carta2); //Usado %f para consistência.
    printf("Área: %f\n", area_carta2); //Usado %f para consistência
    printf("PIB: %f\n", pib_carta2); //Usado %f para consistência
    printf("Número de Pontos Túristicos: %d\n", pontos_turisticos_carta2); //Usado %d para imprimir o int.

return 0;

}