#include <stdio.h>
   
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

int npt1, npt2, Rpopulacao, Rarea, Rpib, Rpt, Rdp, Rrpc, Rsuper;
float areaemkm1, areaemkm2, dpp1, dpp2, populaçao1, populaçao2;
char estado1[50], estado2[50], codigo1[50], codigo2[50], ndc1[50], ndc2[50];
double pibpc1, pibpc2, superpoder1, superpoder2, pib1, pib2;

printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado1);
//RJ

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%s", codigo1);
//RJ01

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%s", ndc1);
//VR

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n");
scanf("%f", &populaçao1);
//280.000

printf("DIGITE A ÁREA EM KM2: \n");
scanf("%f", &areaemkm1);
//182,105 km2

printf("DIGITE O PIB: \n");
scanf("%lf", &pib1);
//R$ 15.000.000.000

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &npt1);
//10

dpp1 = (float)(populaçao1 / areaemkm1);

pibpc1 = (double)(pib1 / populaçao1);

superpoder1 = (double)(populaçao1 + areaemkm1 + pib1 + npt1 + dpp1 + pibpc1);



printf("DIGITE O NOME DO ESTADO: \n");
scanf("%s", estado2);
//RJ

printf("DIGITE O CODIGO DA CARTA: \n");
scanf("%s", codigo2);
//RJ02

printf("DIGITE O NOME DA CIDADE: \n");
scanf("%s", ndc2);
//RESENDE

printf("DIGITE A QUANTIDADE DE POPULAÇÃO: \n");
scanf("%f", &populaçao2);
//130.000

printf("DIGITE A ÁREA EM KM2: \n");
scanf("%f", &areaemkm2);
//1.099 km2

printf("DIGITE O PIB: \n");
scanf("%lf", &pib2);
//R$ 12.000.000.000

printf("DIGITE A QUANTIDADE DE PONTOS TURISTICOS: \n");
scanf("%d", &npt2);
//5


dpp2 = (float)(populaçao2 / areaemkm2);

pibpc2 = (float)(pib2 / populaçao2);

superpoder2 = (float)(populaçao2 + areaemkm2 + pib2 + npt2 + dpp2 + pibpc2);

//COMPARAÇAO

Rpopulacao = populaçao1 > populaçao2;
Rarea = areaemkm1 > areaemkm2;
Rpib = pib1 > pib2;
Rpt = npt1 > npt2;
Rdp = dpp1 < dpp2;
Rrpc = pibpc1 > pibpc2;
Rsuper = superpoder1 > superpoder2;

printf("\n=========================================================\n");
printf("                DADOS DA CARTA  1                     ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado1);
printf("CODIGO DA CARTA: %s\n", codigo1);
printf("CIDADE: %s\n", ndc1);
printf("POPULAÇÃO: %.0f\n", populaçao1);
printf("ÁREA (KM2): %.0f\n", areaemkm1);
printf("PIB ($): %.0lf\n", pib1);
printf("PONTOS TURISTICOS: %d\n", npt1);
printf("Densidade populacional: %.4f\n", dpp1);
printf("PIB per cápita: %.0lf\n", pibpc1);
printf("SuperPoder: %.0lf\n", superpoder1);

printf("\n=========================================================\n");
printf("                DADOS DA CARTA  2                    ");
printf("\n=========================================================\n");

printf("ESTADO: %s\n", estado2);
printf("CODIGO DA CARTA: %s\n", codigo2);
printf("CIDADE: %s\n", ndc2);
printf("POPULAÇÃO: %.0f\n", populaçao2);
printf("ÁREA (KM2): %.0f\n", areaemkm2);
printf("PIB ($): %.0lf\n", pib2);
printf("PONTOS TURISTICOS: %d\n", npt2);
printf("Densidade populacional: %.4f\n", dpp2);
printf("PIB per cápita: %.0lf\n", pibpc2);
printf("SuperPoder: %.0lf\n", superpoder2);

//CARTA 1 X CARTA 2

printf("\n=========================================================\n");
printf("                RJ01 = 1 X RJ02 = 0                   ");
printf("\n=========================================================\n");

printf("POPULACAO: %d\n", Rpopulacao);
printf("AREA EM KM2: %d\n", Rarea);
printf("PIB EM R$: %d\n", Rpib);
printf("PONTOS TURISTICOS: %d\n", Rpt);
printf("DENSIDADE POPULACIONAL: %d\n", Rdp);
printf("PIB PER CAPITA: %d\n", Rrpc);
printf("SUPERPODER: %d\n", Rsuper);

return 0;

}