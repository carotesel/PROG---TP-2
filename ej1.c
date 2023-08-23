#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*1) Hacer un programa que permita armar un vector de 10 posiciones en memoria
dinámica. El vector debe estar inicializado en 0. El programa, deberá mostrar en pantalla
los valores inicializados [0,0,0,0,0,0,0,0,0,0] para luego pedirle al usuario que ingrese 10
valores enteros por teclado. Esos valores serán guardados en el vector dinámico y luego
deben ser mostrados en pantalla.*/

int main()
{
    srand(time(NULL));
    int *vector = NULL;
    int tamanio = 10;

    vector = (int *)calloc(tamanio, sizeof(int));

    for (int i = 0; i < tamanio; i++)
    {
        printf("[%d] %d ", i, vector[i]);
    }
    printf("\n");

    for (int i = 0; i < tamanio; i++)
    {
        printf("\nIngrese valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("\n");

    for (int i = 0; i < tamanio; i++)
    {
        printf("[%d] %d ", i, vector[i]);
    }

    free(vector);

    return 0;
}