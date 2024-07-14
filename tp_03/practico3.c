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
        printf("9) Actividad 9\n");
        printf("10) Actividad 10\n");
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
                
                break;
            case 8:
        }
    }while (opcion != 21);

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


















