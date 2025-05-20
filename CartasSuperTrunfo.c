#include <stdio.h>

int main(){
    char letra = 'A';
    char nome[20] = "S01";
    char cidade[20] = "São Paulo";
    float quantidade = 12.396372;
    float altura = 1.52111;
    float altura2 = 783.79;
    int idade = 100;

    printf("Desafio Cartas Super Trunfo!\n"); // Comentário nome do Desafio.

    printf("Estado: A \n"); // Comentrário letra da Carta.

    printf("Código: %s\n", nome); //Usado %s para imprimir a string nome/código.

    printf("Nome da cidade: %s\n", cidade); //Usado %s para imprimir a string cidade.

    printf("População: %f\n", quantidade); //Usado %f para imprimir a float quantidade.

    printf("Área: %f\n", altura); //Usado %f para imprimir a float altura.

    printf("PIB: %f\n", altura2); //Usado %f para imprimir a float altura2.

    printf("Número de Pontos Túristicos: %d\n", idade); //Usado %d para imprimir o int idade.

return 0;

}