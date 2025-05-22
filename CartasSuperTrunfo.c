#include <stdio.h>

int main(){
    //Declaração de variaveis da carta.
    char letra = 'A';
    char nome[20] = "S01";
    char cidade[20] = "São Paulo";
    float quantidade = 12.396372;
    float altura = 1.52111;
    float altura2 = 783.79;
    int idade = 100;

    //Cabeçalho do jogo.
    printf("=== Desafio Cartas Super Trunfo!===\n\n"); 

    //Exibindo informações da carta.
    printf("Estado: %c\n", letra); 
    printf("Código: %s\n", nome); //Usado %s para imprimir a string.
    printf("Nome da cidade: %s\n", cidade); //Usado %s para imprimir a string.
    printf("População: %.0f\n", quantidade); //Usado .0f para mostrar sem casas decimais
    printf("Área: %f\n", altura); //Usado %.2f para 2 casas decimais.
    printf("PIB: %f\n", altura2); //Usado %.2f para 2 casas decimais.
    printf("Número de Pontos Túristicos: %d\n", idade); //Usado %d para imprimir o int.

return 0;

}