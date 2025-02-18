/*Programa que calcula o aumento de salario em porcentagem!*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float sal, perc, aumento, novo_sal;
	
	printf("Digite o salário:\n");
	scanf("%f", &sal);
	printf("Digite a porcentagem de aumento salárial:\n");
	scanf("%f", &perc);
	
	aumento = (perc / 100) * sal;
	
	novo_sal = aumento + sal;
	
	printf("Resultados:\n");
	printf("Salário antigo: %.2f\n", sal);
	printf("Salário novo: %.2f\n", novo_sal);
	printf("Aumento aplicado: +%.2f\n", aumento);	
	
	system("pause");
	return 0;
}
