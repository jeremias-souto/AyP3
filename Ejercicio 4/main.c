#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &n3);
    float promedio = (n1 + n2 + n3) / 3.0;
    printf("%f", promedio);
    return 0;
}