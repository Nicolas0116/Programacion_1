#include <stdio.h>


int main() {
	
	int numeros[10];
	int i;
	int may = 0;
	int serie = 0;
	
		printf("Ingrese 10 numeros:\n");
		
			/* Ingreso de los 10 numeros */		
			for(i=0;i<10;i++){
				scanf("%d",&numeros[i]);
			}
			
			/* Ciclo para saber el numero mayor */
 			for(i=1;i<9;i++){
				if(numeros[may]>=numeros[i]){
					may = may;
				} else { may = i;
					}
			}
			
			/* Ciclo para saber la cantidad de veces que se repite*/
			for(i=0;i<10;i++){
				if(numeros[may] == numeros[i]){
					serie = serie + 1;
				} else {
					serie = serie;
				}
			}
			
		printf("\nEl numero mayor es %d",numeros[may]);
		
		if(serie == 1) {
			printf("\nEste numero se repite %d vez",serie);
		} else {
			printf("\nEste numero se repite %d veces",serie);
		}
		
			
		
	return 0;
}
