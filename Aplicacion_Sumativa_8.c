#include <stdio.h>


/* Funcion */
	void table(int numero);
	
	void table(int numero){
		
			int resultado;
			int i;
			
			for (i=1 ; i<11 ; i++){
				resultado = numero * i;
				printf("%d X %d = %d\n",numero,i,resultado);
			}
	}

/* Aplicativo */
	int main() {
		
		printf("Tabla de multiplicar del 1 al 10\n\n");
		printf("Ingrese el numero que desea multiplicar: ");
	
		int entero;
		
		scanf("%d",&entero);
		
		/* Validar que solo se ingresen numeros positivios */
		while (entero < 0) {
			printf("Solo se permiten numeros positivos:\n");	
			scanf("%d",&entero);
		}
		
		table(entero);
		
	return 0;
	}


