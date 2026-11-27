#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    char año[30];
};
int main() 
{
    struct Alumno alumno1;
    printf("Ingrese el nombre:");
    scanf("%s", alumno1.nombre);
    printf("Ingrese la edad:");
    scanf("%d", &alumno1.edad);
    printf("Ingrese el año:");
    scanf("%s", alumno1.año);
    printf("Datos del alumno\n");
    printf("El nombre es:%s\n", alumno1.nombre);
    printf("La edad es:%d\n", alumno1.edad);
    printf("El año es:%s\n", alumno1.año);
    printf("Modificar datos del alumno\n");
    printf("Ingrese el nuevo nombre:");
    scanf("%s", alumno1.nombre);
    printf("Ingrese la nueva edad:");
    scanf("%d", &alumno1.edad);
    printf("Ingrese el nuevo año:");
    scanf("%s", alumno1.año);
    printf("Datos modificados del alumno\n");
    printf("El nombre es:%s\n", alumno1.nombre);
    printf("La edad es:%d\n", alumno1.edad);
    printf("El año es:%s\n", alumno1.año);
    return 0;
}
