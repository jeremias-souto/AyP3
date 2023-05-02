#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    
    /*Test Nº1: Crear e imprimir por pantalla*/
    Nodo *nodo = crearNodo(15);
    imprimir(nodo);
    
    printf("\n---------------------------------------------------------------\n");

    /*Test Nº2: Agregar 2 valores, imprimir, eliminar el ultimo e imprimir*/
    agregarAlFinal(nodo, 99);
    agregarAlFinal(nodo, 34);
    imprimir(nodo);
    printf("\n");
    eliminarElUltimo(nodo);
    imprimir(nodo);

    printf("\n---------------------------------------------------------------\n");

    /*Test Nº3: Agregar 1 valor en la posicion 2 e imprimir*/
    agregarEnPosicion(nodo, 101, 2);
    imprimir(nodo);

    printf("\n---------------------------------------------------------------\n");

    /*Test Nº4: Eliminar el valor en la posicion 1 e imprimir*/
    eliminarEnPosicion(nodo, 1);
    imprimir(nodo);

    printf("\n---------------------------------------------------------------\n");

    /*Test Nº5: Agregar al final el valor 12(se va a agregar al principio) e mprimir el largo de la lista*/
    agregarAlFinal(nodo, 12);
    imprimir(nodo);
    printf("\n");
    int t = tamaño(nodo);
    printf("Largo: %d", t);
    return 0;
}