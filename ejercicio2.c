/*
EM16006
/*
EDGARDO ERNESTO ESPADERO MIRANDA
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i=0;
    int *puntero1,*puntero2;
    printf("Ingrese el tamaño de los vectores con los que se va a trabajar:  ");
    scanf("%d",&n);
    int a[n];
    int b[n];
    
    //LLENADO DE VECTOR
    printf("\nVector 1");
    for (i = 0; i <n; i++) {
       printf("\nPosicion %d: ",i+1); 
       scanf("%d",&a[i]);
    }
    printf("\nVector 2");
    for (i = 0; i <n; i++) {
       printf("\nPosicion %d: ",i+1); 
       scanf("%d",&b[i]);
    }
    //IMPRIMIENDO VECTOR INTRODUCIDO
    printf("\nVECTOR 1:\n[");
    for (i = 0; i < n; i++) {
        printf(" %d ",a[i]);        
    }
    printf("]\n");
        printf("VECTOR 2:\n[");
    for (i = 0; i < n; i++) {
        printf(" %d ",b[i]);        
    }
    printf("]\n");
    
    puntero1=&a;
    puntero2=&b;  
    printf("\nVectores intercambiados\nVECTOR 1:\n[");
    for (i = 0; i < n; i++) {
        *puntero1=*puntero1+*puntero2;
        *puntero2=*puntero1-*puntero2;
        *puntero1=*puntero1-*puntero2;
        printf(" %d ",*puntero1); 
        puntero1++;
        puntero2++;
    }
    printf("]\n");
    int j;
    for (j = 0; j < n; j++) {
        puntero1--;
        puntero2--;
    }

    printf("VECTOR 2:\n[");
    for (i = 0; i < n; i++) {      
        *puntero2=*puntero2+*puntero1;
        *puntero1=*puntero2-*puntero1;
        *puntero2=*puntero2-*puntero1;
        printf(" %d ",*puntero1); 
        puntero1++;
        puntero2++;
        
    }
    printf("]\n");
    
    return 0;
}

