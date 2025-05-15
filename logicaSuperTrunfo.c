#include <stdio.h>

int main() {

    //introdução das variáveis do código
    char estado1, estado2;
    char cidade1[20], cidade2[20];
    char codigo1[20], codigo2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //cadastro da primeira carta
    printf("Vamos cadastrar sua carta? \n");

    printf("Digite a primeira letra do estado:\n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta:\n");
    scanf(" %s", codigo1);

    printf("Digite a sigla da cidade:\n");
    scanf(" %s", cidade1);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao1);

    printf("Agora digite a area (em km²):\n");
    scanf(" %f", &area1);
    
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos1);

    //adição das novas variáveis após a coleta das informações anteriores para que o calculo seja realizado corretamente
    float densidade1 = (float) populacao1 / area1;
    float pibpc1 = pib1 / (float) populacao1;
    /*"Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").*/
    float superpoder1 = populacao1 + (float)area1 + (float)pib1 + pontos1 + (float)pibpc1 - (float)densidade1;

    //exibição das informações da primeira carta
    printf("Carta 1 registrada!\n");
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("Populacao: %lu \n", populacao1);
    printf("Area %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turisticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", pibpc1);
    printf("Valor do Super Poder: %f \n", superpoder1);

    //cadastro da segunda carta
    printf("Hora de cadastrar a segunda carta\n");

    printf("Digite a primeira letra do estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta:\n");
    scanf(" %s", codigo2);
    
    printf("Digite a sigla da cidade:\n");
    scanf(" %s", cidade2);

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area (em km²):\n");
    scanf(" %f", &area2);

    printf("Digite o PIB:\n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    //adição das novas variáveis após a coleta das informações pelo usuário
    float densidade2 = (float) populacao2 / area2;
    float pibpc2 = pib2 / (float) populacao2;
     /*"Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder").*/
    float superpoder2 = populacao2 + (float)area2 + (float)pib2 + pontos2 + (float)pibpc2 - (float)densidade2;

    //exibição das informações da carta 2
    printf("Carta 2 Registrada!\n");
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %2s \n", cidade2);
    printf("Populacao: %lu \n", populacao2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %f reais\n", pibpc2);
    printf("Super Poder: %f\n", superpoder2);

    //sistema para comparar as propriedades de cada carta de forma isolada
    printf("Vamos comparar as características de cada carta e definir um vencedor!:\n");

    //comparação da população, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("População:\n");
        if (populacao1 > populacao2){
            printf("Carta 1 (%s) vence em População!\n",cidade1);
        } else {
            if (populacao2 > populacao1){
            printf("Carta 2 (%s) vence em População!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}

        //comparação da área, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("Área:\n");
        if (area1 > area2){
            printf("Carta 1 (%s) vence em Área!\n",cidade1);
        } else {
            if (area1 < area2){
            printf("Carta 2 (%s) vence em Área!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}

        //comparação do PIB, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("PIB:\n");
        if (pib1 > pib2){
            printf("Carta 1 (%s) vence em PIB!\n",cidade1);
        } else {
            if (pib1 < pib2){
            printf("Carta 2 (%s) vence em PIB!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}
    
            //comparação do Pontos Turísticos, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("Pontos Turísticos:\n");
        if (pontos1 > pontos2){
            printf("Carta 1 (%s) vence em Pontos Turísticos!\n",cidade1);
        } else {
            if (pontos1 < pontos2){
            printf("Carta 2 (%s) vence em Pontos Turísticos!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}

        //comparação da Densidade Populacional, mostrando resultados como VITORIA, DERROTA OU EMPATE (Na densidade, o menor número vence)
    printf("Densidade Populacional:\n");
        if (densidade1 < densidade2){
            printf("Carta 1 (%s) vence em Densidade Populacional!\n",cidade1);
        } else {
            if (densidade2 < densidade1){
            printf("Carta 2 (%s) vence em Densidade Populacional!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}

           //comparação da PIB Per Capita, mostrando resultados como VITORIA, DERROTA OU EMPATE 
    printf("PIB Per Capita:\n");
        if (pibpc1 > pibpc2){
            printf("Carta 1 (%s) vence em PIB!\n",cidade1);
        } else {
            if (pibpc1 < pibpc2){
            printf("Carta 2 (%s) vence em PIB Per Capita!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}

           //comparação do Super Poder, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("Super Poder:\n");
        if (superpoder1 > superpoder2){
            printf("Carta 1 (%s) vence em Super Poder!\n",cidade1);
        } else {
            if (superpoder1 < superpoder2){
            printf("Carta 2 (%s) vence em Super Poder!\n",cidade2);
        } else {
            printf("Empate!\n");
        }}

        return 0;

}

