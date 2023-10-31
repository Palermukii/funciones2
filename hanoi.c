#include <stdio.h>

void hanoi(int n, int start, int end, int aux) {
    if (n == 1) {
        printf("Mover disco 1 de poste %d a poste %d\n", start, end);
        return;
    }

    hanoi(n - 1, start, aux, end);
    printf("Mover disco %d de poste %d a poste %d\n", n, start, end);
    hanoi(n - 1, aux, end, start);
}

int main() {
    int n = 5;
    int start = 1;
    int end = 3;  
    int aux = 2;  

    printf("Pasos para resolver las Torres de Hanoi con %d discos:\n", n);
    hanoi(n, start, end, aux);

    return 0;
}
