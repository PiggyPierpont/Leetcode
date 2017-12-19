#include <stdio.h>
#include <stdbool.h>

bool searchMatrix(int ** , int, int, int);

int main(void) {
    int a[1][1] = {{1}};
    int* p[1] = {a[0]};

    if (searchMatrix(p, 1, 1, 0) == true)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}

bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    for (int i = 0, j = 0; i < matrixRowSize, j < matrixColSize; ) {
        if (matrix[i][j] == target)
            return true;

        if (i + 1 < matrixRowSize && target > matrix[i + 1][j])
            i++;
        else if (i + 1 < matrixRowSize && target == matrix[i + 1][j])
            return true;
        else {
            if (j + 1 < matrixColSize && target > matrix[i][j + 1])
                j++;
            else if (j + 1 < matrixColSize && target == matrix[i][j + 1])
                return true;
            else
                return false;
        }
    }

    return false;
}
