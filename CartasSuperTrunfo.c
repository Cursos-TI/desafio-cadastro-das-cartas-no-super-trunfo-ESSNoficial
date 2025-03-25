#include <stdio.h>

int main() {
    // Variáveis para a primeira carta
    char estado1, codigo1[4], nomeCidade1[30];
    unsigned long int populacao1;
    int numPontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

    // Variáveis para a segunda carta
    char estado2, codigo2[4], nomeCidade2[30];
    unsigned long int populacao2;
    int numPontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    // Entrada de dados para a primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (letra única): ");
    scanf(" %c", &estado1);

    printf("Código (3 caracteres): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);

    // Cálculos da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + numPontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados para a segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (letra única): ");
    scanf(" %c", &estado2);

    printf("Código (3 caracteres): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    // Cálculos da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + numPontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos resultados da comparação
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numPontosTuristicos1 > numPontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2); // Correção aqui
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
