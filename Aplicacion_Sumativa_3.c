#include <stdio.h>
int main() {
	printf("Solucion de una expresion de segundo grado: ax2 + bx + c = 0\n");	
	int a, b, c ;
	float x1, x2;
	double ope1x1;
	double ope1x2;
	printf("Ingrese el valor de a: ");
	scanf("%d", &a);
	printf("Ingrese el valor de b: ");
	scanf("%d", &b);
	printf("Ingrese el valor de c: ");
	scanf("%d", &c);
	printf("La expresion a solucionar es %dx2 + %dx + %d = 0\n",a,b,c);
	
	double elevadoraizx1 = pow(b,2);
	ope1x1 = elevadoraizx1 - 4*a*c; 
	double raizx1 = sqrt(ope1x1);
	x1 = (-b+ raizx1)/(2*a);
	
	double elevadoraizx2 = pow(b,2);
	ope1x2 = elevadoraizx2 - 4*a*c; 
	double raizx2 = sqrt(ope1x2);
	x2 = (-b- raizx2)/(2*a);
	
	printf("La respuesta de x1 = %f\n",x1);
	printf("La respuesta de x2 = %f\n",x2);
return 0;
}
