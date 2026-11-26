#include <stdio.h>

int main()
{
    int vector[5];
    int i;
    int opcion;
    int pos;
    int nuevoValor;
    printf("Ingrese 5 numeros:\n");
    for(i=0;i<5;i++){
        printf("Dato %d (posicion %d):", i + 1, i);
        scanf("%d", &vector[i]);
    }
    do {
        printf("Menu de opciones:\n");
        printf("1 es ver una posicion\n");
        printf("2 es modificar una posicion\n");
        printf("3 es imprimir todo el vector\n");
        printf("4 es salir\n");
        printf("Elija una opcion:");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Elija una posicion del 0 al 4:");
                scanf("%d", &pos);
                if (pos>=0 && pos<5){
                    printf("Valor en posicion %d: %d\n", pos, vector[pos]);
                } else {
                    printf("Posicion invalida\n");
                }
                break;
            case 2:
                printf("Que posicion queres modificar del 0 al 4:");
                scanf("%d", &pos);
                if (pos>=0 && pos<5){
                    printf("Valor actual:%d\nIngrese el nuevo valor:", vector[pos]);
                    scanf("%d", &nuevoValor);
                    vector[pos] = nuevoValor;
                    printf("Posicion %d actualizada\n", pos);
                } else {
                    printf("Posicion invalida\n");
                }
                break;
            case 3:
                printf("Valores actuales del vector:\n");
                for(i=0;i<5;i++){
                    printf("[%d] = %d\n", i, vector[i]);
                }
                break;
            case 4:
                printf("El programa termino\n");
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}
