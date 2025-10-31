#include <stdio.h>

int main() {

    // Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a primeira letra do estado (Entre A e H): ");
    scanf(" %c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome de uma cidade do estado escolhido: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite o número da população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite a primeira letra do estado (Entre A e H): ");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome de uma cidade do estado escolhido: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número da população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição das Cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
