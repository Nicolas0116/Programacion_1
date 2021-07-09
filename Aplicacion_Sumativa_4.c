#include <stdio.h>
int main() {
	float ventas[4][5];
	float promedio;
	float promedio_total;
	int i;
	int j;
		
	printf("\nIngrese las ventas de los vendedores de NASA:\n");			
		
		/* Ciclo para ingresar los datos de los vendedores */
		for ( i=0; i<3 ; i++) {
			printf("\nDatos Vendedor %d: \n",i+1);	
				
				j = 0;
				printf("Ingrese la venta del dia lunes: ");
				scanf("%f", &ventas[i][j]);
				printf("Ingrese la venta del dia martes: ");
				scanf("%f", &ventas[i][j+1]);
				printf("Ingrese la venta del dia miercoles: ");
				scanf("%f", &ventas[i][j+2]);
				printf("Ingrese la venta del dia jueves: ");
				scanf("%f", &ventas[i][j+3]);
				printf("Ingrese la venta del dia viernes: ");
				scanf("%f", &ventas[i][j+4]);
				
			}
			
		/* Datos para generar el promedio general */		
		ventas[3][0] = ventas[0][0] + ventas[1][0] + ventas[2][0];
		ventas[3][1] = ventas[0][1] + ventas[1][1] + ventas[2][1];;
		ventas[3][2] = ventas[0][2] + ventas[1][2] + ventas[2][2];;
		ventas[3][3] = ventas[0][3] + ventas[1][3] + ventas[2][3];;
		ventas[3][4] = ventas[0][4] + ventas[1][4] + ventas[2][4];;
		
	printf("\nPromedio de ventas de lunes a viernes de los vendedores de NASA son:\n\n");		
		
		
		/* Ciclo para generar promedio de cada vendedor*/
		for (i=0; i<3; i++) {
			promedio = 0;
		
				for (j=0; j<5 ; j++) {
						promedio += ventas[i][j];
				}
	
			promedio /= 5.0;
			printf("Vendedor %d : B/. %.2f\n", i + 1 ,promedio);
		}
		
		/* Ciclo para generar promedio general */
		for (i=3; i<4; i++) {
			promedio = 0;
		
				for (j = 0; j < 5; j++) {
					promedio += ventas[i][j];
				}
				
			promedio /= 5.0;
			printf("\nPromedio General: B/. %.2f\n",promedio);
		}
		
		
return 0;
}

