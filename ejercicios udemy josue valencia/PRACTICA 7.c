/******************************************************************************
Escriba un programa que pida un numero al usuario y muestre el dia de la
semana que equivale. Si se introduce un numero fuera del rango valido(1-7)
se debe mostrar un mensaje de error.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dia;
    printf("Introduzca un numero del 1-7: ");
    scanf("%d",&dia);
    switch(dia){
        case (1):
            printf("LUNES");
            break;
        case (2):
            printf("MARTES");
            break;
        case (3):
            printf("MIERCOLES");
            break;
        case(4):
            printf("JUEVES");
            break;
        case(5):
            printf("VIERNES");
            break;
        case(6):
            printf("SABADO");
            break;
        case(7):
            printf("DOMINGO");
            break;
        default:
            printf("ERROR");
            break;
            
            
        
        
    }

    return 0;
}
