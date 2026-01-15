#include <stdio.h>

// Declarando as Variáveis
typedef struct {
    char estado[3];                 // Ex: A a H
    char codigo[10];                // Ex: A01, B02
    char cidade[50];                // Nome da Cidade
    unsigned long int populacao;    // População
    float area;                     // Área
    float pib;                      // PIB
    int pontosTuristicos;           // Número de pontos turísticos
    float densidade;                // Densidade Populacional
    float pibPerCapita;             // PIB Per Capita
    float superPoder;               // Super Poder
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
    scanf(" %lu", &carta1.populacao);
    
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
    scanf(" %lu", &carta2.populacao);
    
    printf("Digite a área: ");
    scanf(" %f", &carta2.area);
    
    printf("Digite o PIB: ");
    scanf(" %f", &carta2.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &carta2.pontosTuristicos);
    
    // --- CÁLCULOS ---

    // Densidade Populacional e PIB per Capita
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000.0) / (float)carta1.populacao;

    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000.0) / (float)carta2.populacao;
    
    // Super Poder: Soma de todos os atributos (usando inverso da densidade)
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + 
    carta1.pontosTuristicos + carta1.pibPerCapita + (1.0f / carta1.densidade);
                    
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + 
    carta2.pontosTuristicos + carta2.pibPerCapita + (1.0f / carta2.densidade);
    
    // --- COMPARAÇÃO E RESULTADOS ---
    printf("\n=== Cartas Cadastradas ===\n\n");

    printf("* Carta 1 *\n\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.cidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade);
    printf("PIB Per Capita: %.2f milhões de reais\n", carta1.pibPerCapita);

    printf("\n* Carta 2 *\n\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.cidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade);
    printf("PIB Per Capita: %.2f milhões de reais\n", carta2.pibPerCapita);

    printf("\n=== Comparação de Cartas ===\n\n");

    // (Atributo1 > Atributo2) resulta em 1 (Verdadeiro) ou 0 (Falso)
    printf("População: Carta %d venceu (%d)\n", (carta1.populacao > carta2.populacao ? 1 : 2), carta1.populacao > carta2.populacao);
    printf("Área: Carta %d venceu (%d)\n", (carta1.area > carta2.area ? 1 : 2), carta1.area > carta2.area);
    printf("PIB: Carta %d venceu (%d)\n", (carta1.pib > carta2.pib ? 1 : 2), carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (carta1.pontosTuristicos > carta2.pontosTuristicos ? 1 : 2), carta1.pontosTuristicos > carta2.pontosTuristicos);
    
    // Na Densidade, vence quem tem o MENOR valor
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (carta1.densidade < carta2.densidade ? 1 : 2), carta1.densidade < carta2.densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (carta1.pibPerCapita > carta2.pibPerCapita ? 1 : 2), carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", (carta1.superPoder > carta2.superPoder ? 1 : 2), carta1.superPoder > carta2.superPoder);

    return 0;
}