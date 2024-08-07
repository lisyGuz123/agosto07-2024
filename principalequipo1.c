//Javier Noriega

#include <stdio.h>

int main(){
    int val1;

    printf("Ingrese un valor: ");
    scanf("%d",&val1);

    if(val1 > 0){
        printf("El numero es positivo");
    }else if(val1 < 0){
        printf("El numero es negativo");
    }else{
        printf("El numero es cero");
    }

    return 0;

}