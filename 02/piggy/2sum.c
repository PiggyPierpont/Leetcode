#include<stdio.h>
#include<stdlib.h>

int* twoSum(int*, int, int, int*);

int main(void) {
    int numbers[4] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = twoSum(numbers, 4, target, &returnSize);

    printf("index1 = %d, index2 = %d\n", result[0], result[1]);

    free(result);

    return 0;
}

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numbersSize; i++) {
        for (int j = i + 1; j < numbersSize; j++) {
            if ((numbers[i] + numbers[j]) == target) {
                if (i < j) {
                    result[0] = i + 1;
                    result[1] = j + 1;
                    return result;
                } else {
                    result[0] = j + 1;
                    result[1] = i + 1;
                    return result;
                }
            }
        }
    }
    result[0] = result[1] = 0;

    return result;
}
