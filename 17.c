#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if(n <= 1) return 1;
    else {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int resultado = fibonacci(a);
    printf("El %d numero de fibonacci es %d", a, resultado);
}