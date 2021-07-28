#include <stdio.h>
#include <string.h>

/* Estructura del horoscopo */

struct horoscopo{
		
		char * signo;
		char * salud;
		char * relacion;
		int numero;
		char * color;
		
	}horoscopo[12]; 

/* Codigo Principal */
int main() {
	
		int ano, mes, dia, resultado;
		char nombre[100];
		char sexo[30];
	
	
			horoscopo[0].signo = "Aries";
			horoscopo[0].salud = "Buena";
			horoscopo[0].relacion = "Soltero";
			horoscopo[0].numero = 1287;
			horoscopo[0].color = "Rojo";
			
			horoscopo[1].signo = "Tauro";
			horoscopo[1].salud = "Muy Buena";
			horoscopo[1].relacion = "Soltero";
			horoscopo[1].numero = 2235;
			horoscopo[1].color = "Azul";
			
			horoscopo[2].signo = "Geminis";
			horoscopo[2].salud = "Optimistas";
			horoscopo[2].relacion = "Casado";
			horoscopo[2].numero = 4398;
			horoscopo[2].color = "Verde";
			
			horoscopo[3].signo = "Cancer";
			horoscopo[3].salud = "Excelente";
			horoscopo[3].relacion = "Casado";
			horoscopo[3].numero = 9834;
			horoscopo[3].color = "Gris";
			
			horoscopo[4].signo = "Leo";
			horoscopo[4].salud = "No tan buena";
			horoscopo[4].relacion = "Soltero";
			horoscopo[4].numero = 5438;
			horoscopo[4].color = "Amarillo";
			
			horoscopo[5].signo = "Virgo";
			horoscopo[5].salud = "Muy Buena";
			horoscopo[5].relacion = "Casado";
			horoscopo[5].numero = 2009;
			horoscopo[5].color = "Morado";
			
			horoscopo[6].signo = "Libra";
			horoscopo[6].salud = "Estable";
			horoscopo[6].relacion = "Divorciado";
			horoscopo[6].numero = 1013;
			horoscopo[6].color = "Naranja";
			
			horoscopo[7].signo = "Escorpio";
			horoscopo[7].salud = "Mala";
			horoscopo[7].relacion = "Viudo";
			horoscopo[7].numero = 5210;
			horoscopo[7].color = "Negro";
			
			horoscopo[8].signo = "Sagitario";
			horoscopo[8].salud = "Buena";
			horoscopo[8].relacion = "Viudo";
			horoscopo[8].numero = 7923;
			horoscopo[8].color = "Blanco";
			
			horoscopo[9].signo = "Capricornio";
			horoscopo[9].salud = "Muy Buena";
			horoscopo[9].relacion = "Casado";
			horoscopo[9].numero = 1190;
			horoscopo[9].color = "Cafe";
			
			horoscopo[10].signo = "Acuario";
			horoscopo[10].salud = "Regular";
			horoscopo[10].relacion = "Soltero";
			horoscopo[10].numero = 5174;
			horoscopo[10].color = "Purpura";
			
			horoscopo[11].signo = "Picis";
			horoscopo[11].salud = "Mala";
			horoscopo[11].relacion = "Divorciado";
			horoscopo[11].numero = 4908;
			horoscopo[11].color = "Vino tinto";
			
		
		printf("Para saber su horoscopo ingrese los siguientes datos:\n");
		printf("\nIngrese su nombre: ");
		scanf("%s",nombre);
		printf("Ingrese su año de nacimiento(YYYY): ");
		scanf("%d",&ano);
		printf("Ingrese su mes de nacimiento(MM): ");
		scanf("%d",&mes);
		printf("Ingrese su dia de nacimiento(dd): ");
		scanf("%d",&dia);
		printf("Ingrese su sexo(M/F): ");
		scanf("%s",sexo);
		
		if((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20)){
			resultado = 0;
			} else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20)){
				resultado = 1;
				} else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 21)){
					resultado = 2;
					} else if ((mes == 6 && dia >= 22) || (mes == 7 && dia <= 22)){
						resultado = 3;
						} else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 23)){
							resultado = 4;
							} else if ((mes == 8 && dia >= 24) || (mes == 9 && dia <= 22)){
								resultado = 5;
								} else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)){
									resultado = 6;
									} else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 22)){
										resultado = 7;
										} else if ((mes == 11 && dia >= 23) || (mes == 12 && dia <= 21)){
											resultado = 8;
											} else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20)){
												resultado = 9;
												} else if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19)){
													resultado = 10;
													} else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20)){
														resultado = 11;
		}	
	
		printf("\nSu horoscopo indica lo siguiente:\n\n");
		printf("Su signo zodiacal es: %s\n",horoscopo[resultado].signo);
		printf("Su salud sera: %s\n",horoscopo[resultado].salud);
		printf("Su estado civil sera: %s\n",horoscopo[resultado].relacion);
		printf("Su numero de la suerte es: %d\n",horoscopo[resultado].numero);
		printf("Su color de la suerte es: %s\n",horoscopo[resultado].color);
		
	
	return 0;
}
