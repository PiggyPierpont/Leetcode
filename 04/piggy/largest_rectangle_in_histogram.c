nclude <stdio.h>

int largestRectangleArea(int *, int);

int main(void) {
    int a[6] = {2, 1, 5, 6, 2, 3};
    int largestArea = largestRectangleArea(a, 6);

    printf("%d\n", largestArea);

    return 0;
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

