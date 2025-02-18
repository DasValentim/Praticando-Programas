#include <stdio.h>
#include <stdlib.h>

int main(){
	
	while(1){
		
		int ponto = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, menu = 0;
		
		printf("BEM VINDO AO MENU! \n");
		printf("1 - Inicio. \n");
		printf("2 - Sair. \n");
		scanf("%d", &menu);
		
		if(menu >= 3){
			printf("Numero invalido tente novamente! \n1 - Inicio. \n2 - Sair. \n");
			scanf("%d", &menu);
		}
		
		if(menu <= 0){
			printf("Numero invalido tente novamente! \n1 - Inicio. \n2 - Sair. \n");
			scanf("%d", &menu);
		}
		
		if(menu == 2){
			printf("Saindo... \n");
			break;
		} else {
			printf("\nQuem disse isso: Quem vai encarar o campeao? \n1 - Nasus. \n2 - Jax. \n3 - Garen. \n4 - Kayn. \n");
			scanf("%d", &p1);
			
			switch (p1){
				case 1:
					printf("\nerrou! \n");
					break;
				case 2:
					printf("\nacertou! \n");
					ponto ++;
					break;
				case 3:
					printf("\nerrou! \n");
					break;
				case 4:
					printf("\nerrou! \n");
					break;
			}
			printf("\nQuem disse isso: Domine a si mesmo e dominara o inimigo. \n1 - Ryze. \n2 - Lee sin. \n3 - Camile. \n4 - Kayn. \n");
			scanf("%d", &p2);
			
			switch (p2){
				case 1:
					printf("\nerrou! \n");
					break;
				case 2:
					printf("\nacertou! \n");
					ponto ++;
					break;
				case 3:
					printf("\nerrou! \n");
					break;
				case 4:
					printf("\nerrou! \n");
					break;
			}
			
			printf("\nQuem disse isso: As pessoas buscam por uma forca que ja existe dentro delas. \n1 - Phanteon. \n2 - Azir. \n3 - Swain. \n4 - Ezreal. \n");
			scanf("%d", &p3);
			
			switch (p3){
				case 1:
					printf("\nacertou! \n");
					ponto ++;
					break;
				case 2:
					printf("\nerrou! \n");
					break;
				case 3:
					printf("\nerrou! \n");
					break;
				case 4:
					printf("\nerrou! \n");
					break;
			}
			
			printf("\nQuem disse isso: Se estiverem esperando que eu desista, e bom esperarem sentados. \n1 - Jayce. \n2 - Sivir. \n3 - Jarvan. \n4 - Poppy. \n");
			scanf("%d", &p4);
			
			switch (p4){
				case 1:
					printf("\nerrou! \n");
					break;
				case 2:
					printf("\nerrou! \n");
					break;
				case 3:
					printf("\nerrou! \n");
					break;
				case 4:
					printf("\nacertou! \n");
					ponto ++;
					break;
			}	
			
		}
		printf("\nVoce conquistou %d pontos. \n \n", ponto);
		
	}
}
