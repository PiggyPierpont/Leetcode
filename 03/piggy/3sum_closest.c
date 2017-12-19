#include <stdio.h>

int threeSumClosest(int *, int , int);

int main(void) {
    int a[5] = {1, 1, -1, -1, 3};
    int result = threeSumClosest(a, 5, -1);

    printf("%d\n", result);

    return 0;
}

int threeSumClosest(int *nums, int numsSize, int target) {
    int abs(int x) {
        if (x >= 0)
            return x;
        else
            return -x;
    }

    int n = 0, tmp;
    int result = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = i + 1; j < numsSize - 1; j++) {
             for (int k = j + 1; k < numsSize; k++) {
                 tmp = nums[i] + nums[j] + nums[k];

                 if (abs((int)(tmp - target)) <= abs((int)(result - target))) {
                     if (tmp < result)
                         result = tmp;
                     result = tmp;
                 }
             }
        }
    }

    return result;
}
