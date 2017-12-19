#include <stdio.h>

int missingNumber(int *, int);

int main(void) {
    int a[9] = {0, 6, 2, 9, 5, 3, 7, 1, 8};
    int missing = missingNumber(a, 9);
    printf("missing number: %d\n", missing);

    return 0;
}

int missingNumber(int* nums, int numsSize) {
    void sort(int* nums, int* f, int* l) {
        if (f >= l)
            return;

        int *first = f, *last = l;

        for (; first < last;) {
            for(; last > first; last--) {
                if (*first > *last) {
                    int tmp = *first;
                    *first = *last;
                    *last = tmp;
                    break;
                }
            }

            for (; first < last; first++) {
                if (*first > *last) {
                    int tmp = *first;
                    *first = *last;
                    *last = tmp;
                    break;
                }
            }
        }

        sort(nums, f, first - 1);
        sort(nums, first + 1, l);
        return;
    }

    sort(nums, nums, (nums + numsSize - 1));

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != i)
            return i;
    }

    return numsSize;
}
