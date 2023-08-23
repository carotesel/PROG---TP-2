#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*5) Modificar el programa anterior, para que ahora, exista un vector de estructura Persona,
cuyo tamaño es decidido por el usuario cuando el programa comienza. Ej:
Ingrese la cantidad de personas a cargar: 10
Quiere decir que el vector de estructuras en memoria dinámica tendrá un tamaño de
10.
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

        for (int i = 0; i < N; i++)
        {
            printf("\nPersona %d: %s %s, Edad %d, DNI %d", i + 1, P[i].nombre, P[i].apellido, P[i].edad, P[i].dni);
        }
    }
    return 0;
}