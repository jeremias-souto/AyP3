#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    
    /*Test Nº1: Creamos e imprimimos por pantalla*/
    Nodo *nodo = crearNodo(15);
    imprimir(nodo);
    
    printf("\n---------------------------------------------------------------\n");

    /*Test Nº2: Agregamos 2 valores, imprimimos, eliminamos el ultimo e imprimimos nuevamente*/
    agregarAlFinal(nodo, 99);
    agregarAlFinal(nodo, 34);
    imprimir(nodo);
    printf("\n");
    eliminarElUltimo(nodo);
    imprimir(nodo);

    printf("\n---------------------------------------------------------------\n");

    /*Test Nº3: Agregamos el 101 en la posicion 2 e imprimimos*/
    agregarEnPosicion(nodo, 101, 2);
    imprimir(nodo);

    printf("\n---------------------------------------------------------------\n");

    /*Test Nº4: Eliminamos el valor en la posicion 1 e imprimimos*/
    eliminarEnPosicion(nodo, 1);
    imprimir(nodo);

    printf("\n---------------------------------------------------------------\n");

    /*Test Nº5: Agregamos al final el valor 12(se va a agregar al principio), luego el 133, imprimimos el largo de la lista
    y obtenemos el valor en la posicion 2 (101)*/
    agregarAlFinal(nodo, 12);
    agregarAlFinal(nodo, 133);
    imprimir(nodo);
    printf("\n");
    int t = tamaño(nodo);
    printf("Largo: %d\n", t);
    obtener(nodo, 2);

    printf("\n---------------------------------------------------------------\n");

    /*Test N°6: Creamos nodo y vamos agregando valores ordenadamente*/
    Nodo *nodo2 = crearNodo(16);
    agregarOrdenadamente(nodo2, 60);
    agregarOrdenadamente(nodo2, 79);
    agregarOrdenadamente(nodo2, 21);
    agregarOrdenadamente(nodo2, -11);
    agregarOrdenadamente(nodo2, 0);
    agregarOrdenadamente(nodo2, -30);
    imprimir(nodo2);
    return 0;
}