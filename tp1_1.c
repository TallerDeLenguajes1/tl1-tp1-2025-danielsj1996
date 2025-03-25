#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("hola mundo");
    /*Declare un puntero en el procedimiento principal que apunte a una
    variable de algún tipo y muestre por pantalla lo siguiente:
    1) El contenido del puntero
    2) La dirección de memoria almacenada por el puntero.
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la
    función sizeof()*/

    int variable = 42;             // Variable de tipo int
    int *puntVariable = &variable; // Puntero que almacena la direccion de variable

    printf("1) El contenido del puntero es: %d\n", *puntVariable);
    printf("2) La direccion de memoria almacenada por el puntero es: %p\n", puntVariable);
    printf("3) La direccion de memoria de la variable es: %p\n", &variable);
    printf("4) La direccion de memoria del puntero es : %p\n", &puntVariable);
    printf("5) El Tamaño de memoria utilizado por la variable: %lu bytes\n", sizeof(variable));

}
