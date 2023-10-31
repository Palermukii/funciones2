#include <stdio.h>

float promedio(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return ( arr[n - 1] + (n - 1) * promedio(arr, n - 1) ) / n;
}
int main() {
    int arreglo[] = {4, 3, 7};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    float resultado = promedio(arreglo, longitud);
    printf("El promedio de los elementos en el arreglo es: %.2f\n", resultado);
    return 0;
}