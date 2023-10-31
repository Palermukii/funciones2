#include <stdio.h>
#include <stdlib.h>

int sum(int n) {
    if(n == 0) return 0;
    else {
        return (n % 10 + sum(n / 10));
    }
}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int resultado = sum(a);

    printf("La suma es %d", resultado);
}