#include <stdio.h>
#include <stdlib.h>

void numeroBinario(int n) {
    if(n == 0) return;
    else {
        numeroBinario(n / 2);
        printf("%d", n % 2);
    }
}

int main(int argc, char *argv[]) {
    int n= atoi(argv[1]);

    numeroBinario(n);
}