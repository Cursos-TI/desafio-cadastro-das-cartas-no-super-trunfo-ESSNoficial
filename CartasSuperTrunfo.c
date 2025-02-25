#include <stdio.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[30];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

void imprimirCarta(struct Carta c) {
    
    printf("Carta:\n");
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.numPontosTuristicos);
    printf("\n");
}

int main() {
    struct Carta carta1 = {'A', "A01", "São Paulo", 12325000, 1521.11, 699.28, 50};
    struct Carta carta2 = {'B', "B02", "Rio de Janeiro", 6748000, 1200.25, 300.50, 30};

    imprimirCarta(carta1);
    imprimirCarta(carta2);

    return 0;
}
