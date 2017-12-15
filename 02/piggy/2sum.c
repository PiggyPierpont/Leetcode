#include<stdio.h>
#include<stdlib.h>

int* twoSum(int*, int, int, int*);

int main(void) {
    int numbers[4] = {2, 7, 11, 15};
    int target = 9;

    int* result = twoSum(numbers, 4, target);

    printf("index1 = %d, index2 = %d\n", result[0], result[1]);

    free(result);

    return 0;
}

int* twoSum(int* nums, int numsSize, int target) {
    int* result = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if ((nums[i] + nums[j]) == target) {
                if (i < j) {
                    result[0] = i;
                    result[1] = j;
                    return result;
                } else {
                    result[0] = j;
                    result[1] = i;
                    return result;
                }
            }
        }
    }
    result[0] = result[1] = 0;

    return result;
}
