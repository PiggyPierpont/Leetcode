#include <stdio.h>

int searchInsert(int *, int, int);

int main(void) {
    int a[4] = {1, 3, 5, 6};
    int target;

    printf("please enter a target number: ");
    scanf("%d", &target);

    int position = searchInsert(a, 4, target);

    printf("insert position: %d\n", position);

    return 0;
}

int searchInsert(int* nums, int numsSize, int target) {
    int first = 0, last = numsSize - 1, middle = (numsSize - 1) / 2;

    if (nums[first] == target)
        return first;
    else if (nums[last] == target)
        return last;

    while (first != last) {
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

    int position = nums[first] > target ? first - 1 : first + 1;
    if (position < 0)
        return 0;
    else
        return position;
}
