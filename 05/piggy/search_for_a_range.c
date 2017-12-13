#include <stdio.h>
#include <stdlib.h>

int* searchRange(int *, int, int, int *);

int main(void) {
    int a[6] = {5, 7, 7, 8, 8, 10};
    int returnSize;
    int* result;

    result = searchRange(a, 6, 8, &returnSize);

    printf("[%d, %d]\n", result[0], result[1]);

    return 0;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int first = 0, last = numsSize - 1, middle = (numsSize - 1) / 2;
    int m, n;
    int* result;

    while (first != last) {
        if (nums[first] == target)
            break;
        else if (nums[middle] == target) {
            last = middle;
            first++;
            middle = (last - first) / 2 + first;
        } else if (nums[middle] < target) {
            first = middle + 1;
            middle = (last - first) / 2 + first;
        } else if (nums[middle] > target) {
            last = middle - 1;
            first++;
            middle = (last - first) / 2 + first;
        }
    }

    m = first;
    n = m;

    for (; n < numsSize; n++) {
        if (nums[n + 1] != target)
            break;
    }

    result = malloc(2 * sizeof(int));

    result[0] = m;
    result[1] = n;

    *returnSize = 2;
    return result;
}
