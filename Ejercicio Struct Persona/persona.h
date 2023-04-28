#include <string.h>

typedef struct {
    char nombre[10];
    char apellido[10];
    int edad;
    int dni;
} Persona;

void getNombre(Persona *p) {
    printf("%s\n", p->nombre);
}

void getApellido(Persona *p) {
    printf("%s\n", p->apellido);
}

void getEdad(Persona *p) {
    printf("%d\n", p->edad);
}

void getDni(Persona *p) {
    printf("%d\n", p->dni);
}

void setNombre(Persona *p, char *nombre) {
    strcpy(p->nombre, nombre);
}

void setApellido(Persona *p, char *apellido) {
    strcpy(p->apellido, apellido);
}

void setEdad(Persona *p, int *edad) {
    p->edad = edad;
}

void setDni(Persona *p, int *dni) {
    p->dni = dni;
}