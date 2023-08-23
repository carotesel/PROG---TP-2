#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*6) Modifique el programa anterior, pero implementando una función que se llame
cargar_datos, que no devuelva nada, pero que reciba como parámetro el vector de
estructuras.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nombre[20];
    char apellido[20];
    int edad;
    int dni;

} Persona;

void cargarDatos(Persona *P, int N);

int main()
{
    Persona *P;

    int N;

    printf("\nIngrese tamanio vector:");
    scanf("%d", &N);

    P = (Persona *)malloc(N * sizeof(Persona));

    if (P == NULL)
    {
        printf("\nERROR");
    }
    else
    {

        cargarDatos(P, N);

        for (int i = 0; i < N; i++)
        {
            printf("\nPersona %d: %s %s, Edad %d, DNI %d", i + 1, P[i].nombre, P[i].apellido, P[i].edad, P[i].dni);
        }
    }
    return 0;
}

void cargarDatos(Persona *P, int N)
{

    for (int i = 0; i < N; i++)
    {
        printf("\nIngrese nombre persona %d:", i + 1);
        fflush(stdin);
        gets(P[i].nombre);

        printf("\nIngrese apellido %d:", i + 1);
        fflush(stdin);
        gets(P[i].apellido);

        printf("\nIngrese edad %d:", i + 1);
        scanf("%d", &P[i].edad);

        printf("\nIngrese dni %d:", i + 1);
        scanf("%d", &P[i].dni);
    }
}