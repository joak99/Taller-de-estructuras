#include <iostream>
#include <stdlib.h>
using namespace std;


/*
Funcion potencia.
objetivo: realiza la operacion de exponenciación, dada una base y un exponente.
entradas: int base, int exponente.
salidas: int resultado
*/

int potencia(int base, int exponente)
{
	int resultado = 1;
	
	for (int i = 1; i <= exponente; i++){
		
		resultado *= base;

	}
	
	return resultado;
}

/*
Funcion secSearching.
objetivo: buscar un elemento en un arreglo estático, preguntando anteriormente 
al usuario el elemento que quiere quese busque.
entradas: int k (numero a buscar)
salida: 1("numero encontrado :D") o -1(numero no encontrado :c)
*/  

int secSearching(int arreglo[], int n, int  k)
{
     int i= 0;
     while (i < n) {
     	if (arreglo[i] == k){
     	 	
     	 	cout << "numero encontrado :D";
     		return 1;
     		
     	
     	}
     	else {
     		

     	i++;
     	

     	}

     
     }
     cout <<"numero no encontrado :c";
     return -1;
}

/* 
función: ordenamientoSelección
objetivo: ordenar un arreglo, seleccionando el valor minimo y colocandolo en su 
correspondiente posición sucesivamente hasta ordenarlo.
entradas: int arreglo, int n
salidas: arreglo original y arreglo ordenado
*/

int ordenamientoSeleccion(int arreglo[],int n)
{
	for (int i = 0; i <= n - 1; i++)
	{   
		int min = i;
		for (int j = i + 1; j < n - 1; j++)
		{
			if(arreglo[j]<arreglo[min])
			{
				min= j;

			}
		}
		swap(arreglo[i] , arreglo[min]);
	}
}

/*
Función ordenamientoBurbuja
objetivo: ordenar un arreglo, comparando cada elemento de la lista
entradas: int n, int arreglo
salidas: ninguna
*/
int ordenamientoBurbuja (int n, int arreglo[])
{
	for (int i = 0 ; n - 2 >= i ; i++)
	{
		for (int j = 0 ; n - 1 >= j; j++)
		{
			if (arreglo[j + 1] < arreglo[j])
			{
				swap (arreglo[j] , arreglo[j + 1]);
			}
		}
	}
}

/*
Funcion emparejamientoCadenas
objetivo: comparar 2 cadenas, si son iguales retorna 0 y si son diferentes retorna -1
entradas: char array1[], int n, char array2[], int m
salidas: int i o -1
*/
char emparejamientoCadenas (char array1 [], int n, char array2[], int m)
{
	int k = n - m;
	for(int i = 0;k >= i;i++)
	{
		int j = 0;
		while (j < m && array2[j] == array1[i + j])
		{
			j++;
		}
		if (j == m)
		{
			cout <<"las cadenas son iguales";
			return i;
		}
	}
	cout <<"las cadenas son diferentes ";
	return -1;
}
