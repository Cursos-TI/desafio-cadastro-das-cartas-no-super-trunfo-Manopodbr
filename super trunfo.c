#include <stdio.h>
int main(){
 
printf("Desafio Super Trunfo!\n");
printf("Vamos cadastrar a carta 1\n");
char estado[15];
char codigo[10];
char nome[20];
int pop;
float km;
float pib;
int tur;

printf("Qual estado voçê é?: ");
scanf("%s", estado);
printf("O estado é: %s", estado);

printf("\nQual o código da carta: ");
scanf("%s", codigo);
printf("O código do estado é: %s", codigo);

printf("\nQual o nome da sua cidade: ");
scanf("%s", nome);
printf("O nome da cidade é: %s", nome);

printf("\nQual a população da sua cidade: ");
scanf("%d", &pop);
printf("A população da cidade é: %d", pop);

printf("\nQual a distância em km da sua cidade: ");
scanf("%f", &km);
printf("A distância em km da cidade é: %.2f", km);

printf("\nQual o PIB da sua cidade: ");
scanf("%f", &pib);
printf("O PIB da cidade é: %.2f", pib);
while (getchar() != '\n'); // limpa o buffer do teclado
printf("\nQuantos pontos turísticos a sua cidade tem: ");
scanf("%d", &tur);
printf("A quantidade de pontis turisticos é: %d", tur);
printf("\nCadastro da carta 1 concluído!\n");

printf("Vamos cadastrar a carta 2\n");


char estado2[15];
char codigo2[10];
char nome2[20];
int pop2;
float km2;
float pib2;
int tur2;

printf("Qual estado voçê é?: ");
scanf("%s", estado2);
printf("O estado é: %s", estado2);       

printf("\nQual o código da carta: ");
scanf("%s", codigo2);
printf("O código do estado é: %s", codigo2);        

printf("\nQual o nome da sua cidade: ");
scanf("%s", nome2);
printf("O nome da cidade é: %s", nome2);

printf("\nQual a população da sua cidade: ");
scanf("%d", &pop2);
printf("A população da cidade é: %d", pop2);

printf("\nQual a distância em km da sua cidade: ");
scanf("%f", &km2);
printf("A distância em km da cidade é: %.2f", km2); 

printf("\nQual o PIB da sua cidade: ");
scanf("%f", &pib2);
printf("O PIB da cidade é: %.2f", pib2);

while (getchar() != '\n'); // limpa o buffer do teclado
printf("\nQuantos pontos turísticos a sua cidade tem: ");
scanf("%d", &tur2);
printf("A quantidade de pontis turisticos é: %d", tur2);
printf("\nCadastro da carta 2 concluído!\n");






return 0;
}

