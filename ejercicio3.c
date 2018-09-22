/*
EM16006
/*
EDGARDO ERNESTO ESPADERO MIRANDA
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int i;
    int *p_v;
    printf("Ingrese el largo del vector: ");
    scanf("%d",&size);
    int v[size];
    printf("\nINGRESE EL VECTOR:\n");
    for (i = 0; i < size; i++) {
        printf("posicion %d: ",i+1);
        scanf("%d",&v[i]);
    }
    p_v=&v;
    
    //IMPRIME UN VECTOR NORMAL
    printf("\nVector Normal:\n[");
    for (i = 0; i < size; i++) {
        printf(" %d ",*p_v);
        p_v++;
    }
    printf("]");


    //IMPRIME UN VECTOR AL REVES
    
    printf("\nVector Reverso:\n[");
    for (i = 0; i < size; i++) {
        p_v--;
        printf(" %d ",*p_v);
        
    }
    printf("]");
    return 0;
}

