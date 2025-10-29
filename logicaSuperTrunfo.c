#include <stdio.h>

int main() {
    // ---------------------------
    // VARIÁVEIS DA CARTA 1
    // ---------------------------
    char estado1;
    char codigocarta1[20];
    char nomecidade1[50];
    unsigned long int populacao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;

    // Entrada de dados da carta 1
    printf("Digite a letra do Estado da carta 1 ('A' a 'H'): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 ('01' a '04'): \n");
    scanf(" %s", codigocarta1);

    printf("Digite o nome da cidade da carta 1 (sem espaços): \n");
    scanf("%s", nomecidade1);

    printf("Qual a população da cidade da carta 1? \n");
    scanf("%lu", &populacao1);

    printf("Qual a área da cidade da carta 1 (em km²)? \n");
    scanf("%f", &areakm1);

    printf("Qual é o PIB da cidade da carta 1? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem nessa cidade 1? \n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / areakm1;
    pibpercapta1 = (float) pib1 / populacao1;


    // ---------------------------
    // VARIÁVEIS DA CARTA 2
    // ---------------------------
    char estado2;
    char codigocarta2[20];
    char nomecidade2[50];
    unsigned long int populacao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;

    // Entrada de dados da carta 2
    printf("\nDigite a letra do Estado da carta 2 ('A' a 'H'): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 ('01' a '04'): \n");
    scanf(" %s", codigocarta2);

    printf("Digite o nome da cidade da carta 2 (sem espaços): \n");
    scanf("%s", nomecidade2);

    printf("Qual a população da cidade da carta 2? \n");
    scanf("%lu", &populacao2);

    printf("Qual a área da cidade da carta 2 (em km²)? \n");
    scanf("%f", &areakm2);

    printf("Qual é o PIB da cidade da carta 2? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem nessa cidade da carta 2? \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float) populacao2 / areakm2;
    pibpercapta2 = (float) pib2 / populacao2;


    // ---------------------------
    // EXIBIÇÃO DOS DADOS
    // ---------------------------
    printf("\nCarta 1:\n");
    printf("Estado e código: %c%s\n", estado1, codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibpercapta1);

    printf("\nCarta 2:\n");
    printf("Estado e código: %c%s\n", estado2, codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibpercapta2);


    // ---------------------------
    // MENU INTERATIVO
    // ---------------------------
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    // ---------------------------
    // SWITCH PARA ESCOLHER ATRIBUTO
    // ---------------------------
    switch(opcao) {
        case 1: // População
            printf("Comparação de Cartas (Atributo: População)\n");
            printf("Carta 1 - %s: %lu habitantes\n", nomecidade1, populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", nomecidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("Comparação de Cartas (Atributo: Área)\n");
            printf("Carta 1 - %s: %.2f km²\n", nomecidade1, areakm1);
            printf("Carta 2 - %s: %.2f km²\n", nomecidade2, areakm2);
            if (areakm1 > areakm2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            else if (areakm2 > areakm1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Comparação de Cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s: R$ %.2f bilhões\n", nomecidade1, pib1);
            printf("Carta 2 - %s: R$ %.2f bilhões\n", nomecidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Comparação de Cartas (Atributo: Pontos Turísticos)\n");
            printf("Carta 1 - %s: %d pontos\n", nomecidade1, pontosturisticos1);
            printf("Carta 2 - %s: %d pontos\n", nomecidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            else if (pontosturisticos2 > pontosturisticos1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade populacional (menor vence)
            printf("Comparação de Cartas (Atributo: Densidade Populacional)\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomecidade1, densidadepopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomecidade2, densidadepopulacional2);
            if (densidadepopulacional1 < densidadepopulacional2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            else if (densidadepopulacional2 < densidadepopulacional1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Comparação de Cartas (Atributo: PIB per Capita)\n");
            printf("Carta 1 - %s: R$ %.2f\n", nomecidade1, pibpercapta1);
            printf("Carta 2 - %s: R$ %.2f\n", nomecidade2, pibpercapta2);
            if (pibpercapta1 > pibpercapta2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
            else if (pibpercapta2 > pibpercapta1)
                printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
            break;
    }

    return 0;
}
