#include<stdio.h>
#include<stdlib.h>

#define THREE 3

int** threeSum(int*, int, int*);

int main(void) {
    int nums[6] = {-1, 0, 1, 2, -1, -4};
    int returnSize;
    int** result = threeSum(nums, 6, &returnSize);

    for (int i = 0; i < returnSize; i++) {
       for (int j = 0; j < THREE; j++)
           printf("%d ", result[i][j]);

       printf("\n");
    }

    free(result);
    return 0;
}

int** threeSum(int* nums, int numsSize, int* returnSize) {
    int n = 0;
    int** result = NULL;
    int duplicate = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            for (int k = j + 1; k < numsSize; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    result = realloc(result, (n + 1) * sizeof(int*));
                    result[n] = malloc(THREE * sizeof(int));
                    int tmpa[THREE] = {nums[i], nums[j], nums[k]};

                    for (int a = 0; a < THREE - 1; a++) {
                        for (int b = a + 1; b < THREE; b++) {
                            if (tmpa[a] > tmpa[b]) {
                                int tmp = tmpa[a];
                                tmpa[a] = tmpa[b];
                                tmpa[b] = tmp;
                            }
                        }
                    }

                    for (int a = 0; a < n; a++) {
                        if (result[a][0] == tmpa[0] && result[a][1] == tmpa[1] && result[a][2] == tmpa[2]) {
                            duplicate = 1;
                            break;
                        }
                    }

                    if (duplicate == 0) {
                        for (int a = 0; a < THREE; a++)
                            result[n][a] = tmpa[a];

                        n++;
                    }

                    duplicate = 0;
                }
            }
        }
    }

    *returnSize = n;
    return result;
}
