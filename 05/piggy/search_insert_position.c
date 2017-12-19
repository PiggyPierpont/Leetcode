#include <stdio.h>

int searchInsert(int *, int, int);

int main(void) {
    int a[2] = {1, 3};

    int position = searchInsert(a, 2, 2);

    printf("insert position: %d\n", position);

    return 0;
}

int searchInsert(int* nums, int numsSize, int target) {
    int first = 0, last = numsSize - 1, middle = (numsSize - 1) / 2;

    if (nums[first] == target)
        return first;
    else if (nums[last] == target)
        return last;

    while (first < last) {
        if (nums[middle] < target) {
            first = middle + 1;
            middle = (last - first) / 2 + first;
        } else if (nums[middle] == target)
            return middle;
        else {
            last = middle - 1;
            middle = (last - first) / 2 + first;
        }
    }

    if (first == last && nums[first] == target)
        return first;

    int position = nums[first] > target ? first : first + 1;

    return position;
}
