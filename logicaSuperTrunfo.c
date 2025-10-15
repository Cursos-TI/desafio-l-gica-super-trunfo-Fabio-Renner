#include <stdio.h>

int main() {
    // ====== DECLARAÇÃO DAS VARIÁVEIS DA CARTA 1 ======
    char estado1;
    char codigocarta1[20];
    char nomecidade1[50];
    unsigned long int populacao1;
    float areakm1, pib1;
    int pontosturisticos1;
    float densidadepopulacional1, pibpercapta1;

    // ====== ENTRADA DE DADOS DA CARTA 1 ======
    printf("Digite a letra do Estado da carta 1 ('A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1 ('01' a '04'): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade da carta 1 (sem espaços): ");
    scanf("%s", nomecidade1);

    printf("Digite a população da cidade da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade da carta 1 (em km²): ");
    scanf("%f", &areakm1);

    printf("Digite o PIB da cidade da carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosturisticos1);

    // ====== CÁLCULOS DA CARTA 1 ======
    densidadepopulacional1 = (float) populacao1 / areakm1;
    pibpercapta1 = pib1 / populacao1;


    // ====== DECLARAÇÃO DAS VARIÁVEIS DA CARTA 2 ======
    char estado2;
    char codigocarta2[20];
    char nomecidade2[50];
    unsigned long int populacao2;
    float areakm2, pib2;
    int pontosturisticos2;
    float densidadepopulacional2, pibpercapta2;

    // ====== ENTRADA DE DADOS DA CARTA 2 ======
    printf("\nDigite a letra do Estado da carta 2 ('A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2 ('01' a '04'): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade da carta 2 (sem espaços): ");
    scanf("%s", nomecidade2);

    printf("Digite a população da cidade da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade da carta 2 (em km²): ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade da carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosturisticos2);

    // ====== CÁLCULOS DA CARTA 2 ======
    densidadepopulacional2 = (float) populacao2 / areakm2;
    pibpercapta2 = pib2 / populacao2;


    // ====== EXIBIÇÃO DOS DADOS ======
    printf("\n============================\n");
    printf("       CARTA 1\n");
    printf("============================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta1);

    printf("\n============================\n");
    printf("       CARTA 2\n");
    printf("============================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta2);


    // ====== COMPARAÇÃO (ATRIBUTO ESCOLHIDO: DENSIDADE POPULACIONAL) ======
    printf("\n============================\n");
    printf("COMPARAÇÃO DE CARTAS (Atributo: Densidade Populacional)\n");
    printf("============================\n");

    // A menor densidade populacional vence
    if (densidadepopulacional1 < densidadepopulacional2) {
        printf("Carta 1 - %s (%.2f hab/km²)\n", nomecidade1, densidadepopulacional1);
        printf("Carta 2 - %s (%.2f hab/km²)\n", nomecidade2, densidadepopulacional2);
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } 
    else if (densidadepopulacional2 < densidadepopulacional1) {
        printf("Carta 1 - %s (%.2f hab/km²)\n", nomecidade1, densidadepopulacional1);
        printf("Carta 2 - %s (%.2f hab/km²)\n", nomecidade2, densidadepopulacional2);
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomecidade2);
    } 
    else {
        printf("Carta 1 - %s (%.2f hab/km²)\n", nomecidade1, densidadepopulacional1);
        printf("Carta 2 - %s (%.2f hab/km²)\n", nomecidade2, densidadepopulacional2);
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
