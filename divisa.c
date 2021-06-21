#include <stdio.h>

int main(){
    float a = 0, b = 0, resultado = 0;
    int opcion;
    printf("¿A que moneda deseas converitir?");
    printf("\n1.- Dolar \n 2.- Libra \n 3.-Euro\n\n");
    
    scanf ("%d", &opcion);
    switch(opcion){
        case 1:
         printf("Dame la cantidad de pesos");
         scanf("%f", &a);
         b=20;
         printf ("El resultado de %f dolares a PesosMX es %f", a, a * b);
         break;
        case 2:
         printf("Dame la cantidad de pesos");
         scanf ("%f", &a);
         b=18;
         printf ("El resultado de %f libras a PesosMX es %f", a, a * b);
         break;
        case 3:
         printf("Dame la cantidad de pesos");
         scanf ("%f", &a);
         b=19;
         printf ("El resultado de %f euros a PesosMX es %f", a,  a * b);
    }
    return 0;
}
