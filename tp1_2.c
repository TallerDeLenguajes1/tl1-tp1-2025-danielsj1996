#include <stdio.h>
#include <stdlib.h>


int Cuadrado(int num1);
void CuadradoVoid(int num1);
void MostrarDireccion(int *num1);
void invertir(int a, int b);
void orden(int a, int b);
void main()
{
    int num1;
    int num2;
    int a;
    int b;

    printf("ingrese un numero: ");
    scanf("%d", &num1);

    printf("El Cuadrado del numero es: %d\n", Cuadrado(num1));
    printf("\n");

    CuadradoVoid(num1);
    printf("\n");

    printf("ingrese un numero: ");
    scanf("%d", &num1);
    MostrarDireccion(&num1);

    printf("ingrese los 2 numeros a invertir: ");
    scanf("%d", &a);
    scanf("%d", &b);
    invertir(a, b);
    
    
    printf("ingrese los 2 numeros a invertir: ");
    scanf("%d", &a);
    scanf("%d", &b);
    orden(a,b);
}

int Cuadrado(int num1)
{
    int cuadrado = num1 * num1;
    return cuadrado;
}
void CuadradoVoid(int num1)
{
    int cuadrado = num1 * num1;
    printf("El Cuadrado del numero es: %d", cuadrado);
    printf("\n");
}

void MostrarDireccion(int *num1)
{

    printf("La Direccion de la variable es: %p\n", num1);
    printf("El valor almacenado en la variable es: %d\n", *num1);
}

void invertir(int a, int b)
{
    int aux1 = a;
    int aux2 = b;

    a = aux2;
    b = aux1;
    printf("Los valores de a y b antes de invertir los numeros son: a=%d y b=%d \n", aux1, aux2);
    printf("Los valores de a y b luego de invertir los numeros son: a=%d y b=%d \n", a, b);
}

void orden(int a, int b)
{
    int mayor;
    int menor;

    if (a > b)
    {
        mayor = a;
        menor = b;
    }else
    {
        menor=a;
        mayor=b;
    }
    

    printf("El valor de los numeros son: %d y %d\n", a,b);
    printf("Los numeros ordenados son: %d - %d \n", menor,mayor);
}