#include <stdio.h>

int countPaths(int n, int m) {
    // Caso base: Si estamos en la primera fila o primera columna, solo hay un camino.
    if (n == 1 || m == 1) {
        return 1;
    }

    // Llamada recursiva: Suma los caminos desde arriba y desde la izquierda.
    return countPaths(n - 1, m) + countPaths(n, m - 1);
}

int main() {
    int n, m;

    printf("Ingrese el número de filas (n): ");
    scanf("%d", &n);
    printf("Ingrese el número de columnas (m): ");
    scanf("%d", &m);

    int numCaminos = countPaths(n, m);

    printf("Número de caminos posibles en una grilla %d x %d: %d\n", n, m, numCaminos);

    return 0;
}
