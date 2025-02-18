/*Programa que produz um formulario com os dados inseridos*/

#include <stdio.h>
#include <stdlib.h>
#define texto "Formulario!"

int main(int argc, char *argv[]) {
	
char nome[20] ="seu nome";
int idade = 0;
float peso = 0.0;
float altura = 0.0;

	printf("%s \n", texto);

	printf("Informe seu nome:\n");
	scanf("%s", &nome);
	
	printf("Informe sua idade:\n");
	scanf("%d", &idade);

	printf("Informe seu peso (kg):\n");
	scanf("%f", &peso);
	
	printf("Informe sua altura (cm)):\n");
	scanf("%f", &altura);
	
	printf("Dados informados:\n");
	printf("Seu nome: %s.\n", nome);
	printf("Sua idade: %d anos.\n", idade);	
	printf("Seu peso: %.2f kg.\n", peso);
	printf("Sua altura: %.2f cm.\n", altura);
	
	system("pause");
	return 0;
}
