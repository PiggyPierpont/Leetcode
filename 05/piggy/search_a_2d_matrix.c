#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int ** , int, int, int);

int main(void) {
    int a[3][4] = {{1, 3, 5, 7},
                   {10, 11, 16, 20},
                   {23, 30, 34, 50}};
    int* p[3] = {a[0], a[1], a[2]};

    if (searchMatrix(p, 3, 4, 3) == true)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    for (int i = 0, j = 0; i < matrixRowSize, j < matrixColSize; ) {
        if (target > matrix[i + 1][j])
            i++;
        else if (target == matrix[i + 1][j])
            return true;
        else {
            if (target > matrix[i][j + 1])
                j++;
            else if (target == matrix[i][j + 1])
                return true;
            else
                return false;
        }
        printf("%d\n", matrix[i][j]);
    }

    return false;
}
