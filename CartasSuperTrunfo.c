#include <stdio.h>

int main() {
    
    char estadoC1[2], estadoC2[2];
    char codigoC1[4], codigoC2[4];
    char cidadeC1[50], cidadeC2[50];
    int populacaoC1, populacaoC2;
    float areaC1, areaC2;
    float pibC1, pibC2;
    int pontosTuristicosC1, pontosTuristicosC2;
    float densidadePopulacionalC1, densidadePopulacionalC2;
    float pibPerCapitaC1,pibPerCapitaC2;

    printf("Informe a letra do estado: \n");
    scanf("%s", estadoC1);

    printf("Informe o código da carta: \n");
    scanf("%s", codigoC1);

    printf("Informe o nome da cidade: \n");
    scanf("%s", cidadeC1);

    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacaoC1);

    printf("Informe a área em km²: \n");
    scanf("%f", &areaC1);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pibC1);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosC1);  

    densidadePopulacionalC1 = populacaoC1 / areaC1;
    pibPerCapitaC1 = pibC1 / populacaoC1;

    
    printf("------------------------------------------ \n");
    printf("Carta 1: \n Estado: %s \n", estadoC1);
    printf(" Código: %s \n Nome da Cidade: %s \n", codigoC1, cidadeC1);
    printf(" População: %d \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n", populacaoC1, areaC1, pibC1);
    printf(" Número de Pontos Turísticos: %d \n", pontosTuristicosC1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalC1);
    printf("PIB Per Capita: %.2f reais \n", pibPerCapitaC1);
    printf("------------------------------------------ \n");

    printf("Informe a letra do estado: \n");
    scanf("%s", estadoC2);

    printf("Informe o código da carta: \n");
    scanf("%s", codigoC2);

    printf("Informe o nome da cidade: \n");
    scanf("%s", cidadeC2);

    printf("Informe a população dessa cidade: \n");
    scanf("%d", &populacaoC2);

    printf("Informe a área em km²: \n");
    scanf("%f", &areaC2);

    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pibC2);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosC2);  

    densidadePopulacionalC2 = populacaoC2 / areaC2;
    pibPerCapitaC2 = pibC2 / populacaoC2;
    
    printf("------------------------------------------ \n");
    printf("Carta 1: \n Estado: %s \n", estadoC2);
    printf(" Código: %s \n Nome da Cidade: %s \n", codigoC2, cidadeC2);
    printf(" População: %d \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n", populacaoC2, areaC2, pibC2);
    printf(" Número de Pontos Turísticos: %d \n", pontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalC2);
    printf("PIB Per Capita: %.2f reais \n", pibPerCapitaC2);
    printf("------------------------------------------ \n");
    
    return 0;
}
