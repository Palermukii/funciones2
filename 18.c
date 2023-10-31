#include <stdio.h>
#include <stdlib.h>

int invertir(int n, int resultado) {
    if (n == 0) {
        return resultado;
    } else {
        int digito = n % 10;
        resultado = (resultado * 10) + digito;
        return invertir(n / 10, resultado);
    }
}

int main( int argc, char *argv[1]) {
    int n = atoi(argv[1]);
        int resultado = 0;

    int invertido = invertir(n, resultado);
    printf("El numero %d invertido es %d", n, invertido);
}