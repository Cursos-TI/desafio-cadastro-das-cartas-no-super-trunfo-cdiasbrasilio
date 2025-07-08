#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //DECLARANDO AS VARIÁVEIS, 1 VARIÁVEL PARA CADA CARTA, PARA CADA INFORMAÇÃO
    char estado, estado2;
    char codigo[5], codigo2[5];
    char nome[50], nome2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;

    //LENDO VIA TECLADO (ENTRADA DE DADOS, 1º CARTA)
    printf("Insira os dados da 1º carta:\n");

    printf("Qual o estado da sua carta:\n");
    scanf(" %c", &estado);

    printf("Qual o código da sua carta:\n");
    scanf(" %s", &codigo);

    printf("Qual o nome da cidade:\n");
    scanf(" %s", &nome);

    printf("Qual é a população desta cidade:\n");
    scanf(" %d", &populacao);

    printf("Qual o área desta cidade:\n");
    scanf(" %f", &area);

    printf("Qual o PIB desta cidade:\n");
    scanf(" %f", &pib);

    printf("Qual a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &turismo);

    //LENDO VIA TECLADO (ENTRADA DE DADOS, 2º CARTA)
    printf("Insira os dados da 2º carta:\n");

    printf("Qual o estado da sua carta:\n");
    scanf(" %c", &estado2);

    printf("Qual o código da sua carta:\n");
    scanf(" %s", &codigo2);

    printf("Qual o nome da cidade:\n");
    scanf(" %s", &nome2);

    printf("Qual é a população desta cidade:\n");
    scanf(" %d", &populacao2);

    printf("Qual o área desta cidade:\n");
    scanf(" %f", &area2);

    printf("Qual o PIB desta cidade:\n");
    scanf(" %f", &pib2);

    printf("Qual a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &turismo2);

    //IMPRIMINDO AS INFORMAÇÕES DA 1º CARTA
    printf("Carta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %.2f m²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", turismo);

    //IMPRIMINDO AS INFORMAÇÕES DA 2º CARTA
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %.2f m²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", turismo2);

    return 0;
}
