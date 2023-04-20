#include <stdio.h>

int main() {
    int numeros[] = {10,2,-4,65,25,99};
    int max = numeros[0];
    for (int i = 1; i < sizeof(numeros) / sizeof(int); i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
    printf("%d", max);
    return 0;
}