#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char nombre [100] ;
	int numero ;
	char correo [100];	
} contactos;


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
	
	contactos * miscontactos;
	int n = 10, id = 0 , ind2, id2 = 0, ind3, x;
	int opcion = 0, o2;
	char o2txt [100],eliminar[100]=" ";
	
	miscontactos = (contactos*)malloc(n * sizeof(contactos));
		
		while (opcion < 4) {
		
			printf("********** Bienvenido a sus contactos **********\n\n\n");
			printf("Que desea accion desea realizar:\n\n");
			printf("1.Agregar contacto.\n");
			printf("2.Buscar contacto.\n");
			printf("3.Ver todos los contactos.\n");
			printf("4.Salir.\n\n");
			
			printf("Accion: ");
			scanf("%d",&opcion);
			
			limpiar_pantalla();
			
			if (opcion == 1) {
				printf("********** 1.Agregar contacto **********\n\n");
				printf("Ingrese el nombre: ");
				scanf("%s",miscontactos[id].nombre);
				printf("Ingrese el numero: ");
				scanf("%d",&miscontactos[id].numero);
				printf("Ingrese el correo: ");
				scanf("%s",miscontactos[id].correo);				
				id ++;
				limpiar_pantalla();	
					
			}	else if (opcion == 2) {
				
				printf("********** 2.Buscar contacto. **********\n\n");
				printf("Desea buscar por:\n\n");
				printf("1.Nombre.\n");
				printf("2.Numero.\n");
				printf("3.Correo.\n\n");
				printf("Accion: ");
				scanf("%d",&o2);
				
					if (o2 == 1) {
							printf("\nIngrese el nombre: ");
							scanf("%s",o2txt);
							printf("\nContactos encontrados:\n\n");
							
								for (ind2=0;ind2<id+1;ind2++){
									if (strncmp(miscontactos[ind2].nombre, o2txt,100)==0 ){
										printf("Nombre: %s\n",miscontactos[ind2].nombre);
										printf("Numero: %d\n",miscontactos[ind2].numero);
										printf("Correo: %s\n\n",miscontactos[ind2].correo);
										id2 = ind2;
										
									}
								}
								
							printf("1.Modificar contacto.\n");
							printf("2.Eliminar contacto.\n");
							printf("3.Regresar.\n");
							printf("Accion: ");
							scanf("%d",&o2);
							
								if (o2 == 1) {
										printf("\nIngrese nuevo nombre: ");
										scanf("%s",miscontactos[id2].nombre);
										printf("Ingrese nuevo numero: ");
										scanf("%d",&miscontactos[id2].numero);
										printf("Ingrese nuevo correo: ");
										scanf("%s",miscontactos[id2].correo);
										limpiar_pantalla();
															
								} else if (o2 == 2) {
										
										for (x=id2; x <= id;x++) {
											miscontactos[x] = miscontactos[x+1];
										}
										printf("\nContacto Eliminado\n\n");
										
										printf("1.Regresar.\n");
										printf("2.Salir.\n");
										
										printf("Accion: ");
										scanf("%d",&o2);
													
											if (o2 == 1) {
												limpiar_pantalla();
											} else if (o2 == 2) {
												opcion = 4;
											}
														
								} else if (o2 > 2) {
									limpiar_pantalla();
								}
							
							
						
					}	else if (o2 == 2) {
							printf("\nIngrese el numero: ");
							scanf("%d",&o2);
							printf("\nContactos encontrados:\n\n");
							
							for (ind2=0;ind2<id+1;ind2++){
								if (miscontactos[ind2].numero == o2 ) {
									printf("Nombre: %s\n",miscontactos[ind2].nombre);
									printf("Numero: %d\n",miscontactos[ind2].numero);
									printf("Correo: %s\n\n",miscontactos[ind2].correo);
									id2 = ind2;
								}
							}
							
								
							printf("1.Modificar contacto.\n");
							printf("2.Eliminar contacto.\n");
							printf("3.Regresar.\n");
							printf("Accion: ");
							scanf("%d",&o2);
							
								if (o2 == 1) {
										printf("\nIngrese nuevo nombre: ");
										scanf("%s",miscontactos[id2].nombre);
										printf("Ingrese nuevo numero: ");
										scanf("%d",&miscontactos[id2].numero);
										printf("Ingrese nuevo correo: ");
										scanf("%s",miscontactos[id2].correo);
										limpiar_pantalla();
															
								} else if (o2 == 2) {
										
										for (x=id2; x <= id;x++) {
											miscontactos[x] = miscontactos[x+1];
										}
										printf("\nContacto Eliminado\n\n");
										
										printf("1.Regresar.\n");
										printf("2.Salir.\n");
										
										printf("Accion: ");
										scanf("%d",&o2);
													
											if (o2 == 1) {
												limpiar_pantalla();
											} else if (o2 == 2) {
												opcion = 4;
											}
										
										
								} else if (o2 > 2) {
									limpiar_pantalla();
								}
							
							
						
					}	else if (o2 == 3){
						
							printf("\nIngrese el correo: ");
							scanf("%s",o2txt);
							printf("\nContactos encontrados:\n\n");
							
							for (ind2=0;ind2<id+1;ind2++){
								if (strncmp(miscontactos[ind2].correo, o2txt,100)==0 ){
									printf("Nombre: %s\n",miscontactos[ind2].nombre);
									printf("Numero: %d\n",miscontactos[ind2].numero);
									printf("Correo: %s\n\n",miscontactos[ind2].correo);
									id2 = ind2;
								}
							}
							
								
							printf("1.Modificar contacto.\n");
							printf("2.Eliminar contacto.\n");
							printf("3.Regresar.\n");
							printf("Accion: ");
							scanf("%d",&o2);
							
								if (o2 == 1) {
										printf("\nIngrese nuevo nombre: ");
										scanf("%s",miscontactos[id2].nombre);
										printf("Ingrese nuevo numero: ");
										scanf("%d",&miscontactos[id2].numero);
										printf("Ingrese nuevo correo: ");
										scanf("%s",miscontactos[id2].correo);
										limpiar_pantalla();
										
								} else if (o2 == 2) {
										
										for (x=id2; x <= id;x++) {
											miscontactos[x] = miscontactos[x+1];
										}
										printf("\nContacto Eliminado\n\n");
										
										printf("1.Regresar.\n");
										printf("2.Salir.\n");
										
										printf("Accion: ");
										scanf("%d",&o2);
													
											if (o2 == 1) {
												limpiar_pantalla();
											} else if (o2 == 2) {
												opcion = 4;
											}
										
								}  else if (o2 > 2) {
									limpiar_pantalla();
								}
						
					}
					
				
				
			}	else if (opcion == 3) {
				
				printf("********** 3.Lista de contactos. **********\n\n");
				
				for( ind3 = 0; ind3 < id; ind3++){
					if (miscontactos[ind3].numero != 0) {
						
						printf("Contacto %d\n",ind3+1);
						printf("Nombre: %s\n",miscontactos[ind3].nombre);
						printf("Numero: %d\n",miscontactos[ind3].numero);
						printf("Correo: %s\n\n",miscontactos[ind3].correo);	
						
					}
				}
				
				printf("1.Regresar.\n");
				printf("2.Salir.\n");
				
				printf("Accion: ");
				scanf("%d",&o2);
							
					if (o2 == 1) {
						limpiar_pantalla();
					} else if (o2 == 2) {
						opcion = 4;
					} 
				}
				
				
		}
		
		free(miscontactos);

	return 0;
}
