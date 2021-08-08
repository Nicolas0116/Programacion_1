#include <stdio.h>


int hermite(int n, int x);

int hermite(int n, int x) {
	if (n > 0) {
		return 2* x *  hermite(n-1,x) - 2*(n-1) * hermite(n-2,x);
		}
	else {
		return 1;
		}
	}


int main() {
	int n, x;
	
	printf("********** Solucion de Polinomios Hermite **********\n\n");
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);
	printf("Ingrese el valor de x: ");
	scanf("%d",&x);
			
	printf("Hn(x) = H%d(%d) = %d\n",n,x, hermite(n,x));
	
	

	return 0;	

}



