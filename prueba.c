#include <stdio.h>

float promedio(int lista[], int tam) {
    if(tam == 0) return 0;
    else {
        return (lista[tam -1] + (tam -1) * promedio(lista, tam-1)) / tam;
    }
}

int main() {
    int lista[] = {5,7,8,3,5,9};
    int tam = sizeof(lista) / sizeof(lista[0]);
    for(int i = 0; i < tam; i++) {
        printf("%d ", lista[i]);
    }
    printf("\nEl promedio del array es de %f", promedio(lista, tam));
}