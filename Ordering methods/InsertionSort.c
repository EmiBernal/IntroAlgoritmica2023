//Comienza con el segundo elemento de la lista, compara dicho elementos con los anteriores a el, inserta el elemento en la posicion que le corresponde
//y repite estos pasos con el siguiente elemento

//Es un metodo de ordenamiento estable, la complejidad es O(n^2) y el numero de intercambios es de n^2

//Algoritmo InsertionSort
#include <stdio.h>
#include <stdlib.h>

#define NMax 1000 //Dependiendo el problema

//Definicion del arreglo

typedef struct {
    int s[NMax];
    int cant;
}TData;

// Variables a utilizar
TData arreglo;
int i;
int j;
int aux;

//Perfiles de acciones 
void Cargar(TData *q);
void MostrarArreglo(TData q);

//Inicio del algoritmo principal

int main(){
    Cargar(&arreglo);        //Cargamos el arreglo 
    printf("\nMostrando el arreglo cargado sin haberlo ordenado previamente: ");
    MostrarArreglo(arreglo);
    i = 0; //cambio 1
    while (i < arreglo.cant)
    {
        aux = arreglo.s[i];
        j = i - 1;
        while (j > 0 && arreglo.s[j] > aux)
        {
            arreglo.s[j + 1] = arreglo.s[j];
            j--;
        }
        arreglo.s[j+1] = aux;
        i++;
    }
    printf("\nOrdenamiento realizado!\n");
    printf("\nMostrando el arreglo ordenado: ");
    MostrarArreglo(arreglo);
    return 0;
}

//Implementacion de las acciones

void Cargar(TData *q){
int i;
    printf("\nIngrese la cantidad de elementos a cargar dentro del arreglo: ");
    scanf("%d", &(*q).cant);
    if ((*q).cant > NMax) {
        printf("\nLa cantidad de elementos no puede exceder %d. Se establecera %d.\n", NMax, NMax);
        (*q).cant = NMax;
    }
    for(i = 0; i < q->cant; i++){
        printf("\nIngrese el numero que ira en la posicion %d: ", i + 1);
        scanf("%d", &(*q).s[i]);
    }
}

void MostrarArreglo(TData q){
int i;
    for (i = 0; i < q.cant; i++)
    {   
        printf("%d ", q.s[i]);
    }
}