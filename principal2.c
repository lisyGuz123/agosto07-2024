//Javier Noriega

#include <stdio.h>

int main()
{
    int dato;
    printf("Ingrese un valor: ");
    scanf("%d", &dato); 
    if (dato % 2 == 0)
    {
        printf("El numero es par\n");   
    }
    else
    {
        printf("El numero ingresado es impar\n");
    }

    return 0; 
}