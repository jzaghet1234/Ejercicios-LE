#include <stdio.h>

int main()
{
    int i;
    int j;
    int tablaAndOr[4][4]={
        {0, 0, 0, 0},
        {0, 1, 0, 0},
        {1, 0, 0, 0},
        {1, 1, 0, 0}
    };
    int tablaXor[4][3]={
        {0, 0, 0},
        {0, 1, 0},
        {1, 0, 0},
        {1, 1, 0}
    };
    int tablaNand[4][3]={
        {0, 0, 1},
        {0, 1, 1},
        {1, 0, 1},
        {1, 1, 0}
    };
    for(i=0;i<4;i++){
        printf("Fila %d (A=%d y B=%d) Ingrese AND:", i, tablaAndOr[i][0], tablaAndOr[i][1]);
        scanf("%d", &tablaAndOr[i][2]);
        printf("Fila %d (A=%d y B=%d) Ingrese OR:", i, tablaAndOr[i][0], tablaAndOr[i][1]);
        scanf("%d", &tablaAndOr[i][3]);
    }
    for(i=0;i<4;i++){
        printf("Fila %d (A=%d y B=%d) Ingrese XOR:", i, tablaXor[i][0], tablaXor[i][1]);
        scanf("%d", &tablaXor[i][2]);
    }
    printf("\nMatrices:\n");
    printf("\nA\tB\tAND\tOR\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t", tablaAndOr[i][j]);
        }
        printf("\n");
    }
    printf("\nA\tB\tXOR\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d\t", tablaXor[i][j]);
        }
        printf("\n");
    }
    printf("\nA\tB\tNAND\n");
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d\t", tablaNand[i][j]);
        }
        printf("\n");
    }
    return 0;
}
