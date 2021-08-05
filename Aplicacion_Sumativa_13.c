
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	int documento ;
	char nombre [100] ;
	char tipo [100] ;
	int telefono ;
	
} datos;


void limpiar_pantalla();

void limpiar_pantalla()
	{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
};


int main() {
	
	datos * datoscuenta;
	int n = 10, id = 0 , ind2, id2 =-1, ind3, x, ind4;
	int opcion = 0, o2;
	
	datoscuenta = (datos*)malloc(n * sizeof(datos));
		
		while (opcion < 5) {
		
			printf("********** Administracion bancaria **********\n\n\n");
			printf("Que desea accion desea realizar:\n\n");
			printf("1.Agregar cuenta.\n");
			printf("2.Actualizar cuenta.\n");
			printf("3.Eliminar cuenta.\n");
			printf("4.Ver todas las cuenta.\n");
			printf("5.Salir.\n\n");
			
			printf("Accion: ");
			scanf("%d",&opcion);
			
			limpiar_pantalla();
			
			if (opcion == 1) {
				printf("********** 1.Agregar cuenta **********\n\n");
				printf("Ingrese numero de documento del cliente: ");
				scanf("%d",&datoscuenta[id].documento);
				printf("Ingrese nombre del cliente: ");
				scanf("%s",datoscuenta[id].nombre);
				printf("Ingrese tipo de cuenta (Ahorros/Corriente): ");
				scanf("%s",datoscuenta[id].tipo);
				printf("Ingrese numero de telefono del cliente: ");
				scanf("%d",&datoscuenta[id].telefono);				
				id ++;
				limpiar_pantalla();	
					
			}	else if (opcion == 2) {
				
				printf("********** 2.Actualizar cuenta. **********\n\n");
				printf("Ingrese numero de documento del cliente: ");
				scanf("%d",&ind3);
				
					for (ind2=0;ind2<=id;ind2++){
						if (datoscuenta[ind2].documento == ind3){
						id2 = ind2;
						}
					}
					
					if (id2 < 0) {
						printf("\n\nNo se encontro ningun cliente con ese numero de documento.\n\n");
						
						printf("1.Regresar.\n");
						printf("2.Salir.\n");
						printf("Accion: ");
						scanf("%d",&o2);
									
							if (o2 == 1) {
								limpiar_pantalla();
							} else if (o2 == 2) {
								opcion = 5;
							} 
			
						
					} else {
						printf("\n\nSe encontro el cliente:\n\n");
						printf("Numero de documento: %d\n",datoscuenta[id2].documento);
						printf("Nombre: %s\n",datoscuenta[id2].nombre);
						printf("Tipo de Cuenta: %s\n",datoscuenta[id2].tipo);
						printf("Numero de telefono: %d\n\n\n",datoscuenta[id2].telefono);
						
						printf("1.Actualizar nombre.\n");
						printf("2.Actualizar tipo cuenta.\n");
						printf("3.Actualizar telefono.\n");
						printf("4.Regresar.\n");
						printf("5.Salir.\n");
						printf("Accion: ");
						scanf("%d",&o2);
						
							if (o2 == 1) {
								printf("\nIngrese el nuevo nombre del cliente: ");
								scanf("%s",datoscuenta[id2].nombre);
								id2 = -1;
								limpiar_pantalla();
							} else if (o2 == 2) {
								printf("\nIngrese el nuevo tipo de cuenta: ");
								scanf("%s",datoscuenta[id2].tipo);
								id2 = -1;
								limpiar_pantalla();
							} else if (o2 == 3) {
								printf("\nIngrese el nuevo telefono: ");
								scanf("%d",&datoscuenta[id2].telefono);
								id2 = -1;
								limpiar_pantalla();
							} else if (o2 == 4) {
								id2 = -1;
								limpiar_pantalla();
							} else if (o2 == 5) {
								id2 = -1;
								opcion = 5;
							}
 					}
 					
			} else if (opcion == 3) {
				
				printf("********** 3.Eliminar cuenta. **********\n\n");
				printf("Ingrese numero de documento del cliente: ");
				scanf("%d",&ind3);
				
					for (ind2=0;ind2<=id;ind2++){
						if (datoscuenta[ind2].documento == ind3){
						id2 = ind2;
						}
					}
					
					if (id2 < 0) {
						printf("\n\nNo se encontro ningun cliente con ese numero de documento.\n\n");
						
						printf("1.Regresar.\n");
						printf("2.Salir.\n");
						printf("Accion: ");
						scanf("%d",&o2);
									
							if (o2 == 1) {
								limpiar_pantalla();
							} else if (o2 == 2) {
								opcion = 5;
							} 
			
						
					} else {
						printf("\n\nSe encontro el cliente:\n\n");
						printf("Numero de documento: %d\n",datoscuenta[id2].documento);
						printf("Nombre: %s\n",datoscuenta[id2].nombre);
						printf("Tipo de Cuenta: %s\n",datoscuenta[id2].tipo);
						printf("Numero de telefono: %d\n\n\n",datoscuenta[id2].telefono);
						
						printf("1.Eliminar.\n");
						printf("2.Regresar.\n");
						printf("3.Salir.\n");
						printf("Accion: ");
						scanf("%d",&o2);
						
							if (o2 == 1) {
								
									for (x=id2; x <= id;x++) {
										datoscuenta[x] = datoscuenta[x+1];
										}
										printf("\nCuenta Eliminado\n\n");
										
										printf("1.Regresar.\n");
										printf("2.Salir.\n");
										
										printf("Accion: ");
										scanf("%d",&o2);
													
											if (o2 == 1) {
												id2 = -1;
												limpiar_pantalla();
											} else if (o2 == 2) {
												opcion = 5;
											}
								
							} else if (o2 == 2) {
								id2 = -1;
								limpiar_pantalla();
							} else if (o2 == 3) {
								opcion = 5;
							}
					}
			} else if (opcion == 4) {
				
				printf("********** 4.Lista de cuentas. **********\n\n");
					
					for( ind4 = 0; ind4 < id; ind4++){
						if (datoscuenta[ind4].documento != 0) {
							
							printf("Cuenta %d\n",ind4+1);
							printf("Numero documento: %d\n",datoscuenta[ind4].documento);
							printf("Nombre cliente: %s\n",datoscuenta[ind4].nombre);
							printf("Tipo de cuenta: %s\n",datoscuenta[ind4].tipo);
							printf("Telefono del cliente: %d\n\n",datoscuenta[ind4].telefono);	
							
						}
					}
				
					printf("1.Regresar.\n");
					printf("2.Salir.\n");
					
					printf("Accion: ");
					scanf("%d",&o2);
								
						if (o2 == 1) {
							limpiar_pantalla();
						} else if (o2 == 2) {
							opcion = 5;
						} 
			}
			
					
		}
		
		free(datoscuenta);

	return 0;
}

