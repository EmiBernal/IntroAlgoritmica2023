//Practico 3 (Cada modulo es la actividad completa)

#include <stdio.h>
#include <math.h>


//perfiles de acciones
void Actividad1();
void Actividad2();
void Actividad3();
void Actividad4();
//Actividad 5 no disponible ya que no pide codigo 
void Actividad6();
void Actividad7();
void Actividad8();
//Actividad 9 no disponible ya que no pide codigo 
//Actividad 10 no disponible ya que no pide codigo 
void Actividad11();
void Actividad12();

int main (){

    int opcion;

    do{
        printf("\nMenu de opciones: \n");
        printf("1) Actividad 1\n");
        printf("2) Actividad 2\n");
        printf("3) Actividad 3\n");
        printf("4) Actividad 4\n");
        printf("5) Actividad 5 (no disponible)\n");
        printf("6) Actividad 6\n");
        printf("7) Actividad 7\n");
        printf("8) Actividad 8\n");
        printf("9) Actividad 9 (no disponible)\n");
        printf("10) Actividad 10 (no disponible)\n");
        printf("11) Actividad 11\n");
        printf("12) Actividad 12\n");
        printf("13) Actividad 13\n");
        printf("14) Actividad 14\n");
        printf("15) Actividad 15\n");
        printf("16) Actividad 16\n");
        printf("17) Actividad 17\n");
        printf("18) Actividad 18\n");
        printf("19) Actividad 19\n");
        printf("20) Actividad 20\n");
        printf("21) Salir\n");
        printf("Ingrese la opcion: ");

        scanf("%d", &opcion);

        switch (opcion){
            case 1:
                Actividad1();
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
                printf("No disponible actualmente, vuelva a intentarlo con otra actividad\n");
                break;
            case 6:
                Actividad6();
                break;
            case 7:
                Actividad7();
                break;
            case 8:
                Actividad8();
                break;
            case 9:
                printf("No disponible actualmente, vuelva a intentarlo con otra actividad\n");
                break;
            case 10:
                printf("No disponible actualmente, vuelva a intentarlo con otra actividad\n");
                break;
            case 11:
                Actividad11();
                break;
            case 12:
                Actividad12();
                break;
            case 13:

                break;
            case 14:

                break;
            case 15:

                break;
            case 16:

                break;
            case 17:

                break;
            case 18:

                break;
            case 19:

                break;
            case 20:

                break;
        }
    }while (opcion != 21);
    printf("\nAbandonando el sistema\n\n");
    return 0;
}

//Actividad 1
void Actividad1(){
int edad;

printf("\nIngrese la edad: ");
scanf("%d", &edad);
if(edad>=18){
    printf("\nLa persona es mayor de edad\n");
}else{
    printf("\nLa persona es menor de edad\n");
}
}

//Actividad 2
void Actividad2(){
float precioOficial;
float precioNoOficial;

printf("Ingrese el precio oficial: ");
scanf("%f", &precioOficial);
printf("Ingrese el precio no oficial: ");
scanf("%f", &precioNoOficial);

precioOficial = precioOficial + (precioOficial * (0.01));
if(precioOficial >= precioNoOficial){
    printf("Compra en la pagina oficial");
}else{
    printf("Compra en la pagina no oficial");
}
}

//Actividad 3 
void Actividad3(){
int a;
int b;
int c;

printf("Ingrese el primer numero: ");
scanf("%d", &a);
printf("Ingrese el segundo numero: ");
scanf("%d", &b);
if (a>=b)
{
    c = (a * 10) + b;
}else{
    c = (b * 10) + a;
}
printf("\nEl mayor numero posible entre los dos numeros es %d\n",c);
}

//Actividad 4
void Actividad4() {
    int kmTrans;
    int montoFinal;

    printf("Ingrese la cantidad de kilometros transcurridos: ");
    scanf("%d", &kmTrans);

    if (1 <= kmTrans && kmTrans < 300) {
        montoFinal = kmTrans * 30;
    } else if (300 <= kmTrans && kmTrans < 1000) {
        montoFinal = (kmTrans * 30) + (kmTrans * 0.75);
    } else if (kmTrans >= 1000) {
        montoFinal = (kmTrans * 30) + (kmTrans * 0.50);
    }

    printf("\nLa cantidad de kilometros transcurrida fue de %d, por lo que el cliente debe pagar $%d\n", kmTrans, montoFinal);
}

