#include <stdio.h>
   
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    int populaçao1, populaçao2, npt1, npt2;
    float areaemkm1, areaemkm2, pib1, pib2;
    char estado1[50], estado2[50], codigo1[50], codigo2[50], ndc1[50], ndc2[50];


printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado1);

printf("DIGITE O CODIGO DA CARTA: \n", codigo1);
scanf("%s", codigo1);

printf("DIGITE O NOME DA CIDADE: \n", ndc1);
scanf("%s", ndc1);

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n", populaçao1);
scanf("%d", &populaçao1);

printf("DIGITE A ÁREA EM KM2: \n", areaemkm1);
scanf("%f", &areaemkm1);

printf("DIGITE O PIB: \n", pib1);
scanf("%f", &pib1);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: %d\n", npt1);
scanf("%d", &npt1);




printf("\n=========================================================\n");
printf("                DADOS DA CARTA                       ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigo1);
printf("CIDADE: %s\n", ndc1);
printf("POPULAÇÃO: %d\n", populaçao1);
printf("ÁREA (KM2): %.2f\n", areaemkm1);
printf("PIB ($): %.2f\n", pib1);
printf("PONTOS TURISTICOS: %d\n", npt1);


return 0;
} 
