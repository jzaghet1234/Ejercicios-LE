#include <stdio.h>

int main()
{
    int matriz [3][2];
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("Ingresar el valor de la posicion[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    return 0;
}
