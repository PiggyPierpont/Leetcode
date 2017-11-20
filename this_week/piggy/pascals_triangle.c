#include<stdio.h>
#include<malloc.h>

int** generate(int);

int main(void) {
    int n = 5;
    int** pascal = generate(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            printf("%d ", pascal[i][j]);

        printf("\n");
    }

    return 0;
}

int** generate(int numRows) {
    int** result;

    if (numRows > 2) {
        result[0] = malloc(sizeof(int));
        *result[0] = 1;
        result[1] = malloc(2 * sizeof(int));
        result[1][0] = result[1][1] = 1;

        for (int i = 2; i < numRows; i++) {
            result[i] = malloc((i + 1) * sizeof(int));
            result[i][0] = result[i][i] = 1;

            for (int j = 1; j < i; j++)
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }

    return result;
}
