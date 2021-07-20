#include <stdio.h>


/* Funcion */

	void calculo (int valor) {
			
			static int cifras = 1;
			
				while (valor/10 > 0){
					valor = valor / 10;
					cifras++;
				}
			
			printf("\nEste numero tiene %d cifras",cifras);
					
	}

/* Aplicacion */
	int main() {
		
			int valor;
			
			printf("Ingrese el valor numerico: ");
			
			scanf("%d",&valor);
			
			calculo(valor);
		
			
		return 0;
	}
