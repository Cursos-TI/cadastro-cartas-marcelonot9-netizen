#include <stdio.h>
   
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    int populaçao1, populaçao2, populaçao3, populaçao4, npt1, npt2, npt3, npt4;
    float areaemkm1, areaemkm2, areaemkm3, areaemkm4, pib1, pib2, pib3, pib4;
    char estado1[50], estado2[50], estado3[50], estado4[50], codigo1[50], codigo2[50], codigo3[50], codigo4[50], ndc1[50], ndc2[50], ndc3[50], ndc4[50];


printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado1);

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%s", codigo1);

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%s", ndc1);

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n");
scanf("%d", &populaçao1);

printf("DIGITE A ÁREA EM KM2: \n");
scanf("%f", &areaemkm1);

printf("DIGITE O PIB: \n");
scanf("%f", &pib1);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &npt1);




printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado2);

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%s", codigo2);

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%s", ndc2);

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n");
scanf("%d", &populaçao2);

printf("DIGITE A ÁREA EM KM2: \n");
scanf("%f", &areaemkm2);

printf("DIGITE O PIB: \n");
scanf("%f", &pib2);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &npt2);



printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado3);

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%s", codigo3);

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%s", ndc3);

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n");
scanf("%d", &populaçao3);

printf("DIGITE A ÁREA EM KM2: \n");
scanf("%f", &areaemkm3);

printf("DIGITE O PIB: \n");
scanf("%f", &pib3);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &npt3);



printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado4);

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%s", codigo4);

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%s", ndc4);

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n");
scanf("%d", &populaçao4);

printf("DIGITE A ÁREA EM KM2: \n");
scanf("%f", &areaemkm4);

printf("DIGITE O PIB: \n");
scanf("%f", &pib4);

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &npt4);



printf("\n=========================================================\n");
printf("                DADOS DA CARTA  1                     ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigo1);
printf("CIDADE: %s\n", ndc1);
printf("POPULAÇÃO: %d\n", populaçao1);
printf("ÁREA (KM2): %.2f\n", areaemkm1);
printf("PIB ($): %.2f\n", pib1);
printf("PONTOS TURISTICOS: %d\n", npt1);

printf("\n=========================================================\n");
printf("                DADOS DA CARTA  2                    ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado2);
printf("CODIGO DA CARTA: %s\n", codigo2);
printf("CIDADE: %s\n", ndc2);
printf("POPULAÇÃO: %d\n", populaçao2);
printf("ÁREA (KM2): %.2f\n", areaemkm2);
printf("PIB ($): %.2f\n", pib2);
printf("PONTOS TURISTICOS: %d\n", npt2);

printf("\n=========================================================\n");
printf("                DADOS DA CARTA  3                    ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado3);
printf("CODIGO DA CARTA: %s\n", codigo3);
printf("CIDADE: %s\n", ndc3);
printf("POPULAÇÃO: %d\n", populaçao3);
printf("ÁREA (KM2): %.2f\n", areaemkm3);
printf("PIB ($): %.2f\n", pib3);
printf("PONTOS TURISTICOS: %d\n", npt3);

printf("\n=========================================================\n");
printf("                DADOS DA CARTA  4                    ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado4);
printf("CODIGO DA CARTA: %s\n", codigo4);
printf("CIDADE: %s\n", ndc4);
printf("POPULAÇÃO: %d\n", populaçao4);
printf("ÁREA (KM2): %.2f\n", areaemkm4);
printf("PIB ($): %.2f\n", pib4);
printf("PONTOS TURISTICOS: %d\n", npt4);

return 0;
} 
