/* Autores: Joan Estibens Trejos Marulanda - Esteban Cardona Gil
   
   log: agosto 12: -creación del menu principal ==> opciones
                   -creación de los casos ==> algoritmos:
                                                . potenciación
                                                . buscar elemento
                                                . ordenamiento burbuja
                                                . cadena
                                                . busqueda por selección
                   -creación de la librería funciones.h
        
        agosto 16: -creación de las funciones con su respectivo proceso
        		   -implementaci'on de los algoritmos en el programa 

   descripción: Este programa actua como una aplicación de diferentes algoritmos
                la cual pregunta al usuario el algoritmo a realizar, pidiendo valores
                de entrada si se es necesario y retornando el resultado correspondiente 
                a la acción pedida. 
     */  

#include <iostream>
using namespace std;
#include "funciones.h"

void calcularPotencia();
void buscarElemento();
void burbuja();
void ordenamientoSelec();
void cadena();

/* la función main utiliza el switch case para poder llevar a un menu los diferentes algoritmos a realizar.
para ello utiliza otras funciones las cuales hacen el llamado a las funciones creadas en la librería y el archivo.cpp.
*/
int main(){
	int opcion=-1;
	while (opcion != 0){
		cout <<" 0-salir \n 1-potencia \n 2-buscar elemento \n 3-ordenamiento burbuja \n 4-ordenamiento seleccion \n 5-cadena \n elija opcion:" ;
		cin >> opcion;
		switch(opcion){

        	case 0: return 0;

        	int resultado;

        	case 1: calcularPotencia(); break;
            case 2: buscarElemento(); break;
            case 3: burbuja(); break;
            case 4: ordenamientoSelec(); break;
            case 5: cadena();break; 
            
                    }

    break;

  }

return 0;
}

// esta función hace el llamado a la funcion potencia(), pero primero, pregunta al usuario la base y el exponente
void calcularPotencia()
{
    int base,exp,resultado;
 	cout <<"ingrese base:";
 	cin >> base;
 	cout <<"ingrese exponente:";
 	cin >> exp;
 	resultado=  potencia(base,exp);
 	cout <<"el resultado fue:" <<resultado;
}

// esta funcion hace el llamado a la función secSearching(), preguntando anteriormente el elemento a buscar en el arreglo 
void buscarElemento()
{
	int n=10;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int k,resultado;
	cout <<"ingrese numero a buscar:";
	cin >> k;
	resultado= secSearching(a,n,k);

}

void ordenamientoSelec(){
	int n=10;
	int arreglo[]={3,5,4,6,7,1,2,8,10,9};
	cout <<"el arreglo original es " ;
	for (int i = 0; n > i; i++)
    {
        cout << arreglo[i] << " ";
    }
    int arreglo_ordenado = ordenamientoSeleccion (arreglo,n);
    cout << endl << "El arreglo ordenado es ";
    for (int i = 0; n > i; i++)
    {
        cout << arreglo[i] << " ";

    }
 }
 
// esta función contiene un arreglo estático luego hace el llamado a la función ordenamientoBurbuja() que se encarga de ordenar el arreglo 
void burbuja()
{
    int n = 10;
    int arreglo[] = {3,4,8,1,0,7,9,2,6,5};
    cout << "El arreglo original es " ;
    for (int i = 0; n > i; i++)
    {
        cout << arreglo[i] << " ";
    }
    int arreglo_ordenado = ordenamientoBurbuja (n,arreglo);
    cout << endl << "El arreglo ordenado es ";
    for (int i = 0; n > i; i++)
    {
        cout << arreglo[i] << " ";
    }
}

/* esta función hace el llamado a la funcion emparejamientoCadenas(), que compara las dos cadenas establecidas
dentro de esta función */
void cadena ()
{
    char array1[] = "HolaMundo";
    char array2[] = "Holamundo";
    int n = 9;
    int m = 9;
    int array_final = emparejamientoCadenas (array1,n,array2,m);
    cout << array_final;
}


