#include <stdio.h>
int main (){
    printf ("Desafio Xadrez!\n");
    printf ("Carta01\n");
    char estado[50] = "S";
    char codigo[50] = "S01";
    char cidade[50] = "Andradina";
    int populacao = 90000;
    float area = 900.000;
    float PIB = 3.000000000;
    int turistico = 50;
    printf("Código: %s\n", &codigo);
    printf("Estado: %s\n", &estado);
    printf("Cidade: %s\n", &cidade);
    printf("População: %d\n", populacao);
    printf("Área em km: %.3fkm²\n", area);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Pontos turisticos: %d\n", turistico);
   
    printf("----------------\n");//apenas para separar cada carta

    printf("Carta02\n");
    char estado2[50] = "P";
    char codigo2[50] = "P02";
    char cidade2[50] = "Murutinga do Sul";
    int populacao2 = 4000;
    float area2 = 250.000;
    float PIB2 = 50.000;
    int turistico2 = 10;
    printf("Código: %s\n", &codigo2);
    printf("Estado: %s\n", &estado2);
    printf("Cidade: %s\n", &cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km: %.3fkm²\n", area2);
    printf("PIB: %.3f mil de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", turistico2);
    return 0;
}