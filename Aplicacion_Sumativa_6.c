#include <stdio.h>
#include <string.h>

int main() {
	
		char nombre_1[100];
		char nombre_2[100];
		char nombre_3[100];
		char nombre_4[100];
		char nombre_5[100];
		
		char resultado_1[100];
		char resultado_2[100];
		char resultado_3[100];
		char resultado_4[100];
		
		printf("Ingrese los nombres de las 5 personas:\n\n");
		
			scanf("%s",&nombre_1);
			scanf("%s",&nombre_2);
			scanf("%s",&nombre_3);
			scanf("%s",&nombre_4);
			scanf("%s",&nombre_5);
					
				
				if (strlen(nombre_1)<=strlen(nombre_2)) {
					sprintf(resultado_1,"%s",nombre_1);	
					}	else {
						sprintf(resultado_1,"%s",nombre_2);	
				}
				
				if (strlen(nombre_3)<=strlen(nombre_4)) {
					sprintf(resultado_2,"%s",nombre_3);	
					}	else {
						sprintf(resultado_2,"%s",nombre_4);	
				}
				
				if (strlen(resultado_1)<=strlen(resultado_2)) {
					sprintf(resultado_3,"%s",resultado_1);	
					}	else {
						sprintf(resultado_3,"%s",resultado_2);	
				}
				
				if (strlen(resultado_3)<=strlen(nombre_5)) {
					sprintf(resultado_4,"%s",resultado_3);	
					}	else {
						sprintf(resultado_4,"%s",nombre_5);	
				}
				
		
		printf("\nEl nombre mas corto es: %s",resultado_4);
	
	return 0;
}
