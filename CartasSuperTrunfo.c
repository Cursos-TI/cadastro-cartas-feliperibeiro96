#include <stdio.h>

typedef struct {
    char estado[3];          // Ex: A a H
    char codigo[10];          // Ex: A01, B02
    char cidade[50];         // Nome da Cidade
    int populacao;           // População
    float area;              // Área
    float pib;               // PIB
    int pontosTuristicos;    // Número de pontos turísticos
} Carta;

int main() {
    Carta carta1, carta2;

    printf("=== Cadastro de Cartas Super Trunfo - Paises ===\n\n");

    // Cadastro da primeira carta
    printf("Vamos começar com a primeira carta, digite o estado (Uma letra de 'A' a 'H'): ");
    scanf(" %s", carta1.estado);
    
    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &carta1.cidade);

    printf("Digite a população: ");
    scanf(" %d", &carta1.populacao);

    printf("Digite a área: ");
    scanf(" %f", &carta1.area);

    printf("Digite o PIB: ");
    scanf(" %f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta1.pontosTuristicos);

    printf("\n");

    // Cadastro da segunda carta
    printf("Agora vamos para a Carta 2: \n\n");

    printf("Digite o Estado (uma letra de 'A' a 'H'): ");
    scanf(" %s", carta2.estado);
    
    printf("Digite o código da segunda carta (ex: B02): ");
    scanf(" %s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &carta2.cidade);
    
    printf("Digite a população: ");
    scanf(" %d", &carta2.populacao);

    printf("Digite a área: ");
    scanf(" %f", &carta2.area);

    printf("Digite o PIB: ");
    scanf(" %f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta2.pontosTuristicos);

    // Exibindo os dados
    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("Carta 1\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}