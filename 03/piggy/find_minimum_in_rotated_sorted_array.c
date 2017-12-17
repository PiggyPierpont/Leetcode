#include <stdio.h>

int findMin(int *, int);

int main(void) {
    int a[7] = {3, 4, 5, 6, 7, 8, 0};
    int min = findMin(a, 7);

    printf("%d\n", min);

    return 0;
}

int findMin(int* nums, int numsSize) {
    int first = 0, last = numsSize - 1, middle = (numsSize - 1) / 2;

    while (first < last) {
        if (nums[first] < nums[last])
            return nums[first];
        
        if (nums[middle] > nums[last]) {
            first = middle + 1;
            middle = (last - first) / 2 + first;
        } else if (nums[middle] < nums[first]) {
            last = middle;
            middle = (last - first) / 2 + first;
        } else {
            break;
        }
    }

    return nums[middle];
}
