#include <stdio.h>

// Desafio Super Trunfo - Países

struct Carta {
    char estado;                     // Estado (A-H)
    char codigo[4];                  // Código da carta
    char cidade[50];                 // Nome da cidade
    unsigned long int populacao;     // População da cidade
    float area;                      // Área em km²
    float pib;                       // PIB em bilhões de reais
    int pontosTuristicos;            // Número de pontos turísticos

    float densidadePop;              // Habitantes por km²
    float pibPerCapita;              // PIB per capita em reais
    float superPoder;                // Soma ponderada dos atributos
};

int main() {

    struct Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);

    printf("Codigo: ");
    scanf("%s", carta1.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    /* Cálculos da carta 1 */
    carta1.densidadePop = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1e9) / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib +
                        carta1.pontosTuristicos + carta1.pibPerCapita +
                        (1 / carta1.densidadePop);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);

    printf("Codigo: ");
    scanf("%s", carta2.codigo);

    printf("Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    /* Cálculos da carta 2 */
    carta2.densidadePop = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1e9) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib +
                        carta2.pontosTuristicos + carta2.pibPerCapita +
                        (1 / carta2.densidadePop);

    /* Comparações */
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n",
           carta1.pontosTuristicos > carta2.pontosTuristicos);

    /* Para densidade, o menor valor ganha */
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           carta1.densidadePop < carta2.densidadePop);

    printf("PIB Per Capita: Carta 1 venceu (%d)\n",
           carta1.pibPerCapita > carta2.pibPerCapita);

    printf("Super Poder: Carta 1 venceu (%d)\n",
           carta1.superPoder > carta2.superPoder);

    return 0;
}
