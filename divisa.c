#include <stdio.h>

int main(){
    float a = 0, b = 0, resultado = 0;
    int opcion;
    printf("¿A que moneda deseas converitir?");
    printf("1.- Dolar \n 2.- Libra \n 3.-Euro");
    
    scanf ("%d", &opcion);
    switch(opcion){
        case 1:
         printf("Dame la cantidad de pesos");
         scanf("%f", &a);
         (opcion"b=20");
         print ("El resultado de %O.2f dolares a %O.2F PesosMX es ", a, b, a * b);
         break;
        case 2:
         printf("Dame la cantidad de pesos");
         scanf ("%f", &a);
         (opcion b==18);
         printf ("El resultado de %O.2f libras a %O.2F PesosMX es ", a, b, a * b);
         break;
        case 3:
         printf("Dame la cantidad de pesos");
         scanf ("%f", &a);
         (opcion b==19);
         printf ("El resultado de %O.2f euros a %O.2F PesosMX es ", a, b, a * b);

    

    }
    return 0;
}
