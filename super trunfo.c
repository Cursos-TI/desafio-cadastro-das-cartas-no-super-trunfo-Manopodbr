#include <stdio.h>
int main(){
 
printf("Desafio Super Trunfo!\n");

char estado[15];
char codigo[10];
char nome[20];
int pop;
float km;
float pib;
int tur;

printf("Qual o estado da sua cidade: ");
scanf("%s", &estado);
printf("O estado é: %s", estado);

printf("\nQual o código do seu estado: ");
scanf("%s", &codigo);
printf("O código do estado é: %s", codigo);

printf("\nQual o nome da sua cidade: ");
scanf("%s", &nome);
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

printf("\nQuantos pontos turísticos a sua cidade tem: ");
scanf("%d", &tur);
printf("A cidade tem %d pontos turísticos", tur);

printf("\n\nObrigado por participar do desafio Super Trunfo!\n");
}