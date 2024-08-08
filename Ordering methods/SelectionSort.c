//Consiste en seleccionar la posicion del elemento menor y, una vez encontrada, se coloca el elemento que
//está en dicha posición al comienzo (intercambiando los elementos). Luego se busca nuevamente el menor,
//pero sin considerar la primera posición, y lo intercambia con el valor que se encuentra en la segunda posición, y
//así sucesivamente.

//Es un metodo de ordenamiento que no es estable

//Algoritmo SelectionSort
#include <stdio.h>
#include <stdlib.h>

#define NMax 1000  //Dependiendo el problema

//Definicion del arreglo

typedef struct {
    int s[NMax];
    int cant;
}TData;

//Variables a utilizar

TData arreglo;
int i;
int j;
int min;

//Perfiles de acciones

void Cargar(TData *q);
void MostrarArreglo(TData q);
void Intercambiar(int *x, int *y);

//Inicio del algoritmo principal
int main(){
Cargar(&arreglo);
printf("\nMostrando el arreglo cargado sin haberlo ordenado previamente: ");
MostrarArreglo(arreglo);
i = 0;
while (i < arreglo.cant - 1)
{
    j = i;
    min = i;
    while (j < arreglo.cant)
    {
        if (arreglo.s[j] < arreglo.s[min])
        {
            min = j;
        }
        j++;
    }
    Intercambiar(&arreglo.s[i], &arreglo.s[min]);
    i++;
}
printf("\nOrdenamiento realizado!\n");
printf("\nMostrando el arreglo ordenado: ");
MostrarArreglo(arreglo);
return 0;
}

//Implementacion de las acciones
void Cargar(TData *q) {
    printf("\nIngrese la cantidad de elementos a cargar dentro del arreglo: ");
    scanf("%d", &q->cant);
    if (q->cant > NMax) {
        printf("\nLa cantidad de elementos no puede exceder %d. Se establecera %d.\n", NMax, NMax);
        q->cant = NMax;
    }
    for (int i = 0; i < q->cant; i++) {
        printf("\nIngrese el numero que ira en la posicion %d: ", i + 1);
        scanf("%d", &q->s[i]);
    }
}

void MostrarArreglo(TData q) {
    for (int i = 0; i < q.cant; i++) {
        printf("%d ", q.s[i]);
    }
    printf("\n");
}

void Intercambiar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}