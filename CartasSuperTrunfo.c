#include <stdio.h>

int main(){
    //Declaração de variaveis da carta 1.
    char letra = 'A';
    char nome[20] = "S01";
    char cidade[20] = "São Paulo";
    float quantidade = 12.396372;
    float altura = 1.52111;
    float altura2 = 783.79;
    int idade = 100;

     //Declaração de variaveis da carta 2.
    char letra2 = 'B';
    char nome2[20] = "P02";
    char cidade2[20] = "Curitiba";
    float quantidade2 = 1.963726;
    float altura3 = 435.03;
    float altura2_2 = 265.67;
    int idade2 = 40;

    //Cabeçalho do jogo. 
    printf("=== Desafio Cartas Super Trunfo!===\n\n"); 

    //Exibindo informações da carta 1.
    printf("Estado: %c\n", letra); 
    printf("Código: %s\n", nome); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade); //Usado %s para imprimir a string.
    printf("População: %.0f\n", quantidade); //Usado .0f para mostrar sem casas decimais
    printf("Área: %f\n", altura); //Usado %.2f para 2 casas decimais.
    printf("PIB: %f\n", altura2); //Usado %.2f para 2 casas decimais.
    printf("Número de Pontos Túristicos: %d\n", idade); //Usado %d para imprimir o int.

    printf("\n\n");
    
    //Exibindo informações da carta 2.
    printf("Estado: %c\n", letra2); 
    printf("Código: %s\n", nome2); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade2); //Usado %s para imprimir a string.
    printf("População: %.0f\n", quantidade2); //Usado .0f para mostrar sem casas decimais
    printf("Área: %f\n", altura3); //Usado %.2f para 2 casas decimais.
    printf("PIB: %f\n", altura2_2); //Usado %.2f para 2 casas decimais.
    printf("Número de Pontos Túristicos: %d\n", idade2); //Usado %d para imprimir o int.

return 0;

}