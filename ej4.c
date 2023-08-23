#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*2) Utilizando el mismo programa anterior, se pide que luego de mostrar los 10 valores
ingresados por teclado, ahora se ingresen 5 valores adicionales al nuevo vector. Es decir,
el vector debe tener 15 posiciones, pero se debe utilizar el mismo puntero que ahora
tendrá 15 lugares. Pruebe el programa, y explique qué sucede. Capture pantallas y
pégales como parte de la respuesta. */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[20];
    char apellido[20];
    int edad;
    int dni;

} Persona;

int main()
{
    Persona *P, *P2;

    P = (Persona *)malloc(sizeof(Persona));
    P2 = (Persona *)malloc(sizeof(Persona));

    if (P == NULL || P2 == NULL)
    {
        printf("\nERROR");
    }
    else
    {
        printf("Ingrese nombre persona 1:");
        fflush(stdin);
        gets(P->nombre);

        printf("\nIngrese apellido 1:");
        fflush(stdin);
        gets(P->apellido);

        printf("\nIngrese edad 1:");
        scanf("%d", &P->edad);

        printf("\nIngrese dni 1:");
        scanf("%d", &P->dni);

        printf("\PERSONA 1 CARGADA...\n\n");

        printf("Ingrese nombre persona 2:");
        fflush(stdin);
        gets(P2->nombre);

        printf("\nIngrese apellido 2:");
        fflush(stdin);
        gets(P2->apellido);

        printf("\nIngrese edad 2:");
        scanf("%d", &P2->edad);

        printf("\nIngrese dni 2:");
        scanf("%d", &P2->dni);

        printf("\nPERSONA 2 CARGADA...\n\n");

        printf("\nPersona 1: %s %s, Edad %d, DNI %d", P->nombre, P->apellido, P->edad, P->dni);
        printf("\nPersona 2: %s %s, Edad %d, DNI %d", P2->nombre, P2->apellido, P2->edad, P2->dni);
    }
    return 0;
}