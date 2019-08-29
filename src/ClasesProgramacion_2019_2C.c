/*
 ============================================================================
 Name        : ClasesProgramacion_2019_2C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_NUMEROS 5
#define RETORNO_EXITOSO 0

int maximoYminimo (int cantidad, int* maximo, int* minimo);
int main(void)
{
	int maximo;
	int minimo;
	if (maximoYminimo (CANTIDAD_NUMEROS, &maximo, &minimo) == RETORNO_EXITOSO){
		printf("El número máximo es: %d\n",maximo);
		printf("El número minimo es: %d",minimo);
	}
	return 0;
};
int maximoYminimo (int cantidad, int* maximo, int* minimo)
{
	int numero;
	int numMaximo;
	int numMinimo;
	int retorno = -1;

	if (cantidad > 0 && *maximo != NULL && *minimo != NULL){
			//validacion de puntero si apunta a algun lado
		for (int i = 0; i < cantidad; i++){
			printf("Ingrese un numero: ");
			scanf("%d",&numero);
			if (i == 0 || numero > numMinimo)
				//como estoy controlando el ciclo uso el i de flag
				{
					numMinimo = numero;
				}
			if (i == 0 || numero > numMaximo)
				//como estoy controlando el ciclo uso el i de flag
				{
					numMaximo = numero;
				}
		}
		*maximo = numMaximo;
		//recien ahora guardo en los punteros, por las dudas de que pase algo
		*minimo = numMinimo;

		retorno = 0;
	}
	return retorno;
}

