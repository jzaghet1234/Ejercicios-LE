#include <stdio.h>
    int vector1[5];
    int vector2[5];
    int j;
void comparar(int v1[], int v2[]){
    printf("Comparacion posicion por posicion:\n");
    for(j=0;j<5;j++){
        if(v1[j]>v2[j]){
            printf("Posicion %d:es mayor el vector 1 (%d>%d)\n", j + 1, v1[j], v2[j]);
        } else if (v2[j]>v1[j]){
            printf("Posicion %d:es mayor el vector 2 (%d>%d)\n", j + 1, v2[j], v1[j]);
        } else {
            printf("Posicion %d:son iguales (%d)\n", j + 1, v1[j]);
        }
    }
}
int main() 
{
    printf("Ingrese 5 numeros del vector 1:\n");
    for(j=0;j<5;j++){
        printf("Dato %d:", j + 1);
        scanf("%d", &vector1[j]);
    }
    printf("Ingrese 5 numeros del vector 2:\n");
    for(j=0;j<5;j++){
        printf("Dato %d:", j + 1);
        scanf("%d", &vector2[j]);
    }
    comparar(vector1, vector2);
    return 0;
}
