#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaración de punteros y variables
    int *ptrI, varI;
    char *ptrC, varC;
    float *ptrF, varF;

    // Relación entre puntero y variables
    ptrI = &varI;
    ptrC = &varC;
    ptrF = &varF;

    *ptrI = 525;
    *ptrC = 'A';

    printf("%d %p\n", varI, ptrI);
    printf("%c %p\n", varC, ptrC);
    return 0;
}
