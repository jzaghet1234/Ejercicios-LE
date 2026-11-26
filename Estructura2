#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    char año[30];
};
int main() 
{
    struct Alumno alumnos[3];
    int i;
    for(i=0;i<3;i++){
        printf("Alumno %d\n", i + 1);
        printf("Ingrese el nombre:");
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese la edad:");
        scanf("%d", &alumnos[i].edad);
        printf("Ingrese el año:");
        scanf("%s", alumnos[i].año);
    }
    printf("\nDatos de los alumnos:\n");
    for(i=0;i<3;i++){
        printf("\nAlumno %d:\n",i+1);
        printf("El nombre es:%s\n", alumnos[i].nombre);
        printf("La edad es:%d\n", alumnos[i].edad);
        printf("El año es:%s\n", alumnos[i].año);
    }
    printf("\nModificar datos de los 3 alumnos\n");
    for(i=0;i<3;i++){
        printf("\nModificar alumno %d:\n", i + 1);
        printf("Ingrese el nuevo nombre:");
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese la nueva edad:");
        scanf("%d", &alumnos[i].edad);
        printf("Ingrese el nuevo año:");
        scanf("%s", alumnos[i].año);
    }
    printf("\nDatos modificados de los alumnos\n");
    for(i=0;i<3;i++){
        printf("\nAlumno %d:\n",i+1);
        printf("El nombre es:%s\n", alumnos[i].nombre);
        printf("La edad es:%d\n", alumnos[i].edad);
        printf("El año es:%s\n", alumnos[i].año);
    }
    return 0;
}
