/* Programa que pide al usuario el tamaño de un arreglo de tipo entero, y los valores del mismo.
	para determinar si es un numero palindromo o no.
	Autor: Carlos Angel Martinez Garcia.
	Programa: palindromo.c 
	Fecha: 19-Ago-2021   */

#include <stdio.h>

int main(){

	int tam; //Tamaño del arreglo
	int a,b; //Variables para recorrer el arreglo
	int pal=0; //Variable para determinar si el arreglo es un palindromo o no

	printf("Ingrese el tamaño del arreglo:\n");
	scanf("%d",&tam);

	int numeros[tam]; //Arreglo para almacenar los numeros

	for(int i=0;i<tam;i++)
	{ //Ciclo para solicitar los numeros al usuario y guardarlos en el arreglo
		printf("Ingrese el valor en: numeros[ %d ]",i);
		scanf("%d",&numeros[i]);
	}

	for(a=0,b=tam-1;( a<tam && b>-1 );a++,b--)
	{//Ciclo que recorre el arreglo comparando las posiciones
		if(numeros[a]==numeros[b])//Compara los numeros en las posiciones y si son iguales pal incrementa su valor
			pal++;
		else
			pal = 0;//si los numeros no son iguales pal se iguala a 0
	}

	if(pal == tam)//Condicion que verifica la suma de 'pal', si es igual al tamaño del arreglo entonces:
		printf("\nEl siguiente arreglo de numeros es un palindromo: \n");
	else
		printf("\nEl siguiente arreglo de numeros no es un palindromo: \n");
	
	for (int i = 0; i < tam; ++i)
	{//Ciclo que muestra el arreglo
		printf(" [ %d ] ",numeros[i]);
	}
	printf("\n");

	return 0;
}
