#ifndef _NODO_H_
#define _NODO_H_

#include <stdbool.h>
#include <stdlib.h>

typedef int Dato;

typedef struct Nodo{
    Dato dato;
    struct Nodo *sig;
}Nodo;
    
Nodo* crear_nodo(Dato b);
bool borrar_nodo(Nodo*n);
Nodo* asignar_dato(Nodo*n, Dato b);
Dato obtener_dato(Nodo*n);
Nodo* Asignar_Ref(Nodo*n, Nodo*c);
Nodo* obtener_Ref(Nodo*d);


#endif