<stdio.h>
#include <stdio.h>

int main() {
      struct persona
    {
        int matricula;
        char nombre[20];
        char direccion [50];
        char carrera [25];
        float promedio;
    };
    struct persona alumno1;
    printf ("Ingrese el número de matricula ");
    scanf ("%d",&alumno1.matricula);
    printf ("alumno1 %d", alumno1.matricula);
     printf ("Ingrese el nombre del estudiante ");
    scanf ("%s",&alumno1.nombre);
    printf ("alumno1 %s", alumno1.nombre);
     printf ("Ingrese la direccion del estudiante");
    scanf ("%s",&alumno1.direccion);
    printf ("alumno1 %s", alumno1.direccion);
    
    
    return 0;
}
  