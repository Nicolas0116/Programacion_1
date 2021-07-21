#include <stdio.h>


int main() {
	
	int numero ;
	int * pointer_to_n = &numero;
		
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		
		if(numero == 15){
		printf("\nQuince");
		} else {
			*pointer_to_n = numero*numero*numero;
			printf("\nNumero elevado al cubo es: %d",numero);
		}
		
	
	return 0;

}
