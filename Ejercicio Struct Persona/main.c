#include <stdio.h>
#include "persona.h"

int main() {
    Persona p1;

    setNombre(&p1, "JEREMIAS");
    getNombre(&p1);

    setApellido(&p1, "SOUTO");
    getApellido(&p1);

    setEdad(&p1, 20);
    getEdad(&p1);

    setDni(&p1, 1013);
    getDni(&p1);
    
    return 0;
}