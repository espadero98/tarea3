/*
EM16006
/*
EDGARDO ERNESTO ESPADERO MIRANDA
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;
    int *pa,*pb;
    int opcion,suma,resta;
    
    //PEDIRA LOS NUMEROS ENTEROS Y GUARDARA LA DIRECCION EN MEMORIA DE CADA VARIABLE EN LOS PUNTEROS
    printf("Ingrese el primer numero entero:    ");
    scanf("%d",&a);
    pa=&a;
    
    printf("Ingrese el segundo numero entero:    ");
    scanf("%d",&b);
    pb=&b;
    printf("\n\n");
    //MOSTRARA EL MENU
    printf("    MENU\n");
    printf("1.Ingresar los enteros nuevamente\n2.Calcular su suma\n3.Calcular su resta\n4.Imprimir la direccion de memoria de cada entero\n0.Salir\n");
    scanf("%d",&opcion);
    
    while (opcion!=0) {
        switch(opcion) {
            
            //CASO DONDE PEDIRA LOS ENTEROS NUEVAMENTE
            case 1:
                printf("Ingrese el primer numero entero:    ");
                scanf("%d",&a);
                pa=&a;

                printf("Ingrese el segundo numero entero:    ");
                scanf("%d",&b);
                pb=&b;
                printf("\n\n");
                //MOSTRARA EL MENU
                printf("    MENU\n");
                printf("1.Ingresar los enteros nuevamente\n2.Calcular su suma\n3.Calcular su resta\n4.Imprimir la direccion de memoria de cada entero\n0.Salir\n");
                scanf("%d",&opcion);
                break;
                
            //CASO DONDE CALCULARA LA SUMA DE LOS ENTEROS
            case 2:
                printf("\nSUMA:");
                suma=*pa+*pb;
                printf("\nLa suma de %d+%d es igual a : %d\n\n",*pa,*pb,suma);
                //MOSTRARA EL MENU
                printf("    MENU\n");
                printf("1.Ingresar los enteros nuevamente\n2.Calcular su suma\n3.Calcular su resta\n4.Imprimir la direccion de memoria de cada entero\n0.Salir\n");
                scanf("%d",&opcion);
                break;
                
            //CASO DONDE SE CALCULARA LA RESTA DE LOS ENTEROS
            case 3:
                printf("\nRESTA:");
                resta=*pa-*pb;
                printf("\nLa resta de %d-%d es igual a : %d\n\n",*pa,*pb,resta);
                //MOSTRARA EL MENU
                printf("    MENU\n");
                printf("1.Ingresar los enteros nuevamente\n2.Calcular su suma\n3.Calcular su resta\n4.Imprimir la direccion de memoria de cada entero\n0.Salir\n");
                scanf("%d",&opcion);    
                break;
                
            //CASO DONDE SE IMPRIMIRA LA DIRECCION EN MEMORIA DE CADA VARIABLE    
            case 4:
                printf("\nDIRECCIONES DE MEMORIA:");
                printf("\n%d Direccion: %p",*pa,pa);
                printf("\n%d Direccion: %p\n\n",*pb,pb);
                //MOSTRARA EL MENU
                printf("    MENU\n");
                printf("1.Ingresar los enteros nuevamente\n2.Calcular su suma\n3.Calcular su resta\n4.Imprimir la direccion de memoria de cada entero\n0.Salir\n");
                scanf("%d",&opcion);
                break;
                
            case 0:
                printf("\nAdios...");
                break;
                
            default:
                printf("\nIngrese una opcion valida!!!!\n\n");
                printf("    MENU\n");
                printf("1.Ingresar los enteros nuevamente\n2.Calcular su suma\n3.Calcular su resta\n4.Imprimir la direccion de memoria de cada entero\n0.Salir\n");
                scanf("%d",&opcion);
                break;
            }
        

    }

    return 0;
}

