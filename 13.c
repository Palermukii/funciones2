#include <stdio.h>
#include <stdlib.h>

int sum(int n) {
    if(n == 0) return 0;
    else {
        return (n + sum(n -1));
    }
}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);

    printf("La suma es %d", sum(a));
}