typedef struct structNodo{
    int valor;
    struct structNodo *proximo;
} Nodo;

Nodo* crearNodo(int valor) {
    /*Crea un nuevo Nodo y le asigna el valor pasado por parametro*/
    Nodo *nuevo = malloc(sizeof(Nodo));
    nuevo->valor = valor;
    nuevo->proximo = NULL;
    return nuevo;
}

void agregarOrdenadamente(Nodo *nodo, int valor) {
    /*Agrega cada valor de manera ordenada (menor a mayor)*/
    if (valor < nodo->valor) {
        int valorAux = nodo->valor;
        nodo->valor = valor;
        if (nodo->proximo == NULL) {
            Nodo *nuevo = crearNodo(valorAux);
            nodo->proximo = nuevo;
        } else {
            agregarOrdenadamente(nodo->proximo, valorAux);
        }
    } else {
        agregarOrdenadamente(nodo->proximo, valor);
    }
}

void obtener(Nodo *nodo, int pos) {
    int t = tamaño(nodo);
    if (pos > t || pos < 1) {
        printf("La posicion ingresada es invalida");
    } else {
        _obtener(nodo, pos, 1);
    }
}

void _obtener(Nodo *nodo, int pos, int contador) {
    if (contador == pos) {
        printf("%d", nodo->valor);
    } else {
        contador = contador + 1;
        _obtener(nodo->proximo, pos, contador);
    }
}

void imprimir(Nodo *nodo) {
    /*Imprime por pantalla la lista*/
    if (nodo->valor != NULL) {
        printf("%d ", nodo->valor);
    }
    if (nodo->proximo != NULL) {
        imprimir(nodo->proximo);
    }
}

void agregarAlFinal(Nodo *nodo, int valor) {
    /*Agrega un valor al final o en un espacio libre del medio*/
    if (nodo->valor == NULL) {
        nodo->valor = valor;
    }
    else if (nodo->proximo == NULL) {
        Nodo *nuevo = crearNodo(valor);
        nodo->proximo = nuevo;
    } else {
        agregarAlFinal(nodo->proximo, valor);
    }
}

void agregarEnPosicion(Nodo *nodo, int valor, int pos) {
    /*Agregar un valor en la posicion x dada como parametro.
    Utiliza recursividad indirecta. Llama a la funcion __agregarEnPosicion().*/
    int t = tamaño(nodo);
    if (pos > t || pos < 1) {
        printf("La posicion ingresada es invalida");
    } else {
        _agregarEnPosicion(nodo, valor, pos, 1);
    }
}

void _agregarEnPosicion(Nodo *nodo, int valor, int pos, int contador) {
    if (contador == pos) {
        int valorAux = nodo->valor;
        nodo->valor = valor;
        agregarAlFinal(nodo, valorAux);
    } else {
        contador = contador + 1;
        _agregarEnPosicion(nodo->proximo, valor, pos, contador);
    }
}

void eliminarElUltimo(Nodo *nodo) {
    /*Elimina el ultimo valor de la lista*/
    int t = tamaño(nodo);
    eliminarEnPosicion(nodo, t);
}

void eliminarEnPosicion(Nodo *nodo, int pos) {
    /*Eliminar el valor de la posicion x dada como parametro.
    Utiliza recursividad indirecta. Llama a la funcion _eliminarEnPosicion().*/
    int t = tamaño(nodo);
    if (pos > t || pos < 1) {
        printf("La posicion ingresada es invalida");
    } else {
        _eliminarEnPosicion(nodo, pos, 1);
    }
}

void _eliminarEnPosicion(Nodo *nodo, int pos, int contador) {
    if (contador == pos) {
        nodo->valor = NULL;
    } else {
        contador = contador + 1;
        _eliminarEnPosicion(nodo->proximo, pos, contador);
    }
}

int tamaño(Nodo *nodo) {
    /*Devuelve la cantidad de valores que hay en la lista.
    Utiliza recursividad indirecta. Llama a la funcion _tamaño()*/
    return _tamaño(nodo, 0);
}

int _tamaño(Nodo *nodo, int t) {
    if (nodo->valor != NULL) {
        t = t + 1;
    }
    if (nodo->proximo == NULL) {
        return t;
    } else {
        return _tamaño(nodo->proximo, t);
    }
}