#include <stdio.h>

int main() {
    int numeros[] = {10,2,-4,65,25,99};
    int min = numeros[0];
    for (int i = 1; i < sizeof(numeros) / sizeof(int); i++) {
        if (numeros[i] < min) {
            min = numeros[i];
        }
    }
    printf("%d", min);
    return 0;
}