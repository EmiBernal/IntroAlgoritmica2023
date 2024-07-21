//Algoritmo generico para buscar un elemento sobre una secuencia cualquiera (arreglos, listas LSE y LDE, archivos)
//Se utiliza mas que nada cuando la secuencia esta ordenada

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


//Variables a utilizar
int limInf;
int limSup;
TData secuencia;
int i;
int numeroBuscado;
int ordenadoBool;               //valor logico para determinar si esta ordenado

//Inicio del algoritmo
int main(){
    Cargar(&secuencia);
    ordenadoBool = Ordenado(secuencia);
    if(ordenadoBool == 0){
        printf("\nEl arreglo proporcionado no es ordenado, vuelva a intentarlo mas tarde\n");
    }else{
    printf("\nIngrese el elemento a buscar en la secuencia: ");
    scanf("%d", &numeroBuscado);
    i = 0;
    limSup = secuencia.cant;
    while (i < limSup && secuencia.n[i] < numeroBuscado)
    {
        i++;
    }
    if(i <= limSup){
        if(secuencia.n[i] == numeroBuscado){
            printf("\nEl elemento ha sido encontrado en la posicion %d\n", i + 1);
        }else{
            if (secuencia.n[i] != numeroBuscado)
            {
                printf("\nEl elemento no ha sido encontrado");
            }
        }
    }else{
        if (i > limSup)
        {
            printf("\nEl elemento no ha sido encontrado");
        }
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
