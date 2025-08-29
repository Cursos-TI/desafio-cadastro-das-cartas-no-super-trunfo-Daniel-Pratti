#include <stdio.h>
int main (){
    
    printf(" - BEM VINDO AO SUPER TRUNFO DE CIDADES BRASILEIRAS!\n");   //Essa parte incial é apenas a introdução para o usuário
    printf(" - Você irá cadastrar 2 cartas de cidades.\n");
    printf(" - Cada carta deverá conter as seguintes informações.\n\n");
    printf(" __________________________________________________________________________\n");
    printf("| - Estado: uma letra de 'A' a 'H'           |Obs:representa um dos estados|\n");
    printf("| - Código da Carta:número de 01 a 04        |Ex:  01, 03                  |\n");
    printf("| - Nome da Cidade: o Nome da cidade         |Ex:  Vitória                 |\n");
    printf("| - População: número de habitantes          |Ex:  4575231                 |\n");
    printf("| - Área: em km²                             |Ex:  4331.5                  |\n");
    printf("| - PIB: Produto Interno Bruto da cidade     |Ex:  12345.67                |\n");
    printf("| - Pontos Turísticos: número de pontos      |Ex:  15                      |\n"); //Espaço extra para melhor visualização
    printf(" ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n\n");
    printf("Agora vamos cadastrar a primeira carta:\n\n");


    int população_1, pontos_turisticos_1;                 // Declaração de variáveis da primeira carta
    float area_1, pib_1;
    char estado_1, codigo_1[10], cidade_1[20];

    
    int população_2, pontos_turisticos_2;                 // Declaração de variáveis da segunda carta
    float area_2, pib_2;
    char estado_2, codigo_2[10], cidade_2[20];

 
    
    printf("Digite o nome da cidade:");                           // Coleta de dados para primeira carta
    scanf("%s", cidade_1);

    printf("Digite a sigla do estado(A-H):");
    scanf(" %c", &estado_1);

    printf("Digite um código(01 a 04):");
    scanf("%s", codigo_1);

    printf("Digite a população:");
    scanf("%d", &população_1);

    printf("Digite a área:");
    scanf("%f", &area_1);

    printf("Digite o PIB:");
    scanf("%f", &pib_1);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontos_turisticos_1);

    printf("\nAgora vamos cadastrar a segunda carta:\n\n");            // Coleta de dados para segunda carta

    printf("Digite o nome da cidade:");
    scanf("%s", cidade_2);

    printf("Digite a sigla do estado(A-H):");
    scanf(" %c", &estado_2);

    printf("Digite um código(01 a 04):");
    scanf("%s", codigo_2);

    printf("Digite a população:");
    scanf("%d", &população_2);

    printf("Digite a área:");
    scanf("%f", &area_2);

    printf("Digite o PIB:");
    scanf("%f", &pib_2);

    printf("Digite os pontos turísticos:");
    scanf("%d", &pontos_turisticos_2);
    printf("\n\n");                                           // Quebra de linha para melhor visualização

    printf("Cadastro concluído! Aqui estão as cartas:\n\n");

    printf("\nPrimeira Carta:\n\n");                            // Exibição dos dados da primeira carta
    printf("Cidade: %s\n", cidade_1);
    printf("Estado: %c\n", estado_1);
    printf("Código: %c%s\n",estado_1, codigo_1);
    printf("População: %d\n", população_1);
    printf("Área: %.3f km²\n", area_1);
    printf("PIB: %.3f\n", pib_1);
    printf("Pontos Turísticos: %d\n\n", pontos_turisticos_1);

    printf("\nSegunda Carta:\n\n");                            // Exibição dos dados da segunda carta
    printf("Cidade: %s\n", cidade_2);
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n",estado_2, codigo_2);
    printf("População: %d\n", população_2);
    printf("Área: %.3fkm²\n", area_2);
    printf("PIB: %.3f\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);




    return 0;

}