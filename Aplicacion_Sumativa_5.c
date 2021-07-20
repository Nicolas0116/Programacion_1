#include <stdio.h>
#include <string.h>
int main() {
	
	char palabra[] = "nicolas";
	char intento_p[255];
	int comparacion = 1;
	int intentos = 0;
	int longitud;
	
		printf("Adivina la palabra secreta\n\nTienes 3 intentos.\nToda la palabra es en minusculas.\n");
		longitud = strlen(palabra);
		printf("La palabra es de %d caracteres.\n\n",longitud);
		
		intentos = intentos + 1;
				
		while (intentos<=3) {
		
			printf("Intento %d\nIngrese la palabra \n",intentos);
			
			scanf("%s",&intento_p);
			
			comparacion = strcmp(intento_p,palabra);
				
				if (comparacion == 0) {
					printf("Adivino la palabra\n");	
					intentos = 4;
				} else {
					printf("No es la palabra\n\n");
					intentos = intentos + 1;
		
				}
			}
							
		printf("\nLa palabra era %s\n",palabra);
		
	
	return 0;
}
