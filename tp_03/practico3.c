//Practico 3 (Cada modulo es la actividad completa)

#include <stdio.h>
#include <math.h>
#include <string.h>

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
void Actividad13();
void Actividad14();
void Actividad15();
void Actividad16();
void Actividad17();



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
                Actividad13();
                break;
            case 14:
                Actividad14();
                break;
            case 15:
                Actividad15();
                break;
            case 16:
                Actividad16();
                break;
            case 17:
                Actividad17();
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
void Actividad12() {
    int ladoUno, ladoDos, ladoTres;

    printf("\nIngrese el primer lado del triangulo:\n");
    scanf("%d", &ladoUno);
    printf("\nIngrese el segundo lado del triangulo:\n");
    scanf("%d", &ladoDos);
    printf("\nIngrese el tercer lado del triangulo:\n");
    scanf("%d", &ladoTres);

    if (ladoUno == ladoDos && ladoDos == ladoTres) {
        printf("\nEs un triangulo equilatero\n");
    } else if (ladoUno == ladoDos || ladoDos == ladoTres || ladoUno == ladoTres) {
        printf("\nEs un triangulo isosceles\n");
    } else {
        printf("\nEs un triangulo escaleno\n");
    }
}

//Actividad 13
void Actividad13(){
    float priTiempo, segTiempo, terTiempo;

    printf("\nBienvenido al sistema de tiempo de Natacion!!!\n");
    printf("Ingrese la cantidad de tiempo del primer nadador:");
    scanf("%f", &priTiempo);  
    printf("\nIngrese la cantidad de tiempo del segundo nadador:");
    scanf("%f", &segTiempo);
    printf("\nIngrese la cantidad de tiempo del tercer nadador:");
    scanf("%f", &terTiempo);

    if (priTiempo < segTiempo && segTiempo < terTiempo) {
        printf("\nAscendente\n");
    } else if (priTiempo > segTiempo && segTiempo > terTiempo) {
        printf("\nDescendente\n");
    } else {
        printf("\nDesordenado\n");
    }
}

//Actividad 14
void Actividad14(){
int horasTrabajo;
float salario;

printf("Ingrese la cantidad de horas trabajadas: ");
scanf("%d", &horasTrabajo);

if(horasTrabajo <= 40){
    salario = horasTrabajo * 40;
}else{
    salario = (40*10) + ((horasTrabajo - 40) * 15);
}

printf("\nSu salario es de %2.f\n", salario);
}

//Actividad 15
void Actividad15() {
    char respuestaUno[30];
    char respuestaDos[30];
    char respuestaTres[30];
    int puntajeFinal;

    puntajeFinal = 0;

    printf("\nIngrese la respuesta numero uno: ");
    scanf("%29s", respuestaUno);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("\nIngrese la respuesta numero dos: ");
    if (fgets(respuestaDos, sizeof(respuestaDos), stdin) != NULL) {
        respuestaDos[strcspn(respuestaDos, "\n")] = 0; 
    }

    printf("\nIngrese la respuesta numero tres: ");
    if (fgets(respuestaTres, sizeof(respuestaTres), stdin) != NULL) {
        respuestaTres[strcspn(respuestaTres, "\n")] = 0;  
    }

    if (strcmp(respuestaUno, "Donatelo") == 0) {
        puntajeFinal += 100;                           
    }
    if (strcmp(respuestaDos, "La Piedad") == 0) {     
        puntajeFinal += 100;
    }
    if (strcmp(respuestaTres, "Rafael") == 0) {
        puntajeFinal += 100;
    }

    printf("\nEl puntaje final es de %d\n", puntajeFinal);
}

//Actividad 16
void Actividad16(){
    float a;
    float b;
    float c;
    float d;

    printf("\nIngrese el numero correspondiente para la variable a: ");
    scanf("%f", &a);
    printf("\nIngrese el numero correspondiente para la variable b: ");
    scanf("%f", &b);

    if(a == 0 && b == 0){
        printf("\nEcuacion degenerada\n");
    }
    
    if (a == 0 && b != 0)
    {
        printf("\nExiste una unica raiz\n");
    }

    if (a != 0 && b != 0)
    {
        printf("\nIngrese el numero correspondiente para la variable c:");
        scanf("%f", &c);
        d = b * b - 4 * a * c;

        if(d > 0){
            printf("\nHay dos numeros reales\n");
        }else{
            if(d == 0){
                printf("\nHay una sola raiz\n");
            }else{
                if(d < 0){
                    printf("\nHay dos raices complejas\n");
                }
            }
        }
    }
}

