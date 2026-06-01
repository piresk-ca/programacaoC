#include <stdio.h>

 /*
   O desafio consiste no cadastro de duas cartas, por exemplo:

   Carta 1
   Estado (char): Bahia
   Código (char[]): A01
   Nome da Cidade (char[]): Salvador
   População (int): 12345678
   Área (float): 1234.56 km²
   PIB (float): 8765.54 bilhões de reais
   Número de Pontos Turísticos (int): 90
 */

    // Definição da estrutura das cartas
    struct Carta {
        char estado[20];
        char UF[3];
        char cidade[30];
        char DDD[4];
        char codigo[8];
        int populacao;
        float area;
        float PIB;
        int turisticos;
    };

int main(){
   
    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2. variavel3)

   %d: Imprime um inteiro no formato decimal.
   %i: Equivale a %d.
   %f: Imprime um número de ponto flutuante no formato padrão.
   %e: Imprime um número de ponto flutuante na notação científica.
   %c: Imprime um único caractere.
   %s: Imprime uma cadeia (string) de caracteres.
   
    */


    // Importante ter definido as variáveis de struct antes do main, para que seja possível criar as variáveis do tipo struct dentro do main.
    struct Carta carta1, carta2;

    // Carta 1

    printf("** Cadastre sua Carta 1! ** \n");

    printf("Digite seu Estado: \n");
    scanf("%s", carta1.estado);

    printf("Digite seu UF: \n");
    scanf("%2s", carta1.UF);

    printf("Digite sua Cidade: \n");
    scanf("%s", carta1.cidade);

    printf("Digite seu DDD: \n");
    scanf("%3s", carta1.DDD);
    snprintf(carta1.codigo, sizeof(carta1.codigo), "%s%s", carta1.UF, carta1.DDD);

    printf("Digite a população de sua cidade: \n");
    scanf("%d", &carta1.populacao);

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &carta1.turisticos);

    /* O .2 antes do f indica que o número de casas decimais a ser exibido é 2, 
    o número será arredondado para duas casas decimais. Por exemplo, se a área 
    for 1234.5678, ela será exibida como 1234.57. */
    printf("Digite área de sua cidade: \n");
    scanf("%f", &carta1.area);

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &carta1.PIB);


    // Carta 2

    printf("** Cadastre sua Carta 2! ** \n");

    printf("Digite seu Estado: \n");
    scanf("%s", carta2.estado);

    printf("Digite seu UF: \n");
    scanf("%2s", carta2.UF);

    printf("Digite sua Cidade: \n");
    scanf("%s", carta2.cidade);

    printf("Digite seu DDD: \n");
    scanf("%3s", carta2.DDD);
    snprintf(carta2.codigo, sizeof(carta2.codigo), "%s%s", carta2.UF, carta2.DDD);

    printf("Digite a população de sua cidade: \n");
    scanf("%d", &carta2.populacao);

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &carta2.turisticos);

    printf("Digite área de sua cidade: \n");
    scanf("%f", &carta2.area);

    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &carta2.PIB);


    // Exibindo as cartas
    printf("\n");
    printf("CARTA 01 \n");
    printf("Estado: %s \n", carta1.estado);
    printf("Cidade: %s \n", carta1.cidade);
    printf("Código: %s \n", carta1.codigo);
    printf("População: %d \n", carta1.populacao);
    printf("Pontos Turísticos: %d \n", carta1.turisticos);
    printf("Área: %.2f \n", carta1.area);
    printf("PIB: %.2f \n", carta1.PIB);
    printf("Densidade Populacional: %.2f hab/km² \n", carta1.populacao / carta1.area);
    printf("PIB per capita: %.2f reais \n", carta1.PIB / carta1.populacao); 

    printf("\n");
    printf("CARTA 02 \n");
    printf("Estado: %s \n", carta2.estado);
    printf("Cidade: %s \n", carta2.cidade);
    printf("Código: %s \n", carta2.codigo);
    printf("População: %d \n", carta2.populacao);
    printf("Pontos Turísticos: %d \n", carta2.turisticos);
    printf("Área: %.2f \n", carta2.area);
    printf("PIB: %.2f \n", carta2.PIB);
    printf("Densidade Populacional: %.2f hab/km² \n", carta2.populacao / carta2.area);
    printf("PIB per capita: %.2f reais \n", carta2.PIB / carta2.populacao);

    return 0;



}