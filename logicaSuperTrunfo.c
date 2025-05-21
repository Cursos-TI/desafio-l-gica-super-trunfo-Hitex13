#include <stdio.h>

int main (){

char Estado1[40] ,cidade1[40] ;
int Populaçao1, Codigo1 ,Turisticos1 ;
float Pib1 ,area1 ,Densidade ,Capita ;
printf ("Carta 1\n");

printf("Digite o Estado De Sua carta\n");
fgets(Estado1, sizeof(Estado1), stdin);

printf("Digite agr a cidade da sua carta\n");
fgets(cidade1, sizeof(cidade1), stdin);

printf("Digite o Codigo de sua carta\n");
scanf(" %d", &Codigo1);

printf("Digite a Populaçao dessa cidade\n");
scanf(" %d", &Populaçao1);

printf("Digite a Area\n");
scanf(" %f", &area1);

printf("Digite o Pib \n");
scanf(" %f", &Pib1);
printf("Quantos pontos turisticos essa cidade tem\n");
scanf(" %d", &Turisticos1);

Densidade = (float)Populaçao1/area1;
Capita = (float)Pib1/Populaçao1;

printf("|Codigo - %.1s0%d\n|Estado - %s|Cidade - %s|Habitantes - %d\n|Area - %.2f\n",Estado1 ,Codigo1 ,Estado1 ,cidade1 ,Populaçao1 ,area1 );
printf("|Pontos Turisticos - %d\n|Densidade Populacional - %.4f Hab.Km2 \n|Pib per Capita - %f Reais\n \n",Turisticos1 ,Densidade, Capita);  

getchar();

char Estado2[40] ,cidade2[40];
int Populaçao2 ,Codigo2 ,Turisticos2;
float area2 ,Pib2, Densidade2 ,Capita2;

printf ("Carta 2\n");

getchar();

printf("Digite o Estado De sua segunda carta\n");
fgets(Estado2, sizeof(Estado2), stdin);

printf("Digite agr a cidade da sua carta\n");
fgets(cidade2, sizeof(cidade2), stdin);



printf("Digite o Codigo de sua carta\n");
scanf(" %d", &Codigo2);

printf("Digite a Populaçao dessa cidade\n");
scanf(" %d", &Populaçao2);

printf("Digite a Area\n");
scanf(" %f", &area2);

printf("Digite o Pib \n");
scanf(" %f", &Pib2);
printf("Quantos pontos turisticos essa cidade tem\n");
scanf(" %d", &Turisticos2);

Densidade2 = (float)Populaçao2/area2;
Capita2 = (float)Pib2/Populaçao2;
printf("|Codigo - %.1s0%d\n|Estado - %s|Cidade - %s|Habitantes - %d\n|Area - %.2f\n|Pontos Turisticos - %d\n|Densidade Populacional - %.4f Hab.Km2\n|Pib per Capita - %.2f Reais\n\n",Estado2 ,Codigo2 ,Estado2 ,cidade2 ,Populaçao2 ,area2 ,Turisticos2 ,Densidade2 ,Capita2);

printf("\nMuito Obrigado Por utilizar o Meu codigo ");
int Superpoder = ((float)Populaçao1+area1+Pib1+Capita+(1/Densidade)+Turisticos1) > (Populaçao2+area2+Pib2+Capita2+(1/Densidade2)+Turisticos2);

printf("Comparaçao Das Cartas\n|Numeros de Habitantes Carta 1 venceu %u \n|Area Da Cidade Carta 1 venceu %u\n|Pib Carta 1 venceu %u Pontos Turísticos: Carta 1 venceu (%u)\n|Densidade Populacional: Carta 1 venceu (%u)\n|PIB per Capita: Carta 1 venceu (%u)\nSuper Poder: Carta 1 venceu (%d)",Populaçao1 > Populaçao2 ,area1 > area2 ,Pib1 > Pib2 ,Turisticos1 > Turisticos2 ,Densidade > Densidade2 ,Capita > Capita2 ,Superpoder );


return 0;
}