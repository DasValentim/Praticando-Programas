/*programa que receba quatro n�meros inteiros, calcule e mostre a soma desses n�meros.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, num4, soma;
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%d", &num1);
	printf("Informe o segundo n�mero:\n");
	scanf("%d", &num2);
	printf("Informe o terceiro n�mero:\n");
	scanf("%d", &num3);
	printf("Informe o quarto n�mero:\n");
	scanf("%d", &num4);
	
	soma = num1 + num2 + num3 + num4;
	
	printf("Resultado: %d + %d + %d + %d = %d.\n", num1, num2, num3, num4, soma);
	
	system("pause");
	return 0;
}
