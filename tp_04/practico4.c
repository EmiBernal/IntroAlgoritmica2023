//Practico 4 (cada modulo es una actividad)

#include <stdio.h>
#include <math.h>
#include <string.h>

//Perfiles de las acciones
// Actividad 1 no disponible ya que no pide codigo
void Actividad2();
void Actividad3();
void Actividad4();
void Actividad5();
// Actividad 6 no disponible ya que no pide codigo
void Actividad7();
void Actividad8();
void Actividad9();
void Actividad10();
void Actividad11();
void Actividad12();
void Actividad13();
void Actividad14();
void Actividad15a();
void Actividad15b();
void Actividad15c();
void Actividad15d();


//Inicio del algoritmo
int main (){

    int opcion;
    char c;

    do{
        printf("\nMenu de opciones: \n");
        printf("1) Actividad 1 (no disponible)\n");
        printf("2) Actividad 2\n");
        printf("3) Actividad 3\n");
        printf("4) Actividad 4\n");
        printf("5) Actividad 5 \n");
        printf("6) Actividad 6 (no disponible)\n");
        printf("7) Actividad 7\n");
        printf("8) Actividad 8\n");
        printf("9) Actividad 9\n");
        printf("10) Actividad 10 \n");
        printf("11) Actividad 11\n");
        printf("12) Actividad 12\n");
        printf("13) Actividad 13\n");
        printf("14) Actividad 14\n");
        printf("15) Actividad 15\n");
        printf("16) Salir\n");
        printf("Ingrese la opcion: ");

        scanf("%d", &opcion);

        switch (opcion){
            case 1:
                printf("No disponible actualmente, vuelva a intentarlo con otra actividad\n");
                break;
            case 2:
                Actividad2();
                break;
            case 3:
                Actividad3();
                break;
            case 4:
                Actividad4();
                break;
            case 5:
                Actividad5();
                break;
            case 6:
                printf("No disponible actualmente, vuelva a intentarlo con otra actividad\n");
                break;
            case 7:
                Actividad7();
                break;
            case 8:
                Actividad8();
                break;
            case 9:
                Actividad9();
                break;
            case 10:
                Actividad10();
                break;
            case 11:
                Actividad11();
                break;
            case 12:
                Actividad12();
                break;
            case 13:
                Actividad13();
                break;
            case 14:
                Actividad14();
                break;
            case 15:
                printf("\nIngrese la opcion: A // B // C // D\n");
                printf("Opcion: ");
                scanf(" %c", &c);

                if ((c == 'a') || (c == 'A'))
                {
                    Actividad15a();
                    break;
                }

                if ((c == 'b') || (c == 'B'))
                {
                    Actividad15b();
                    break;
                }

                if ((c == 'c') || (c == 'C'))
                {
                    Actividad15c();
                    break;
                }

                if ((c == 'D') || (c == 'D'))
                {
                    Actividad15d();
                    break;
                }
        }
    }while (opcion != 16);
    printf("\nAbandonando el sistema\n\n");
    return 0;
}

//Actividad 2
void Actividad2() {
    int i;
    int nroMax;

    printf("\nIngrese el numero maximo: ");
    scanf("%d", &nroMax);
    printf("\nNumeros divisibles comprendidos entre 1 y %d: ", nroMax);
    
    i = 1;
    do {
        if ((i % 2 == 0) && (i % 4 != 0) && (i % 6 != 0)) {
            printf("\n%d (Divisible solo por 2)\n", i);
        } else if ((i % 4 == 0) && (i % 6 != 0)) {
            printf("\n%d (Divisible por 4 pero no por 6)\n", i);
        } else if (i % 6 == 0) {
            printf("\n%d (Divisible por 6)\n", i);
        } else {
            printf("\n%d (No divisible solo por 2, 4 o 6)\n", i);
        }
        i++;
    } while (i <= nroMax);  
}

//Actividad 3
void Actividad3(){
    int logico;
    char c;

    do
    {
        printf("\nDesea continuar? S/N\n");
        scanf(" %c", &c);
        
        if((c == 's') || (c == 'S')){
            logico = 1;
        }else{
            if((c == 'n') || (c == 'N')){
                logico = 0;
            }else{
                printf("\nCaracter incorrecto\n");
            }
        }
    } while (logico == 1);

    printf("\nHasta Luego!\n");   
}

//Actividad 4
void Actividad4(){
    int i;          //variable de control
    int n;          //Numero ingresado
    int c;          //Variable para guardar el valor de la suma
    int b;          //Variable 
    int a;          //variable      

    printf("Ingresa el numero para poder hacer fibonacci \n");
    scanf("%d", &n);

    a = 0;
    b = 1;

    printf("\nSucesion de Fibonacci: ");
    for (i=0; i<=n; i=i+1){

        printf(" %d", a);
        c=a+b;
        a=b;
        b=c;
    }
}

//Actividad 5
void Actividad5(){
    int mes;
    int lluvia;
    int lluviaMenor;
    int lluviaMayor;
    int mesMayor;
    int mesMenor;
    int i;

    i = 1;
    do
    {
        printf("\nIngresa la cantidad de milimetros llovidos en el mes %d: ", i);
        scanf("%d", &lluvia);

        if (i == 1)
        {
            lluviaMayor = lluvia;
            lluviaMenor = lluvia;
        }else{
            if(lluvia > lluviaMayor){
                lluviaMayor = lluvia;
                mesMayor = i;
            }else{
                if(lluvia < lluviaMenor){
                    lluviaMenor = lluvia;
                    mesMenor = i;
                }
            }
        }
        i++;
    } while (i <= 12);

    printf("\nLluvia Mayor:%d\nLluvia Menor:%d\nMes Mayor:%d\nMes Menor:%d\n", lluviaMayor, lluviaMenor, mesMayor, mesMenor);
}

