#include <stdio.h>
#include <stdlib.h>

int maximalRectangle(char **, int, int);
int largestRectangleArea(int *, int);
int* toHistogram(char **, int, int, int);

int main(void) {
    char a[4][4] = {{'0', '0', '0', '0'},
                    {'1', '1', '1', '1'},
                    {'1', '1', '1', '0'},
                    {'0', '1', '0', '0'}};

    char* p[4];

    for (int i = 0; i < 4; i++)
        p[i] = a[i];

    int area = maximalRectangle(p, 4, 4);

    printf("%d\n", area);

    return 0;
}

int maximalRectangle(char** matrix, int matrixRowSize, int matrixColSize) {
    int area = 0;

    for (int i = 0; i < matrixRowSize; i++) {
        int* histogram = toHistogram(matrix, i, matrixRowSize, matrixColSize);
        int tmp = largestRectangleArea(histogram, matrixColSize);
        area = (tmp > area ? tmp : area);
        free(histogram);
    }

    return area;
}

int* toHistogram(char** matrix, int start, int matrixRowSize, int matrixColSize) {
    int* a = calloc(matrixColSize, sizeof(int));

    for (int i = 0; i < matrixColSize; i++) {
        for (int j = start; j < matrixRowSize; j++) {
            if (matrix[j][i] == '1')
                a[i]++;
            else
                break;
        }
    }

    return a;
}

int largestRectangleArea(int* heights, int heightsSize) {
    int area = 0;

    for (int i = 0; i < heightsSize; i++) {
        int curArea = 0, width = 1;

        for (int j = i + 1; j < heightsSize; j++) {
            if (heights[j] >= heights[i])
                width++;
            else
                break;
        }

        for (int j = i - 1; j >= 0; j--) {
            if (heights[j] >= heights[i])
                width++;
            else
                break;
        }

        curArea = width * heights[i];

        if (curArea > area)
            area = curArea;
    }

    return area;
}

