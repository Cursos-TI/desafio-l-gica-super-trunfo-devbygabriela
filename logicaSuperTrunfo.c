#include <stdio.h>

int main() {
    // Cadastro da Carta 1
    char estadoA[] = "SP";
    char codigoA[] = "A01";
    char nomeA[] = "São Paulo";
    int populacaoA = 12300000;
    float areaA = 1521.11;
    float pibA = 699000.0;
    int pontosTuristicosA = 25;

    // Cadastro da Carta 2
    char estadoB[] = "RJ";
    char codigoB[] = "A02";
    char nomeB[] = "Rio de Janeiro";
    int populacaoB = 6748000;
    float areaB = 1200.27;
    float pibB = 364000.0;
    int pontosTuristicosB = 20;

    // Cálculos automáticos
    float densidadeA = populacaoA / areaA;
    float densidadeB = populacaoB / areaB;
    float pibPerCapitaA = pibA / populacaoA;
    float pibPerCapitaB = pibB / populacaoB;

    // Comparação: População
    printf("===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Carta 1: %s (%s)\n", nomeA, estadoA);
    printf("Carta 2: %s (%s)\n\n", nomeB, estadoB);

    printf("Atributo comparado: População\n");
    printf("%s: %d habitantes\n", nomeA, populacaoA);
    printf("%s: %d habitantes\n\n", nomeB, populacaoB);

    if (populacaoA > populacaoB) {
        printf("Resultado: %s venceu!\n", nomeA);
    } else if (populacaoB > populacaoA) {
        printf("Resultado: %s venceu!\n", nomeB);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("\n===== FIM DA COMPARAÇÃO =====\n");

    return 0;
}
