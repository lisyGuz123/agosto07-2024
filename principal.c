#include <stdio.h>
int main (){
    int numero1,numero;
    printf("Ingrese un numero\n>>");
    scanf("%d",&numero1);
    printf("Ingrese otro numero\n>>");
    scanf("%d",&numero);
    int suma,resta,multi,div;
    suma=numero1+numero;
    resta=numero1-numero;
    multi=numero1*numero;
    div=numero1/numero;
    printf("El resultado de la suma es: %d\n",suma);
    printf("El resultado de la resta es: %d\n",resta);
    printf("El resultado de la multiplicación es: %d\n",multi);
    printf("El resultado de la división es: %d\n",div);
}