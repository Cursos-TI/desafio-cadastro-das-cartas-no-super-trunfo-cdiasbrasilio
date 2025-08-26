#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //DECLARANDO AS VARIÁVEIS, 1 VARIÁVEL PARA CADA CARTA E PARA CADA INFORMAÇÃO
    //CHAR SERVE PARA ESPECIFICAR CARACTERES, O NUMERO DENTRO DO COLCHETES SERVE PARA DEFINIR LIMITE
    //INT SERVE PARA ARMAZENAS NUMEROS INTEIROS, POSITIVOS OU NEGATIVOS
    //FLOAT É PARA ARMAZENAS NUMEROS REAIS, COM CASA DECIMAIS
    char estado[50], estado2[50];
    char codigo[5], codigo2[5];
    char nome[50], nome2[50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int turismo, turismo2;
    float densidade, densidade2;
    float pib_per_capita, pib_per_capita2;


    //LENDO VIA TECLADO (ENTRADA DE DADOS, 1º CARTA)
    printf("Insira os dados da 1º carta:\n"); //PRINTF: MOSTRAR NA TELA

    printf("Qual o estado da sua carta:\n");
    scanf(" %s", estado); //SCANF SERVE PARA LER E ARMAZENAS DENTRO DE UMA VARIÁVEL DEFINIDA
    //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual o código da sua carta:\n");
    scanf(" %s", codigo); 
    //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual o nome da cidade:\n");
    scanf(" %s", nome); 
    //SEM & PARA STRINGS, POIS JA E UM PONTEIRO

    printf("Qual é a população desta cidade:\n");
    scanf(" %lu", &populacao);
    //DIFERENTE DOS 3 ANTERIORES FOI USADO & ANTES DA VARIÁVEL

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
    //REPETE-SE EXATAMENTE A MESMA OPERAÇÃO FEITA PARA 1º CARTA
    printf("Insira os dados da 2º carta:\n");

    printf("Qual o estado da sua carta:\n");
    scanf(" %s", estado2);

    printf("Qual o código da sua carta:\n");
    scanf(" %s", codigo2);

    printf("Qual o nome da cidade:\n");
    scanf(" %s", nome2);

    printf("Qual é a população desta cidade:\n");
    scanf(" %lu", &populacao2);

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
    printf("População: %lu pessoas\n", populacao);
    printf("Área: %.2f m²\n", area); //%.2F PARA LIMITAR A DUAS CASAS DECIMAIS
    printf("PIB: %.2f reais\n", pib);//%.2F PARA LIMITAR A DUAS CASAS DECIMAIS
    printf("Quantidade de pontos turísticos: %d\n", turismo);
    printf("Densidade: %.2f pessoas/m²\n", densidade);
    printf("PIB per capita: %.2f reais\n", pib_per_capita);
    //CALCULANDO O SUPER PODER
    float superPoder;
    superPoder = populacao + area + pib + turismo + densidade + pib_per_capita;
    printf("Super Poder: %.2f\n", superPoder);


    //IMPRIMINDO AS INFORMAÇÕES DA 2º CARTA
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %lu pessoas\n", populacao2);
    printf("Área: %.2f m²\n", area2);//%.2F PARA LIMITAR A DUAS CASAS DECIMAIS
    printf("PIB: %.2f reais\n", pib2);//%.2F PARA LIMITAR A DUAS CASAS DECIMAIS
    printf("Quantidade de pontos turísticos: %d\n", turismo2);
    printf("Densidade: %.2f pessoas/m²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);
    //CALCULANDO O SUPER PODER
    float superPoder2;
    superPoder2 = populacao2 + area2 + pib2 + turismo2 + densidade2 + pib_per_capita2;
    printf("Super Poder: %.2f\n", superPoder2);

    //COMPARAÇÃO DOS ATRIBUTOS DAS CARTAS

    printf("Quesito População:\n");
    if (populacao > populacao2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (populacao < populacao2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }   

    printf("Quesito Área:\n");
    if (area > area2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (area < area2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }

    printf("Quesito PIB:\n");
    if (pib > pib2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (pib < pib2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }

    printf("Quesito Pontos Turísticos:\n");
    if (turismo > turismo2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (turismo < turismo2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }

    printf("Quesito Densidade:\n");
    if (densidade > densidade2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (densidade < densidade2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }

    printf("Quesito PIB per capita:\n");
    if (pib_per_capita > pib_per_capita2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (pib_per_capita < pib_per_capita2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }

    printf("Quesito Super Poder:\n");
    if (superPoder > superPoder2) {
        printf("A carta 1 é a vencedora!\n");
    } else if (superPoder < superPoder2) {
        printf("A carta 2 é a vencedora!\n");
    } else {
        printf("As cartas estão empatadas!\n");
    }   

    return 0;
}