// Actividad 6
void Actividad6(){
int compraPasaje;
int idaVuelta;
int pasajeFinal;

printf("\nIngresen la cantidad de dias restantes para su vuelo: ");
scanf("%d", &compraPasaje);
if(compraPasaje>=30){
    pasajeFinal = 4650;
}else{
    if(15 <= compraPasaje && compraPasaje <= 29){
        pasajeFinal = 5350;
    }else{
        if(14 <= compraPasaje && compraPasaje <= 1){
            pasajeFinal = 6875;
        }
    }
}

idaVuelta = 0;
while (idaVuelta != 1 && idaVuelta != 2)
{
    printf("\nSi su viaje es de ida ingrese 1. Si su viaje es de ida y vuelta ingrese 2\n");
    scanf("%d", &idaVuelta);
    if(idaVuelta != 1 && idaVuelta != 2){
        printf("Ingrese una opcion correcta, vuelva a intentarlo");
    }
}

if(idaVuelta == 1){
    pasajeFinal = pasajeFinal;
}else{
    pasajeFinal = pasajeFinal * 2;
}

printf("\nEl precio final a pagar es de $%d\n", pasajeFinal);
}


//Actividad 7
void Actividad7(){
int tiempos[3];
int i;
int j;
int intercambio;
struct TGanador 
{
    int pri;
    int seg;
    int ter;
};
struct TGanador gan;

printf("\nBienvenido al sistema de tiempo de Natacion!!!\n");
printf("Ingrese la cantidad de tiempo del primer nadador:");
scanf("%d", &tiempos[0]);
printf("\nIngrese la cantidad de tiempo del segundo nadador:");
scanf("%d", &tiempos[1]);
printf("\nIngrese la cantidad de tiempo del tercer nadador:");
scanf("%d", &tiempos[2]);

for(i = 0; i < 2; i++){
    for (j = 0; j < 2 - i; j++)
    {
        if (tiempos[j] > tiempos[j+1])
        {
            intercambio = tiempos[j];
            tiempos[j] = tiempos[j+1];
            tiempos[j+1] = intercambio;
        }
    }
}           //Metodo burbuja para ordenar

gan.pri = tiempos[0];
gan.seg = tiempos[1];
gan.ter = tiempos[2];

printf("\nPrimer Ganador: %d", gan.pri);
printf("\nSegundo Ganador: %d", gan.seg);
printf("\nTercer Ganador: %d\n", gan.ter);
}

//Actividad 8
void Actividad8(){
int n;

printf("\nIngrese el numero para saber si es multiplo de 2, 3 o de 2 y 3:");
scanf("%d", &n);
if ((n%2==0)&&(n%3==0))
{
    printf("\n%d es multipo de 2 y de 3 a la vez\n",n);
}else{
    if (n%2==0)
    {
        printf("\n%d es multipo de 2\n",n);
    }else{
        if (n%3==0)
        {
            printf("\n%d es multipo de 3\n",n);
        }
    }
}
}

//Actividad 11
void Actividad11(){
int mesAnio;
int cantDias;
do
{
    printf("\nIngrese el mes del anio (entre el 1 y el 12):");
    scanf("%d", &mesAnio);
} while (!(mesAnio >= 1 && mesAnio <= 12));

if((mesAnio == 1) || (mesAnio == 3) || (mesAnio == 5) || (mesAnio == 7) || (mesAnio == 8) || (mesAnio == 10) || (mesAnio == 12)){
    cantDias = 31;
}else{
    if((mesAnio == 4) || (mesAnio == 6) || (mesAnio == 9) || (mesAnio == 11)){
        cantDias = 30;
    }else{
        if(mesAnio == 2){
            cantDias = 28;
        }
    }
}
printf("\nPor lo que en el mes %d hay %d dias\n", mesAnio, cantDias);
}

//Actividad 12
void Actividad12(){
int ladoUno;
int ladoDos;
int ladoTres;

printf("\nIngrese el primer lado del triangulo:\n");
scanf("%d", &ladoUno);
printf("\nIngrese el segundo lado del triangulo:\n");
scanf("%d", &ladoDos);
printf("\nIngrese el tercer lado del triangulo:\n");
scanf("%d", &ladoTres);

if (ladoUno == ladoDos && (ladoDos == ladoTres)){
    printf("\nEs un triangulo equilatero\n");
}else{
    if((ladoUno == ladoDos) && (ladoDos != ladoTres)){
        printf("\nEs un triangulo isosceles\n");
    }else{
        if((ladoDos == ladoTres) && (ladoTres != ladoUno)){
            printf("\nEs un triangulo isosceles\n");
        }else{
            if((ladoUno == ladoTres) && (ladoTres != ladoDos)){
                printf("\nEs un triangulo isosceles\n");
            }else{
                printf("\nEs un triangulo escaleno\n");
            }
        }
    }
}

}








