#include <stdio.h>

void mas_dos(int a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i] += 2;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int n = 10;

    printf("Antes de llamar a la función:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    mas_dos(numeros, n);

    printf("Después de llamar a la función:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
