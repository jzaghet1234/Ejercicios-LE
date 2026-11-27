#include <stdio.h>
#include <string.h>

char opcion[20];
int main()
{
    do {
        printf("Escriba \"Continuar\" o \"Finalizar\":");
        scanf("%s", opcion);
        if (strcmp(opcion, "Continuar") == 0) {
            printf("Continuando\n");
        } else if (strcmp(opcion, "Finalizar") == 0) {
            printf("Finalizando\n");
        } else {
            printf("ERROR\n");
        }
    } while (strcmp(opcion, "Finalizar") != 0);
    return 0;
}
