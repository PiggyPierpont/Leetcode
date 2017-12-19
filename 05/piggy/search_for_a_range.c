#include <stdio.h>
#include <stdlib.h>

int* searchRange(int *, int, int, int *);

int main(void) {
    int a[8] = {0, 0, 1, 1, 1, 4, 5, 5};
    int returnSize;
    int* result;

    result = searchRange(a, 8, 2, &returnSize);

    printf("[%d, %d]\n", result[0], result[1]);

    return 0;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int first = 0, last = numsSize - 1, middle = (numsSize - 1) / 2;
    int m = -1, n = -1;
    int* result = malloc(2 * sizeof(int));

    if (numsSize <= 2) {
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == target) {
                m = i;
                break;
            }
        }
    } else {
        while (first < last) {
            if (nums[first] == target) {
                m == first;
                break;
            }
            else if (nums[middle] == target) {
                last = middle;
                first++;
                middle = (last - first) / 2 + first;
            } else if (nums[middle] < target) {
                first = middle + 1;
                middle = (last - first) / 2 + first;
            } else if (nums[middle] > target) {
                last = middle - 1;
                middle = (last - first) / 2 + first;
            }
        }
        if (nums[first] == target)
            m = first;
    }

    n = m;

    if (m != -1) {
        for (; n < numsSize - 1; n++) {
            if (nums[n + 1] != target)
                break;
        }
    }

    result[0] = m;
    result[1] = n;

    *returnSize = 2;
    return result;

}
