#include <stdio.h>

int findMin(int *, int);

int main(void) {
    int a[7] = {3, 4, 5, 6, 7, 8, 0};
    int min = findMin(a, 7);

    printf("%d\n", min);

    return 0;
}

int findMin(int* nums, int numsSize) {
    int first = 0, last = numsSize - 1, middle = numsSize / 2;

    printf("# ");

    if (nums[first] < nums[last])
        return nums[first];
    else {
        if (nums[middle] > nums[last]) {
            return findMin(&nums[middle + 1], last - middle);
        } else if (nums[middle] < nums[first]) {
            return findMin(&nums[first + 1], middle - first);
        }
    }
}
