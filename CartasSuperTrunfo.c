#include <stdio.h>

int main(){
    char letra = 'A';
    char nome[20] = "S01";
    char cidade[20] = "São Paulo";
    float quantidade = 12.396372;
    float altura = 1.52111;
    float altura2 = 783.79;
    int idade = 100;

    printf("Desafio Cartas Super Trunfo!\n");

    printf("Estado: A \n");

    printf("Código: %s\n", nome);

    printf("Nome da cidade: %s\n", cidade); 

    printf("População: %f\n", quantidade);

    printf("Área: %f\n", altura);

    printf("PIB: %f\n", altura2);

    printf("Número de Pontos Túristicos: %d\n", idade);

    return 0;

}
