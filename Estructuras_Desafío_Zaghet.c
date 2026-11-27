#include <stdio.h>

typedef struct {
    int edad;
    char iniciales[10];
    char tipoSangre[5];
    float altura;
}Paciente;
    int opcion;
int main()
{
    Paciente p1;
    printf("Ingrese la edad:");
    scanf("%d", &p1.edad);
    printf("Ingrese las iniciales:");
    scanf("%s", p1.iniciales);
    printf("Ingrese el tipo de sangre:");
    scanf("%s", p1.tipoSangre);
    printf("Ingrese la altura:");
    scanf("%f", &p1.altura);
    do {
        printf("\nQue dato queres imprimir?\n");
        printf("1 es edad\n");
        printf("2 es iniciales\n");
        printf("3 es tipo de sangre\n");
        printf("4 es altura\n");
        printf("5 es todos los datos\n");
        printf("0 es salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("La edad es:%d\n", p1.edad);
                break;
            case 2:
                printf("Las iniciales son:%s\n", p1.iniciales);
                break;
            case 3:
                printf("El tipo de sangre es:%s\n", p1.tipoSangre);
                break;
            case 4:
                printf("La altura es:%.2f\n", p1.altura);
                break;
            case 5:
                printf("La edad es:%d\n", p1.edad);
                printf("Las iniciales son:%s\n", p1.iniciales);
                printf("El tipo de sangre es:%s\n", p1.tipoSangre);
                printf("La altura es:%.2f\n", p1.altura);
                break;
            case 0:
                printf("Termino el programa\n");
                break;
            default:
                printf("La opcion no es correcta\n");
                break;
        }
    } while (opcion != 0);
    return 0;
}
