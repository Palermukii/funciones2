#include <stdio.h>

int sumArr(int i, int lista[]) {
    if(i == 3) return 0;
    else {
        return (lista[i] + sumArr(i + 1, lista));
    }
}
int main() { 
    int lista[]= {1,11,3};
    int i = 0;
    printf("La suma de los elementos del array es %d", sumArr(i, lista));
}