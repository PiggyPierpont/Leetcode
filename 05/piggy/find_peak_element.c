#include <stdio.h>

int findPeakElement(int *, int);

int main(void) {
    int a[4] = {1, 2, 3, 1};

    int peak = findPeakElement(a, 4);

    printf("peak = %d\n", peak);

    return 0;
}

int findPeakElement(int* nums, int numsSize) {
    if (numsSize == 2)
        return nums[0] > nums[1] ? 0 : 1;

    int middle = (numsSize - 1) / 2;

    if (nums[middle - 1] > nums[middle]) {
        for (int i = middle - 2, j = middle - 1; j >= 0; i--, j--) {
            if (i < 0)
                return j;
            if (nums[i] < nums[j])
                return j;
        } 
    } else if (nums[middle + 1] > nums[middle]) {
        for (int i = middle + 2, j = middle + 1; j < numsSize; i++, j++) {
            if (i >= numsSize)
                return j;
            if (nums[i] < nums[j])
                return j;
        }
    }

    return middle;
}