//Actividad 17
void Actividad17(){

float x1;       //coordenadas vertices opuesto rectangulo
float y3;       //coordenadas vertices opuesto rectangulo
float x2;       //coordenadas vertices opuesto rectangulo
float y2;       //coordenadas vertices opuesto rectangulo
float r;        //radio
float cx;       //coordenadas del centro del circulo
float cy;       //coordenadas del centro del circulo
int dentroRec = 0;  //Valor logico
int dentroCir = 0;  //valor logico
float d;
char mensaje[70];   //el mensaje que dira los casos a saber
float px;       //x del punto problema
float py;       //y del punto problema
float res1;     //resultado de restar px - cx para ver si el punto problema pertene al circulo
float res2;     //resultado de restar py - cy para ver si el punto problema pertene al circulo

printf("Ingrese el valor x del primer vertice del rectangulo \n ");
    scanf("%f", &x1);
    printf("Ingrese el valor y del primer vertice del rectangulo \n ");
    scanf("%f", &y3);
    printf("Ingrese el valor x del vertice opuesto al primero del rectangulo \n ");
    scanf("%f", &x2);
    printf("Ingrese el valor y del vertice opuesto al primero del rectangulo \n ");
    scanf("%f", &y2);
    printf("Ingrese el valor x de las coordenadas del punto central del circulo \n ");
    scanf("%f", &cx);
    printf("Ingrese el valor y de las coordenadas del punto central del circulo \n ");
    scanf("%f", &cy);
    printf("Ingrese el radio del circulo \n ");
    scanf("%f", &r);
    printf("Ingrese el valor x de las coordenadas del punto a saber \n ");
    scanf("%f", &px);
    printf("Ingrese el valor y de las coordenadas del punto a saber \n ");
    scanf("%f", &py);

    //Condicional para saber si el punto problema pertenece o no al rectangulo

    if ((px>=x1)&&(px<=x2)&&(py>=y3)&&(py<=y2)){
        
        dentroRec = 1; //DentroRect es verdadero
    }else{
        if ((px>=x2)&&(px<=x1)&&(py>=y2)&&(py<=y3))
        {
            dentroRec = 1; //DentroRect es verdadero
        }else{
            if ((px>=x2)&&(px<=x1)&&(py>=y3)&&(py<=y2))
            {
                dentroRec = 1; //DentroRect es verdadero
            }else{
                if ((px>=x1)&&(px<=x2)&&(py>=y2)&&(py<=y3))
                {
                    dentroRec = 1; //DentroRect es verdadero
                }
                
            }
            
        }
        
    }
    
    if (r>0)
    {
        res1 = px - cx;         //resta necesaria para calculo siguiente
        res2 = py - cy;         //resta necesaria para calculo siguiente
    
    d = sqrt(res1*res1) + (res2*res2);      //teorema de pitagoras

    //Condicional para saber si el punto problema pertenece o no al circulo

    if (d<=r) //distancia es menor al radio del circulo 
    {
        dentroCir = 1;
    }else
    {
        dentroCir = 0;
    }

    //Luego de todos los calculos, llega el momento de saber a donde pertenece el punto problema
    
    if ((dentroCir==1)&&(dentroRec==1))
    {
        strcpy(mensaje, "El punto es interior al circulo y al rectangulo");
    }else{
        if ((dentroCir==1)&&(dentroRec==0))
        {
            strcpy(mensaje, "El punto es interior al circulo");
        }else{
            if ((dentroCir==0)&&(dentroRec==1))
            {
                strcpy(mensaje, "El punto es interior al rectangulo");
            }else{
                if ((dentroCir==0)&&(dentroRec==0))
                {
                    strcpy(mensaje, "El punto no se encuentra en el circulo y tampoco en el rectangulo");
                }
                
            }
            
        }
        
    }
    }else{
        if (r<=0)
        {
        strcpy(mensaje, "Ingrese el radio mayor a 0 porfavor");
        }
        
    }
    

    printf("%s \n", mensaje);

}

//Actividad 18
void Actividad18(){
    
}
