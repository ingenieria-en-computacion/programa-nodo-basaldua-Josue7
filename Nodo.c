#include "Nodo.h"
#include <stdio.h>

int main(){
    printf("Elaborado por: Basaldua Castro Josue \n");

    Nodo *n1 = crear_nodo(10);
    Nodo *n2 = crear_nodo(20);

    Asignar_Ref(n1, n2);

    printf("Nodo 1: %d\n", obtener_dato(n1));
    printf("Nodo 2: %d\n", obtener_dato(obtener_Ref(n1)));

    borrar_nodo(n1);
    borrar_nodo(n2);

    return 0;
}



Nodo*crear_nodo(Dato b){
    Nodo*nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->sig = NULL;
    nuevo->dato = 0;
    return nuevo;
}

bool borrar_nodo(Nodo*n){
    if(n->sig==NULL){
        free(n);
        return true;
    }
    return false;
}

Nodo* asignar_dato(Nodo*n, Dato b){
    if(n!=NULL){
        n->dato = b;
    }
    return n;
}

Dato obtener_dato(Nodo*n){
    if (n==NULL){
        printf("No hay datos \n");
        return -1;
    }
    return n->dato;
}

Nodo* Asignar_Ref(Nodo*n, Nodo*c){
    if(n!=NULL){
        n->sig = c;
    }
    return n;
}

Nodo *obtener_Ref(Nodo *d) {
    if (!d) return NULL;
    return d->sig;
}