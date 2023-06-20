#include <stdio.h>

int cubo(int *c)
{
    int num;
    num = *(c) * *(c) * *(c);
    return num;

}

int main()
{
    int numero, resultado, *ptrc;
    ptrc = &numero;
    printf("Ingrese un número\n");
    scanf("%d", &numero);

    printf("La respuesta es: %d", cubo,(&numero));

    return 0;
}

