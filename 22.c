#include <stdio.h>


int arr(int i, int lista[]) {
    if(i == sizeof(*lista) + 1) return 0;
    else {
        printf("%d",lista[i]);
        return arr(i + 1, lista);
    }
}

int main() {
    int i = 0;
    int lista[] = {1,2,3,4,5};
    return arr(i, lista);
}