#include <stdio.h>

#include <stdlib.h>

int fibonacci(int numero) {
    if(numero <= 1) return numero;
    else {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}

int main(int argc, char *argv[]) {
    int numero = atoi(argv[1]);

    int resultado = fibonacci(numero);

    printf("%d es el resultado", resultado);
}