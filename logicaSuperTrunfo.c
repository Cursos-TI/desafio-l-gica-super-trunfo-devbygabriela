#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estadoA[3], estadoB[3];
    char codigoA[5], codigoB[5];
    char nomeA[50], nomeB[50];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    float densidadeA, densidadeB;
    float pibPerCapitaA, pibPerCapitaB;

    // Cadastro das Cartas
    sprintf(estadoA, "SP");
    sprintf(estadoB, "RJ");
    sprintf(codigoA, "A01");
    sprintf(codigoB, "A02");
    sprintf(nomeA, "São Paulo");
    sprintf(nomeB, "Rio de Janeiro");

    populacaoA = 12300000;
    populacaoB = 6748000;
    areaA = 1521.11;
    areaB = 1200.27;
    pibA = 699000.0;
    pibB = 364000.0;
    pontosTuristicosA = 25;
    pontosTuristicosB = 20;

    // Cálculos dos atributos derivados
    densidadeA = populacaoA / areaA;
    densidadeB = populacaoB / areaB;

    pibPerCapitaA = pibA / populacaoA;
    pibPerCapitaB = pibB / populacaoB;

    // Escolha do atributo para comparação
    // Opções: populacao, area, pib, densidade, pibPerCapita
    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Carta 1: %s (%s)\n", nomeA, estadoA);
    printf("Carta 2: %s (%s)\n\n", nomeB, estadoB);

    printf("Atributo comparado: População\n");
    printf("%s: %d habitantes\n", nomeA, populacaoA);
    printf("%s: %d habitantes\n\n", nomeB, populacaoB);

    // Comparação das Cartas usando if e if-else
    if (populacaoA > populacaoB) {
        printf("Resultado: %s venceu!\n", nomeA);
    } else if (populacaoB > populacaoA) {
        printf("Resultado: %s venceu!\n", nomeB);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Exibição dos Resultados
    printf("\n===== FIM DA COMPARAÇÃO =====\n");

    return 0;
}
