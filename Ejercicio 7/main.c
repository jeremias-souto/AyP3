#include <stdio.h>

int main() {
    int op = 0;
    while (op != 4){
        printf("OPCIONES: \n");
        printf("1-frase N°1 \n");
        printf("2-frase N°2 \n");
        printf("3-frase N°3 \n");
        printf("4-salir \n");
        printf("Ingrese una opcion: ");
        scanf("%d", &op);
        if (op == 1) {
            printf("De tal palo tal astilla \n");
        } else if (op == 2) {
            printf("No hay mal que por bien no venga \n");
        } else if (op == 3) {
            printf("En casa de herrero, cuchillo de palo \n");
        } else if (op == 4) {
            printf("Programa finalizado \n");
        } else {
            printf("Opcion invalida \n");
        }
    }
    return 0;
}