//Metodo eficiente para encontrar un elemento en una secuencia ordenada
//Compara el elemento del medio con el elemento que se busca, y dependiendo
//si el elemento del medio es mayor o menor a este se repite el proceso en el
//intervalo correspondiente de la secuencia. Asi se va recortando el rango 
//hasta encontrarse o que el rango sea vacio no encontrando el elemento

//En este caso esta hecho de forma recursiva

//En este caso la secuencia es un arreglo de 22 enteros

#include <stdio.h>
#include <stdlib.h>

//Construccion del arreglo
#define Nmax 22             //depende de la cantidad de elementos que posee la secuencia
typedef struct 
{
    int n[Nmax];
    int cant;
}TData;

//Perfil de la accion para cargar el arreglo
void Cargar(TData *q);
void Mostrar(TData q);
int Ordenado(TData q);
int BusquedaDicotomica(TData q, int inf, int der, int elem);

//Variables a utilizar
TData secuencia;
int inf;
int sup;
int k;          //Sera nuestro elemento pivote
int numeroBuscado;
int ordenadoBool;
int Logico;

//Inicio del algoritmo

int main(){
Cargar(&secuencia);
ordenadoBool = Ordenado(secuencia);
if(ordenadoBool == 0){
    printf("\nEl arreglo proporcionado no es ordenado, vuelva a intentarlo mas tarde\n");
}else{
    printf("\nIngrese el elemento a buscar en la secuencia: ");
    scanf("%d", &numeroBuscado);
    Logico = BusquedaDicotomica(secuencia, 0, secuencia.cant - 1, numeroBuscado);
    if(Logico == 1){
        printf("\nEl elemento ha sido encontrado\n");
    }else{
        printf("\nEl elemento no ha sido encontrado\n");
    }
}
printf("\nLa secuencia cargada ha sido la siguiente: \n");
Mostrar(secuencia);
return 0;
}

//Implementacion de las acciones

void Cargar(TData *q){
int i;
    printf("\nIngrese la cantidad de elementos a cargar dentro del arreglo: ");
    scanf("%d", &(*q).cant);
    if ((*q).cant > Nmax) {
        printf("\nLa cantidad de elementos no puede exceder %d. Se establecera %d.\n", Nmax, Nmax);
        (*q).cant = Nmax;
    }
    for(i = 0; i < q->cant; i++){
        printf("\nIngrese el numero que ira en la posicion %d: ", i + 1);
        scanf("%d", &(*q).n[i]);
    }
}

void Mostrar(TData q){
int i;
    for (i = 0; i < q.cant; i++)
    {
        printf("Elemento numero %d: %d\n", i+1,q.n[i]);
    }
    
}

int Ordenado(TData q) {
    int i;
    int logico = 1; 

    for (i = 0; i < q.cant - 1; i++) {
        if (q.n[i] > q.n[i + 1]) {
            logico = 0; 
            break; 
        }
    }

    return logico;
}

int BusquedaDicotomica(TData q, int inf, int sup, int elem){
    int k;

    if (inf <= sup){
        k = (inf + sup) / 2;

        if(elem < q.n[k]){
            return BusquedaDicotomica(q,inf,k-1,elem);
        }else{
            if(elem > q.n[k]){
                return BusquedaDicotomica(q,k+1,sup,elem);
            }else{
                if(elem == q.n[k]){
                    return 1;
                }
            }
        }
    }else{
        return 0;
    }
}