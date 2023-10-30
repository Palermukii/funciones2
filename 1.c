#include <stdio.h>

#include <stdlib.h>

void mas_dos(int *x) {

   (*x) = (*x) + 2;


}

int main() {
    int x = 2;

    printf("%d X antes de funcion\n", x);

    mas_dos(&x);

    printf("%d X despues de funcion", x);

}