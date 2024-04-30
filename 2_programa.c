#include <stdio.h>

int main(int argc, char *argv[]){

    int matriz[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };

    int matriz_transpuesta[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz_transpuesta[i][j] = matriz[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("----------------------\n");


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz_transpuesta[i][j]);
        }
        printf("\n");
    }

    return 0;
}