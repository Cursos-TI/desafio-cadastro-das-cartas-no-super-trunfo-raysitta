#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.
    char letra;
    char nome[50];
    char cidade[50];
    float quantidade;
    float altura;
    float altura2;
    int idade;

    //Inserindo dados da Carta 1.
    printf("Digite a letra da carta: \n");
    scanf("%c", &letra);

    printf("Digite o código da carta: \n");
    scanf("%s", &nome);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a População: \n");
    scanf("%f", &quantidade);

    printf("Digite a Área: \n");
    scanf("%f", &altura);

    printf("Digite o PIB: \n");
    scanf("%f", &altura2);

    printf("Digite o número de Pontos Túristicos: \n");
    scanf("%d", &idade);

    //Exibindo informações da carta 1.
    printf("Estado: %c\n", letra); 
    printf("Código: %s\n", nome); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade); //Usado %s para imprimir a string.
    printf("População: %f\n", quantidade); //Usado %f para imprimir float.
    printf("Área: %f\n", altura); //Usado %f para imprimir float.
    printf("PIB: %f\n", altura2); //Usado %f para imprimir float.
    printf("Número de Pontos Túristicos: %d\n", idade); //Usado %d para imprimir o int.

    printf("\n\n");

    //Declaração de variaveis da carta 2.
    char letra2;
    char nome2[50];
    char cidade2[50];
    float quantidade2;
    float altura3;
    float altura2_2;
    int idade2;

    //Inserindo dados da carta 2.
    printf("Digite a letra da carta: \n");
    scanf("%c", &letra2);

    printf("Digite o código da carta: \n");
    scanf("%s", &nome2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%f", &quantidade2);

    printf("Digite a Área: \n");
    scanf("%f", altura3);

    printf("Digite o PIB: \n");
    scanf("%f", &altura2_2);

    printf("Digite o número de Pontos Túristicos: \n");
    scanf("%d", &idade2);
    
    //Exibindo informações da carta 2.
    printf("Estado: %c\n", letra2); 
    printf("Código: %s\n", nome2); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade2); //Usado %s para imprimir a string.
    printf("População: %f\n", quantidade2); //Usado %f para imprimir float.
    printf("Área: %f\n", altura3); //Usado %f para imprimir float.
    printf("PIB: %f\n", altura2_2); //Usado %f para imprimir float.
    printf("Número de Pontos Túristicos: %d\n", idade2); //Usado %d para imprimir o int.

return 0;

}