/*Programa recebe um tempo em segundos e retorna o valor em horas minutos e segundos. Ex: 3361 = 1 hora 1 minuto 1 segundo.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tempo, h, m, s, resto;
	
	printf("Escreva o tempo cronometrado em segundos:\n");
	scanf("%d", &tempo);
	
	h = tempo / 3600;
	m = (tempo / 60) - (60 * h);
	s = tempo - (h * 60 + m) * 60;
	
	printf("RESULTADO:\n");
	printf("Horas: %d.\n", h);
	printf("Minutos: %d.\n", m);
	printf("Segundos: %d.\n", s);
	
	system("pause");
	return 0;
}
