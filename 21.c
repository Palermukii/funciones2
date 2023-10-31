#include <stdio.h>

int mcd(int a, int b) {
    if(b == 0) return a;

else {
    return mcd(b, a%b);
}
}

int main() {
    int a = 72;
    int b = 15;

    printf("El maximo comun divisor de %d y %d es %d",a,b,mcd(a,b));
}