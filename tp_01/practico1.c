//Practico 1

#include <stdio.h>

//variables a utilizar
int superficieRayada;
int superficieNoRayada;
int cantidadPuntos;
int cantidadSemillas;



//perfiles de acciones
void Actividad1(int *areaRayada);
void Actividad3(int *areaNoRayada);
void Actividad4(int *cantPuntos);
void Actividad5(int *cantSemillas);




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
        printf("8) Salir");
        printf("\nIngrese la opcion: ");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1: 
                Actividad1(&superficieRayada);
                printf("El area de la superficie rayada es de %d metros\n", superficieRayada);
                break;
            case 3: 
                Actividad3(&superficieNoRayada);
                printf("El area de la superficie no rayada es de %d metros\n", superficieNoRayada);
                break;
            case 4:
                Actividad4(&cantidadPuntos);
                printf("La cantidad de puntos obtenida es de %d\n", cantidadPuntos);
                break;
            case 5:
                Actividad5(&cantidadSemillas);
                printf("La cantidad de semillas es de %d\n", cantidadSemillas);
                break;
            case 8: 
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida, vuelva a intentarlo.\n");
                break;
        }
    }while (opcion != 8);

    return 0;
}

//actividad 1
void Actividad1(int *areaRayada){ 
int a;
int supRayada;
int supCuadrado;
int supTriangulo;

printf("\nIngrese lo que mide, en metros, uno de los lados del cuadrado: ");
scanf("%d", &a);

supCuadrado = a * a;
supTriangulo = ((a/2) * (a/2)) / 2;
supRayada = supCuadrado - supTriangulo;
*areaRayada = supRayada;
}

//actividad 2
void Actividad2(){

}

//actividad 3
void Actividad3(int *areaNoRayada) {
    int a;
    float areaCirc;
    int areaCuad;

    printf("\nIngrese lo que mide, en metros, uno de los lados del cuadrado: ");
    scanf("%d", &a);

    areaCuad = a * a;
    areaCirc = 3.14 * (a / 2.0) * (a / 2.0); 
    *areaNoRayada = areaCuad - areaCirc;
}

//actividad 4
void Actividad4(int *cantPuntos){
int parGan;
int parPer;
int parEmp;

printf("Ingrese la cantidad de partidos ganados: ");
scanf("%d", &parGan);
printf("Ingrese la cantidad de partidos empatados: ");
scanf("%d", &parEmp);
printf("Ingrese la cantidad de partidos perdidos: ");
scanf("%d", &parPer);

*cantPuntos = parGan * 3 + parEmp * 1 + parPer * 0;
}

void Actividad5(int *cantSemillas){
int altoLote;
int anchoLote;
int loteM2;

printf("Ingrese la altura del lote: ");
scanf("%d", &altoLote);
printf("Ingrese la ancho del lote: ");
scanf("%d", &anchoLote);
loteM2 = anchoLote * altoLote;
*cantSemillas = loteM2 * 80;

}