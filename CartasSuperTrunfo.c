#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //DECLARANDO AS VARIÁVEIS, 1 VARIÁVEL PARA CADA CARTA, PARA CADA INFORMAÇÃO
    char estado[50], estado2[50];
    char codigo[5], codigo2[5];
    char nome[50], nome2[50];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float densidade, densidade2;
    float pib_per_capita, pib_per_capita2;


    //LENDO VIA TECLADO (ENTRADA DE DADOS, 1º CARTA)
    printf("Insira os dados da 1º carta:\n");

    printf("Qual o estado da sua carta:\n");
    scanf(" %s", estado); //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual o código da sua carta:\n");
    scanf(" %s", codigo); //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual o nome da cidade:\n");
    scanf(" %s", nome); //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual é a população desta cidade:\n");
    scanf(" %d", &populacao);

    printf("Qual o área desta cidade:\n");
    scanf(" %f", &area);

    printf("Qual o PIB desta cidade:\n");
    scanf(" %f", &pib);

    printf("Qual a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &turismo);

    //CALCULANDO DENSIDADE E PIB PER CAPITA PARA A 1º CARTA
    densidade = populacao / area;
    pib_per_capita = pib / populacao;


    //LENDO VIA TECLADO (ENTRADA DE DADOS, 2º CARTA)
    printf("Insira os dados da 2º carta:\n");

    printf("Qual o estado da sua carta:\n");
    scanf(" %s", estado2); //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual o código da sua carta:\n");
    scanf(" %s", codigo2); //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual o nome da cidade:\n");
    scanf(" %s", nome2);

    printf("Qual é a população desta cidade:\n");
    scanf(" %d", &populacao2);

    printf("Qual o área desta cidade:\n");
    scanf(" %f", &area2);

    printf("Qual o PIB desta cidade:\n");
    scanf(" %f", &pib2);

    printf("Qual a quantidade de pontos turísticos na cidade:\n");
    scanf(" %d", &turismo2);

    //CALCULANDO DENSIDADE E PIB PER CAPITA PARA A 2º CARTA
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    //IMPRIMINDO AS INFORMAÇÕES DA 1º CARTA
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %.2f m²\n", area);
    printf("PIB: %.2f reais\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", turismo);
    printf("Densidade: %.2f pessoas/m²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);

    //IMPRIMINDO AS INFORMAÇÕES DA 2º CARTA
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d pessoas\n", populacao2);
    printf("Área: %.2f m²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", turismo2);
    printf("Densidade: %.2f pessoas/m²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
