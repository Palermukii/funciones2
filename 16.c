#include <stdio.h>
#include <stdlib.h>

int power(int a, int n) {
    if( n == 0) return 1;

    else {
        return (a * power(a, n-1));
    }
}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int n = atoi(argv[2]);

    int resultado = power(a, n);

    printf("La potencia de %d a la %d es %d", a, n , resultado);
}