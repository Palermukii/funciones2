#include <stdio.h>

#include <stdlib.h>

int factorial(int numero) {
    if(numero == 1 || numero == 0 ) return 1;
    else {
        return (numero * factorial(numero - 1));
    }
}
int main(int argc, char *argv[]) {
    int numero = atoi(argv[1]);
    int resultado = factorial(numero);

    printf("%d es el factorial de %d", resultado, numero);

    // for(int i = 0; i < numero, i++) {
    //     printf("%d", Factorial(i));
    // }

}
