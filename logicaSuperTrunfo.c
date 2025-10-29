#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;
    char codigo[3];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_demografica;
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do Estado da carta 1 ('A' a 'H'): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta 1 ('01' a '04'): ");
    scanf("%s", carta1.codigo);
    printf("Digite o nome da cidade da carta 1 (sem espaços): ");
    scanf("%s", carta1.nome);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    carta1.densidade_demografica = carta1.populacao / carta1.area;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do Estado da carta 2 ('A' a 'H'): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta 2 ('01' a '04'): ");
    scanf("%s", carta2.codigo);
    printf("Digite o nome da cidade da carta 2 (sem espaços): ");
    scanf("%s", carta2.nome);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    carta2.densidade_demografica = carta2.populacao / carta2.area;

    printf("\n==============================\n");
    printf("Cartas cadastradas com sucesso!\n");
    printf("==============================\n\n");

    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    // Menu para o primeiro atributo
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
    switch (opcao1) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade demografica\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Pontos turisticos\n5 - Densidade demografica\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Pontos turisticos\n5 - Densidade demografica\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade demografica\n");
            break;
        case 5:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos turisticos\n");
            break;
        default:
            printf("Opcao invalida para o primeiro atributo!\n");
            return 0;
    }

    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("\nErro: Os dois atributos devem ser diferentes!\n");
        return 0;
    }

    // Comparação do primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_c1 = carta1.populacao;
            valor1_c2 = carta2.populacao;
            break;
        case 2:
            valor1_c1 = carta1.area;
            valor1_c2 = carta2.area;
            break;
        case 3:
            valor1_c1 = carta1.pib;
            valor1_c2 = carta2.pib;
            break;
        case 4:
            valor1_c1 = carta1.pontos_turisticos;
            valor1_c2 = carta2.pontos_turisticos;
            break;
        case 5:
            valor1_c1 = carta1.densidade_demografica;
            valor1_c2 = carta2.densidade_demografica;
            break;
        default:
            printf("Atributo invalido!\n");
            return 0;
    }

    // Comparação do segundo atributo
    switch (opcao2) {
        case 1:
            valor2_c1 = carta1.populacao;
            valor2_c2 = carta2.populacao;
            break;
        case 2:
            valor2_c1 = carta1.area;
            valor2_c2 = carta2.area;
            break;
        case 3:
            valor2_c1 = carta1.pib;
            valor2_c2 = carta2.pib;
            break;
        case 4:
            valor2_c1 = carta1.pontos_turisticos;
            valor2_c2 = carta2.pontos_turisticos;
            break;
        case 5:
            valor2_c1 = carta1.densidade_demografica;
            valor2_c2 = carta2.densidade_demografica;
            break;
        default:
            printf("Atributo invalido!\n");
            return 0;
    }

    // Regra especial: densidade demográfica (menor = melhor)
    float pontos1 = 0, pontos2 = 0;
    pontos1 += (opcao1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    pontos2 += (opcao1 == 5) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);

    pontos1 += (opcao2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    pontos2 += (opcao2 == 5) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n=== Resultado da Comparacao ===\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Carta 2: %s\n\n", carta2.nome);
    printf("Atributo 1: Valor Carta 1 = %.2f | Valor Carta 2 = %.2f\n", valor1_c1, valor1_c2);
    printf("Atributo 2: Valor Carta 1 = %.2f | Valor Carta 2 = %.2f\n", valor2_c1, valor2_c2);
    printf("------------------------------------------\n");
    printf("Soma dos atributos: Carta 1 = %.2f | Carta 2 = %.2f\n", soma1, soma2);
    printf("------------------------------------------\n");

    if (soma1 > soma2)
        printf("Vencedor: Carta 1 (%s)\n", carta1.nome);
    else if (soma2 > soma1)
        printf("Vencedor: Carta 2 (%s)\n", carta2.nome);
    else
        printf("Empate!\n");

    return 0;
}
