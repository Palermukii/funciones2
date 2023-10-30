#include <stdio.h>

void imprimirMatriz(int n, int m, int matriz[n][m]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == 0) {
                printf("   ");  // Imprime un espacio para los ceros
            } else if (matriz[i][j] == 1) {
                printf(" * ");  // Imprime un asterisco para los unos
            }
            else {
                printf(" %d ", matriz[i][j]);
            }
        }
        printf("\n");  // Cambia de línea después de cada fila
    }
}

int main() {
    int n = 5;
    int m = 5;

    int mat[5][5] = {
        {1, 1, 2, 3, 0},
        {1, 2, 2, 3, 0},
        {1, 3, 2, 3, 0},
        {1, 0, 2, 3, 0},
        {1, 1, 2, 3, 0}
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    imprimirMatriz(n, m, mat);


    return 0;
}
