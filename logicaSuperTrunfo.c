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
    float superpoder1 = populacao1 + (float)area1 + (float)pib1 + pontos1 + (float)pibpc1 + (1 / (float) densidade1);

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
    float superpoder2 = populacao2 + (float)area2 + (float)pib2 + pontos2 + (float)pibpc2 + (1 / (float)densidade2);

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
    printf("Vamos comparar dois atributos de cada carta e definir um vencedor!:\n");

    printf("Escolha um atributo para comparar:\n");

    int opcao1;
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de Pontos Turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capita.\n");
    printf("7. Super Poder.\n");
    scanf("%d", &opcao1);
    int vitoria1;

    switch (opcao1)
    {
    case 1: //comparação da população, mostrando resultados como VITORIA, DERROTA OU EMPATE
         printf("População:\n");
         if (populacao1 == populacao2) 
         {
             vitoria1 = 1;
            printf("Empate!\n");
         } else if (populacao1 > populacao2){
             vitoria1 = 2;
            printf ("Carta (%s) Vence em População!\n", cidade1);
         } else {
             vitoria1 = 3;
            printf("Carta (%s) Vence em população!\n", cidade2);
         }
         printf("População da carta (%s): %lu | População da carta (%s): %lu \n", cidade1, populacao1, cidade2, populacao2);

         break;

    case 2: //comparação da área, mostrando resultados como VITORIA, DERROTA OU EMPATE
        printf("Área:\n");
        if (area1 == area2)
        {
             vitoria1 = 1;
            printf("Empate!\n");
        } else if (area1 > area2)
        {   
             vitoria1 = 2;
            printf("Carta (%s) Vence em Área!\n", cidade1);
        } else {
             vitoria1 = 3;
            printf("Carta (%s) Vence em Área!\n", cidade2);
        }
        printf("Área da carta (%s): %.2f | Área da carta (%s): %.2f \n", cidade1, area1, cidade2, area2);
        break;

    case 3:  //comparação do PIB, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("PIB:\n");
        if (pib1 == pib2)
        {
             vitoria1 = 1;
            printf("Empate!\n");
        } else if (pib1 > pib2){
             vitoria1 = 2;
            printf("Carta (%s) Vence em PIB!\n", cidade1);
        } else {
             vitoria1 = 3;
            printf("Carta (%s) Vence em PIB!\n", cidade2);
            vitoria1 = 0;
        }
        printf("PIB da carta (%s): %.2f | PIB da carta (%s): %.2f \n", cidade1, pib1, cidade2, pib2);
        break;

    case 4: //comparação do Pontos Turísticos, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("Pontos Turísticos:\n");
        if (pontos1 == pontos2)
        {
             vitoria1 = 1;
            printf("Empate!\n");
        } else if (pontos1 > pontos2){
             vitoria1 = 2;
            printf("Carta (%s) Vence em Número de Pontos Turísticos!\n", cidade1);
        } else {
            printf("Carta (%s) Vence em Número de Pontos Turísticos!\n", cidade2);
            vitoria1 = 3;
        }
        printf("Número de Pontos Turísticos da carta (%s): %d | Número de Pontos Turísticos da carta (%s): %d \n", cidade1, pontos1, cidade2, pontos2);
        break;

    case 5: //comparação da Densidade Populacional, mostrando resultados como VITORIA, DERROTA OU EMPATE (Na densidade, o menor número vence)
    printf("Densidade Populacional:\n");
        if (densidade1 == densidade2)
        {
             vitoria1 = 1;
            printf("Empate!\n");
        } else if (densidade1 < densidade2){
            printf("Carta (%s) Vence em Densidade Populacional!\n", cidade1);
            vitoria1 = 2;
        } else {
            printf("Carta (%s) Vence em Densidade Populacional!\n", cidade2);
            vitoria1 = 3;
        }
        printf("Densidade Populacional da carta (%s): %f | Densidade Populacional da carta (%s): %f \n", cidade1, densidade1, cidade2, densidade2);
        break;
    
    case 6: //comparação da PIB Per Capita, mostrando resultados como VITORIA, DERROTA OU EMPATE 
    printf("PIB Per Capita:\n");
        if (pibpc1 == pibpc2)
        {
             vitoria1 = 1;
            printf("Empate!\n");
        } else if (pibpc1 > pibpc2){
            printf("Carta (%s) Vence em PIB Per Capita!\n", cidade1);
            vitoria1 = 2;
        } else {
            printf("Carta (%s) Vence em PIB Per Capita!\n", cidade2);
            vitoria1 = 3;
        }
        printf("PIB Per Capita da carta (%s): %.2f | PIB Per Capita da carta (%s): %.2f \n", cidade1, pibpc1, cidade2, pibpc2);
        break;

    case 7: //comparação do Super Poder, mostrando resultados como VITORIA, DERROTA OU EMPATE
    printf("Super Poder:\n");
        if (superpoder1 == superpoder2)
        {
             vitoria1 = 1;
            printf("Empate!\n");
        } else if (superpoder1 > superpoder2){
            printf("Carta (%s) Vence em Super Poder!\n", cidade1);
            vitoria1 = 2;
        } else {
            printf("Carta (%s) Vence em Super Poder!\n", cidade2);
            vitoria1 = 3;
        }
        printf("Super Poder da carta (%s): %f | Super Poder da carta (%s): %f \n", cidade1, superpoder1, cidade2, superpoder2);
        break;

    default: // Opção fora do menu, mostrar opção inválida.
    printf("Opção inválida.");
        break;
    }

    int opcao2, vitoria2;
    printf("Escolha o Segundo atributo a ser comparado:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de Pontos Turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB Per Capita.\n");
    printf("7. Super Poder.\n");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1)
    {
        printf("Opção inválida!\n");
    } else {
    switch (opcao2)
    {
    case 1:
        if (populacao1 == populacao2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (populacao1 > populacao2){
            printf("Carta (%s) Vence em População!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em População!\n", cidade2);
            vitoria2 = 3;
        }
        printf("População da carta (%s): %lu | População da carta (%s): %lu \n", cidade1, populacao1, cidade2, populacao2);
    break;

    case 2:
        if (area1 == area2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (area1 > area2){
            printf("Carta (%s) Vence em Área!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em Área!\n", cidade2);
            vitoria2 = 3;
        }
        printf("Área da carta (%s): %.2f | Área da carta (%s): %.2f \n", cidade1, area1, cidade2, area2);
        break;

    case 3:
        if (pib1 == pib2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (pib1 > pib2){
            printf("Carta (%s) Vence em PIB!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em PIB!\n", cidade2);
            vitoria2 = 3;
        }
        printf("PIB da carta (%s): %.2f | PIB da carta (%s): %.2f \n", cidade1, pib1, cidade2, pib2);
        break;

    case 4:
        if (pontos1 == pontos2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (pontos1 > pontos2){
            printf("Carta (%s) Vence em Número de Pontos Turísticos!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em Número de Pontos Turísticos!\n", cidade2);
            vitoria2 = 3;
        }
        printf("Número de Pontos Turísticos da carta (%s): %d | Número de Pontos Turísticos da carta (%s): %d \n", cidade1, pontos1, cidade2, pontos2);
        break;

    case 5:
        if (densidade1 == densidade2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (densidade1 < densidade2){
            printf("Carta (%s) Vence em Densidade Populacional!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em Densidade Populacional!\n", cidade2);
            vitoria2 = 3;
        }
        printf("Densidade Populacional da carta (%s): %f | Densidade Populacional da carta (%s): %f \n", cidade1, densidade1, cidade2, densidade2);
        break;

    case 6:
        if (pibpc1 == pibpc2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (pibpc1 > pibpc2){
            printf("Carta (%s) Vence em PIB Per Capita!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em PIB Per Capita!\n", cidade2);
            vitoria2 = 3;
        }
        printf("PIB Per Capita da carta (%s): %.2f | PIB Per Capita da carta (%s): %.2f \n", cidade1, pibpc1, cidade2, pibpc2);
    break;

    case 7:
        if (superpoder1 == superpoder2)
        {
             vitoria2 = 1;
            printf("Empate!\n");
        } else if (superpoder1 > superpoder2){
            printf("Carta (%s) Vence em Super Poder!\n", cidade1);
            vitoria2 = 2;
        } else {
            printf("Carta (%s) Vence em Super Poder!\n", cidade2);
            vitoria2 = 3;
        }
        printf("Super Poder da carta (%s): %f | Super Poder da carta (%s): %f \n", cidade1, superpoder1, cidade2, superpoder2);
        break;
        

    default:
        printf("Opção inválida!\n");
        break;
    }}

    if (vitoria1 == 2 && vitoria2 == 2)
    {
        printf("A Cidade (%s) Venceu o Jogo!\n", cidade1);
    } if (vitoria1 == 3 && vitoria2 == 3)
    {
        printf ("A Cidade (%s) Venceu o Jogo!\n", cidade2);
    } else if (vitoria1 == 1 && vitoria2 == 1){
        printf (" O Jogo empatou!\n");
    }
    
    
        return 0;

}

