//Sigue la idea del Divide And Conquer. Elegir un elemento pivote, resituar los demas elementos
//a cada lado del pivote, de manera que a un lado queden todos los elementos que el, y al otro 
//los mayores. Se repite este proceso de forma recursiva.

//Algoritmo QuickSort

#include <stdio.h>
#include <stdlib.h>

#define NMax 1000 //Dependiendo el problema

//Definicion del arreglo
typedef struct{
    int s[NMax];
    int cant;
}TData;

//Variables 
TData arreglo;
int x;
int y;


//Perfiles de acciones y funciones
void Cargar(TData *q);
void MostrarArreglo(TData q);
void QuickSort(TData *a, int inf, int sup);

//Inicio del algoritmo
int main(){
    Cargar(&arreglo);        //Cargamos el arreglo 
    printf("\nMostrando el arreglo cargado sin haberlo ordenado previamente: ");
    MostrarArreglo(arreglo);
    x = 0;
    y = arreglo.cant - 1;
    QuickSort(&arreglo,x,y);
    printf("\nOrdenamiento realizado!\n");
    printf("\nMostrando el arreglo ordenado: ");
    MostrarArreglo(arreglo);
    return 0;
}

//Implementacion de las acciones y funciones a utilizar

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

void QuickSort(TData *a, int inf, int sup){
int x;
int tam;
int i;
int j;

i = inf;
j = sup;
x = a->s[(i+j)/2];              //Elejimos el pivot
while (i<=j)
{
    while (a->s[i] < x)         //Busca uno menor igual al pivot
    {
        i++;
    }
    while (a->s[j] > x)         //Busca uno mayor igual al pivot
    {
        j--;
    }
    if (i<=j)
    {
        tam = a->s[i];
        a->s[i] = a->s[j];
        a->s[j] = tam;
        i++;
        j--;
    }
} //Deja el pivot ordenado
if (inf<j)
{
    QuickSort(a, inf, j);
}
if (sup>i)
{
    QuickSort(a, i, sup);
}
}