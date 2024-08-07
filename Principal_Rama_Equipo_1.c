#include <stdio.h>
int main() {
    // Edgar de Paz
    int num;
    printf("Ingrese un numero: >");
    scanf("%d", &num);
    if (num > 0) {
        printf("El numero es positivo");
    } else if (num < 0) {
        printf("El numero es negativo");
    } else {printf("El numero es un 0");}
    return 0;
}