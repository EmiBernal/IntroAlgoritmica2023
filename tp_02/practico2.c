//Practico 2 

#include <stdio.h>
#include <math.h>

//variables
int superficieRayada;
int superficieNoRayada;
int cantidadSemillas;
float cantidadAlimento;
int areaDelSintetico;
int cocienteEntero;
int restoDivision;
int numero1;
int numero2;
int dineroCardio;
int dineroNeoclinica;
int dineroTerapia;
int dineroAdministracion;

//Perfiles de acciones
void Actividad1(int *areaRayada);
void Actividad2(int *areaNoRayada);
void Actividad3(int *cantSemillas);
void Actividad4(float *cantAlimento);
void Actividad5(int *areaSintetico);
void Actividad6(int *coEntero, int *restoDiv);
void Actividad7(int *a, int *b);
void Actividad8(int *cardioDinero, int *neoDinero, int *terapDinero, int *adminDinero);

int main () {

    int opcion;

    do {
        printf("\nMenu de opciones: \n");
        printf("1) Actividad 1\n");
        printf("2) Actividad 2\n");
        printf("3) Actividad 3\n");
        printf("4) Actividad 4\n");
        printf("5) Actividad 5\n");
        printf("6) Actividad 6\n");
        printf("7) Actividad 7\n");
        printf("8) Actividad 8\n");
        printf("9) Salir\n");
        printf("Ingrese la opcion: ");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                Actividad1(&superficieRayada);
                printf("El area de la superficie rayada es de %d metros\n", superficieRayada);
                break;
            case 2:
                Actividad2(&superficieNoRayada);
                printf("El area de la superficie no rayada es de %d metros\n", superficieNoRayada);
                break;
            case 3:
                Actividad3(&cantidadSemillas);
                printf("La cantidad de semillas es de %d\n", cantidadSemillas);
                break;
            case 4:
                Actividad4(&cantidadAlimento);
                printf("La cantidad de alimento que debe suministrar es %.2f gramos\n", cantidadAlimento);
                break;
            case 5:
                Actividad5(&areaDelSintetico);
                printf("El area del sintetico es de %d metros cuadrados\n", areaDelSintetico);
                break;
            case 6:
                Actividad6(&cocienteEntero, &restoDivision);
                printf("El cociente entero es %d y el resto de la division entera es %d\n", cocienteEntero, restoDivision);
                break;
            case 7:
                Actividad7(&numero1,&numero2);
                printf("\n\nHan sido cambiado los numeros, ahora el primero es %d y el segundo %d\n", numero1, numero2);
                break;
            case 8:
                Actividad8(&dineroCardio,&dineroNeoclinica,&dineroTerapia,&dineroAdministracion);
                printf("\nCardio recibira $%d\n",dineroCardio);
                printf("NeoClinica recibira $%d\n",dineroNeoclinica);
                printf("Terapia recibira $%d\n",dineroTerapia);
                printf("Administracion recibira $%d\n",dineroAdministracion);
                break;
            case 9:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida, vuelva a intentarlo.\n");
                break;
        }
    }while (opcion != 9);

    return 0;
}

// Actividad 1
void Actividad1(int *areaRayada) {
    int a;
    int supRayada;
    int supCuadrado;
    int supTriangulo;

    printf("\nIngrese lo que mide, en metros, uno de los lados del cuadrado: ");
    scanf("%d", &a);

    supCuadrado = a * a;
    supTriangulo = ((a / 2) * (a / 2)) / 2;
    supRayada = supCuadrado - supTriangulo;
    *areaRayada = supRayada;
}

// Actividad 2
void Actividad2(int *areaNoRayada) {
    int a;
    float areaCirc;
    int areaCuad;

    printf("\nIngrese lo que mide, en metros, uno de los lados del cuadrado: ");
    scanf("%d", &a);

    areaCuad = a * a;
    areaCirc = 3.14 * (a / 2.0) * (a / 2.0);
    *areaNoRayada = areaCuad - areaCirc;
}

// Actividad 3
void Actividad3(int *cantSemillas) {
    int altoLote;
    int anchoLote;
    int loteM2;

    printf("Ingrese la altura del lote en metros: ");
    scanf("%d", &altoLote);
    printf("Ingrese lo ancho que es el lote en metros: ");
    scanf("%d", &anchoLote);
    loteM2 = anchoLote * altoLote;
    *cantSemillas = loteM2 * 80;
}

// Actividad 4
void Actividad4(float *cantAlimento){
    float peso;
    
    printf("Indique cual es el peso corporal del animal: ");
    scanf("%f", &peso);
    *cantAlimento = peso * 0.02;
}

// Actividad 5
void Actividad5(int *areaSintetico) {
    int a;
    int b;
    int areaRect;
    double areaCab;
    int r;
    double potencia;

    printf("Ingrese el largo de la parte rectangular: ");
    scanf("%d", &a);
    printf("Ingrese el ancho de la parte rectangular: ");
    scanf("%d", &b);
    areaRect = a * b;  
    r = b / 2;        
    potencia = pow(r, 2);
    areaCab = M_PI * potencia;  
    *areaSintetico = areaRect + (int)areaCab; 
}

// Actividad 6
void Actividad6(int *coEntero, int *restoDiv){
int a;
int b;

printf("Ingrese el primer numero: ");
scanf("%d", &a);
printf("Ingrese el segundo numero: ");
scanf("%d", &b);

*coEntero = a / b;
*restoDiv = a % b;
}

// Actividad 7
void Actividad7(int *a, int *b){
int aux;

printf("Ingrese el primer numero: ");
scanf("%d", &(*a));
printf("Ingrese el segundo numero: ");
scanf("%d", &(*b));

printf("Se ha ingresado como primero numero al %d y como segundo numero al %d", (*a), (*b));
aux = *b;
*b = *a;
*a = aux;
}

// Actividad 8
void Actividad8(int *cardioDinero, int *neoDinero, int *terapDinero, int *adminDinero){
int totalDo;

printf("Ingrese el total de dinero ingresado por la donacion: ");
scanf("%d", &totalDo);
*cardioDinero = totalDo * 0.3;
*neoDinero = *cardioDinero * 0.7;
*terapDinero = *neoDinero * 0.8;
*adminDinero = totalDo - *cardioDinero - *neoDinero - *terapDinero;
}