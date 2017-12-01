#include <stdio.h>
#include <stdlib.h>

int** fourSum(int *, int, int, int *);

int main(void) {
    int a[6] = {1, 0, -1, 0, -2, 2};
    int returnSize;
    int** result = fourSum(a, 6, 0, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        for (int j = 0; j < 4; j++)
            printf("%d ", result[i][j]);

        printf("\n");
    }

    return 0;
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize) {
    int size = 0;
    int** result = NULL;
    int duplicate = 0;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                int tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
            }
        }
    }

    for (int i = 0; i < numsSize - 3; i++) {
        for (int j = i + 1; j < numsSize - 2; j++) {
            for (int k = j + 1; k < numsSize - 1; k++) {
                for (int l = k + 1; l < numsSize; l++) {
                    if (nums[i] + nums[j] + nums[k] + nums[l] == target) {
                        result = realloc(result, (size + 1) * sizeof(int*));
                        result[size] = malloc(4 * sizeof(int));
                        int tmp[4] = {nums[i], nums[j], nums[k], nums[l]};
                        for (int a = 0; a < size; a++) {
                            if (tmp[0] == result[a][0] && tmp[1] == result[a][1] && 
                                tmp[2] == result[a][2] && tmp[3] == result[a][3])
                                duplicate = 1;
                        }

                        if (duplicate == 0) {
                            for (int a = 0; a < 4; a++)
                                result[size][a] = tmp[a];

                            size++;
                        }

                        duplicate = 0;
                    }
                }
            }
        }
    }

    *returnSize = size;
    return result;
}
