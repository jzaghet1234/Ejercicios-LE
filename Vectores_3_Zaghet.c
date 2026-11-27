#include <stdio.h>

int main()
{
    int vector[5];
    int j;
    int posicion;
    char seguir;
    printf("Ingrese 5 numeros:\n");
    for(j=0;j<5;j++){
        printf("Dato %d:", j + 1);
        scanf("%d", &vector[j]);
    }
    do {
        printf("A que posicion queres acceder?(0 a 4):");
        scanf("%d", &posicion);
        printf("El valor guardado es:%d\n", vector[posicion]);
        printf("Queres seguir?(s/n):");
        scanf(" %c", &seguir);
    } while(seguir == 's');
    printf("El programa finalizo\n");
    return 0;
}
