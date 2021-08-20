/* Programa que pide al usuario que ingrese un numero, para determinar si es un numero palindromo o no.
	Autor: Carlos Angel Martinez Garcia.
	Programa: palindromo2.c 
	Fecha: 19-Ago-2021   */

#include <stdio.h>
#include <string.h>

int main(){

	int pal = 0, a,b,i;
	int numeros[25];

	printf("Ingrese un numero: ");
	for (i = 0;(numeros[i]=getchar()) != '\n'; ++i);

	b=i; //En la variable 'b' guardo la ultima posicion del arreglo que me servira para recorrer el arreglo.
	
	for(a=0,b=i-1;( a<i && b>-1 );a++,b--)
	{//Ciclo que recorre el arreglo comparando las posiciones
		if(numeros[a]==numeros[b])//Compara los numeros en las posiciones y si son iguales pal incrementa su valor
			pal++;
		else
			pal = 0;//si los numeros no son iguales pal se iguala a 0
	}

	if(pal == i)//Condicion que verifica la suma de 'pal', si es igual al tamaño del arreglo entonces:
		printf("\nEl siguiente numero es un palindromo: \n");
	else
		printf("\nEl siguiente numero no es un palindromo: \n");
	
	for (int j =  i; j > -1; j--)//Ciclo que muestra el arreglo invertido
		putchar(numeros[j]);

	printf("\n");

	return 0;
}
