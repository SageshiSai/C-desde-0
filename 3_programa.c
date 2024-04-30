#include <stdio.h>
#include <stdlib.h>

int main(void){

    int filas, columnas;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    // Asignar memoria para un array de punteros que representen las filas de la matriz
    int **matriz = (int **)malloc(filas * sizeof(int *));
    if (matriz == NULL) {
        printf("Error: No se pudo asignar memoria para las filas de la matriz.");
        return 1;
    }

    // Asignar memoria para cada fila individualmente
    for (int i = 0; i < filas; i++) {
        matriz[i] = (int *)malloc(columnas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error: No se pudo asignar memoria para la fila %d de la matriz.", i);
            return 1;
        }
    }

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        // Asignar memoria para un array de enteros que representen las columnas de la matriz
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberar la memoria asignada para cada fila individualmente
    for (int i = 0; i < filas; i++) {
        free(matriz[i]);
    }

    // Liberar la memoria asignada para el array de punteros
    free(matriz);

    return 0;
}