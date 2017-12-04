#include <stdio.h>

int threeSumClosest(int *, int , int);
int abs(int);

int main(void) {
    int a[4] = {-1, 2, 1, -4};
    int result = threeSumClosest(a, 4, 1);

    printf("%d\n", result);

    return 0;
}

int abs(int x) {
    if (x >= 0)
        return x;
    else
        return -x;
}

int threeSumClosest(int *nums, int numsSize, int target) {
    int max = 0, n = 0;
    int result;

    for (int i = numsSize - 2; i > 0; i--) {
        for (int j = i; j > 0; j--)
            max += j;
    }

    int a[max];

    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = i + 1; j < numsSize - 1; j++) {
             for (int k = j + 1; k < numsSize; k++) {
                 a[n++] = nums[i] + nums[j] + nums[k];
             }
        }
    }

    result = a[0];

    for (int i = 1; i < max; i++) {
        if (abs((int)(result - target)) > abs((int)(a[i] - target)))
            result = a[i];
    }

    return result;
}
