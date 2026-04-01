#include <stdio.h>

/*Criando as Cartas do Super Trunfo. 
Sistema para cadastrar as informações das cartas*/ 

int main() {

    // Declaração das variáveis para as duas cartas do Super Trunfo.
    //Desafio nível novato
    
    char estado1, estado2; 
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    //adicionado - Desafio: nível aventureiro
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    //adicionado -  Desafio: nível Mestre
    float superpoder1, superpoder2;
    superpoder1 = (int) populacao1 + area1 + pib1 + pontosTuristicos1 + (1 / densidadePopulacional1);
    superpoder2 = (int) populacao2 + area2 + pib2 + pontosTuristicos2 + (1 / densidadePopulacional2);

    // Entrada de dados da carta 1.
    printf("Insira os dados da Carta 1 \n");
    printf("Estado (Digite uma letra de A a H): "); // representando um dos oito estados.
    scanf(" %c", &estado1); //recebe a letra escolhida pelo usuario 
    printf("Código da Carta - Digite um número de 01 a 04: ");
    scanf("%s", codigo1);   //recebe o numero do codigo.
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);  // recebe dados informando o nome da cidade
    printf("População - número de habitantes da cidade: "); 
    scanf("%d", &populacao1);   // recebe dados com o número de habitantes da cidade
    printf("Área da cidade em km²: ");
    scanf("%f", &area1);    // recebe dados do Tamanho da A área da cidade em quilômetros quadrados
    printf("PIB: ");
    scanf("%f", &pib1); // recebe dados do valor do PIB. Ogrigatorio receber todos os digitos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  // recebe dados com a quantidade de pontos turísticos na cidade.
     // Cálculo da Densidade Populacional e PIB per Capita  - Carta 1.
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1 / populacao1; // PIB em reais

    // Exibição dos dados da carta 1.
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    //adicionado - Desafio: nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Entrada de dados da carta 2.
    printf("\nInsira os dados da Carta 2 \n");
    printf("Estado (Digite uma letra de A a H): ");    // representando um dos oito estados.
    scanf(" %c", &estado2); //recebe a letra escolhida pelo usuario. 
    printf("Código da Carta - Digite um número de 01 a 04: ");
    scanf("%s", codigo2);   //recebe o numero do codigo.
    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);  // recebe dados informando o nome da cidade.
    printf("População - número de habitantes da cidade: ");
    scanf("%d", &populacao2);   // recebe dados com o número de habitantes da cidade.
    printf("Área da cidade em km²: ");
    scanf("%f", &area2);    // recebe dados do Tamanho da A área da cidade em quilômetros quadrados.
    printf("PIB: ");
    scanf("%f", &pib2); // recebe dados do valor do PIB. Ogrigatorio receber todos os digitos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);// recebe dados com a quantidade de pontos turísticos na cidade.
    // Cálculo da Densidade Populacional e PIB per Capita - Carta 2.
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2 / populacao2; // PIB em reais

    // Exibição dos dados da carta 2.
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %C%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    //adicionado - Desafio: nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    //adicionado - Desafio: nível aventureiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    /*comparacao de atributos das carta1 vs carta2
    utilizando operadores relacionais*/

    printf("comparacao carta1 v carta2 \n");
    printf("resultado 1 a carta1 ganha, resultado 0 a carta2 ganha \n\n");

    printf("Atributo Populacão carta 1 > carta 2: %d\n", populacao1 > populacao2);
    printf("Atributo Area carta 1 > carta 2: %d\n", area1 > area2);
    printf("Atributo PIB carta 1 > carta 2: %d\n", pib1 > pib2) ;
    printf("Atributo Ponto Turistico carta 1 > carta 2: %d\n", pontosTuristicos1 > pontosTuristicos2) ;
    printf("Atributo Dencidade Populacional carta 1 < carta 2: %d\n", densidadePopulacional1 < densidadePopulacional2) ;
    printf("Atributo Super Poder carta 1 > carta 2: %d\n",superpoder1 > superpoder2) ;

    printf("Fim");
   
    
   
    

    return 0;
}
