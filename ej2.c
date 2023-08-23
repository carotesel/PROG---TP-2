#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    // Aumentar el tamaño del vector a 15
    int Nuevtamanio = 15;
    vector = (int *)realloc(vector, Nuevtamanio * sizeof(int));

    printf("Ingrese 5 valores adicionales:\n");
    for (int i = tamanio; i < Nuevtamanio; i++)
    {
        printf("Ingrese valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    printf("Valores actualizados:\n");
    for (int i = 0; i < Nuevtamanio; i++)
    {
        printf("[%d] %d ", i, vector[i]);
    }

    // Liberar memoria al final
    free(vector);

    return 0;
}