//Actividad 7
void Actividad7(){
    int i;                  //variable de control para el mientras 
    int n;                  //numero de la sumatoria
    int s;                  //variable para poder informar el valor de la sumatoria dada    

    printf("Ingrese el numero que quiere para su sumatoria de numeros porfavor \n");
    scanf("%d", &n);

    i = 1;
    s = 0;
    
    while (i<=n)
    {
        s = s + i;
        i = i + 1;
    }
    
    printf("\n El valor de la sumatoria es de %d \n", s);
}

//Actividad 8
void Actividad8(){
    int n;
    int i;
    int m;

    printf("Ingrese el numero \n");
    scanf("%d", &n);
    m = 0;
    
    for(i=1; i<=n; i = i+1){
        
        m = n*i;
        
        printf("%d * %d = %d \n", n, i, m);
    }
}

//Actividad 9
void Actividad9(){
    int monto;
    int acum;

    acum = 0;
    monto = 0;

    while (monto != 99999)
    {
        printf("Ingrese el monto \n");
        scanf("%d", &monto);
            if (monto<0)
            {
                acum = acum + monto;
            }
        }
    acum = acum*(-1);
    printf("El balance acumulado es de %d", acum);
}

//Actividad 10
void Actividad10(){
    int nro;                //valor de entrada a determinar si es primo o no
    int raiz;               //variable para almacenar el valor de la raiz
    int primo;              //variable para almacenar el valor logico si es primo o no
    int i;                  //contador

    printf("Ingrese el numero a saber si es primo o no \n");
    scanf("%d", &nro);

        if ((nro>1)&&(nro%2 != 0))
        {
            raiz = sqrt(nro);
            i = 2;
            primo = 1;
        
            while (i<=raiz)
            {
                if (nro%i == 0)
                {
                    primo = 0;
                }
                
                i++;
            }
            
                if (primo == 0)
                {
                    printf("No es primo \n");
                }else{
                    if (primo != 0)
                    {
                        printf("Es primo \n");
                    }
                    
                }
        }else{
            if ((nro == 2))
            {
                printf("Es primo \n");
            }else
            {
                printf("No es primo \n");
            }
            
            
        }
}

//Actividad 11
void Actividad11(){
    int i;

    for(i=0;i<=100;i=i+1){
        if((i%2 == 0) || (i%4 == 0) || (i%6 == 0)){
            printf("%d \n", i);
        }
    }
}

//Actividad 12
void Actividad12(){
    
typedef struct {
    int cantAlum;
    int notas;    
}Tnotasprom;

Tnotasprom com;
float prom;
int i;
int notas;

    printf("Ingrese la cantidad de alumnos en la comisión \n");
    scanf("%d", &com.cantAlum);                                                   //ingreso la cantidad de alumnos
    notas = 0;
    i = 1;

    while (i<=com.cantAlum)
    {
        printf("Ingrese la nota del alumno \n");
        scanf("%d", &com.notas);
        notas = notas + com.notas;
        i = i+1;
    }                                                                             //entrada de notas 
        
    prom = notas/com.cantAlum;                                                //calculo el promedio 

    if (prom>8)
    {
        printf("Elevado \n");
    }else{
        if ((prom>6) && (prom<8))
        {
            printf("Aceptable \n");
        }else{
            if (prom<6)
            {
                printf("Bajo \n");
            }
            
        }
    }
}

//Actividad 13
void Actividad13(){
int nro;
int nroBase;
int pot;
int i;

printf("\nIngrese el numero: ");
scanf("%d", &nro);
printf("\nIngrese la potencia: ");
scanf("%d", &pot);

nroBase = nro;

for (i = 1; i < pot; i++)
{
    nro = nro * nroBase;
}

printf("\nEl resultado es %d\n", nro);
}

//Actividad 14
void Actividad14(){
    int i;          //variable de control del mientras
    int n;          //numero para ir calculando la multiplicacion
    int m;          //variable para informar el valor de la multiplicacion

    printf("Ingrese el numero de tablas de multiplicacion que necesita porfavor \n");
    scanf("%d", &n);

    i = 1;
    m = 0;
    
    printf("Tabla de multiplicación del %d \t", n);
    while (i<=n)
    {
        m = n * i;
        printf("\n%d*%d=%d\n ", n, i, m);
        i = i + 1;
    }
}

//Actividad 15
void Actividad15a(){
int k;

k = 1;
while ((k+5)<20)
{
    printf("\nSalgo o no salgo\n");
    k++;
}
printf("\nTermine!!!");
}

void Actividad15b(){
int j;

for (j = 1; j <= 20; j++)
{
    printf("\n%d", j);
}
printf("\nTermine!!!");
}

void Actividad15c(){
int colaSup;
int i;
int s;

printf("\nIngrese la cola superior: \n");
scanf("%d", &colaSup);
s = 0;
i = 1;

while (i <= colaSup)
{
    s += i;
    i++;
}
printf("\nLa suma de los primeros numeros naturales es %d", s);
}

void Actividad15d(){
int i;

i = 10;
while (i >= 1)
{
    printf("\nHola soy el nro %d", i);
    i--;
}
}
