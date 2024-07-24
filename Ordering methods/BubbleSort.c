//El elemento mas grande se va desplazando hacia la ultima posicion de forma gradual. El elemento se compara de a par realizando el intercambio cuando corresponda.
//Es un metodo de ordenamiento estable, la complejidad en el peor caso es O(n^2), en el mejor caso es O(n) (si la lista ya esta ordenada), y en promedio es O(n^2)

//Algoritmo BubbleSort
#include <stdio.h>
#include <stdlib.h>

#define NMax 1000 //Dependiendo el problema

//Definicion del arreglo
typedef struct {
    int s[NMax];
    int cant;
}TData;

//Variables
TData arreglo;
int i;
int j;

//Perfiles de acciones y funciones
void Intercambiar(int *x, int *y);
void Cargar(TData *q);
void MostrarArreglo(TData q);


//Inicio del algoritmo
int main (){
Cargar(&arreglo);        //Cargamos el arreglo 
printf("\nMostrando el arreglo cargado sin haberlo ordenado previamente: ");
MostrarArreglo(arreglo);
i = arreglo.cant - 1;
while (i > 0)
{
    j = 0;
    while (j < i)
    {
        if(arreglo.s[j] > arreglo.s[j+1]){
            Intercambiar(&(arreglo.s[j]),&(arreglo.s[j+1]));
        }
        j++;
    }
    i--;
}
printf("\nOrdenamiento realizado!\n");
printf("\nMostrando el arreglo ordenado: ");
MostrarArreglo(arreglo);
return 0;
}

//Implementacion de las acciones y funciones a utilizar

void Intercambiar(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

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