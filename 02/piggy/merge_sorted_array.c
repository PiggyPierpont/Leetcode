#include<stdio.h>

#define TOTAL 10

void merge(int*, int, int*, int);

int main(void) {
    int nums1[TOTAL] = {1, 3, 6, 7};
    int nums2[3] = {2, 4, 9};

    merge(nums1, 4, nums2, 3);

    for (int i = 0; i < 7; i++)
        printf("%d ", nums1[i]);

    printf("\n");

    return 0;
}

void merge(int* nums1, int m, int* nums2, int n) {
    int i = m + n - 1;
    int j = m - 1;
    int k = n - 1;

    for (; i >= 0; i--)
        nums1[i] = (nums1[j] >= nums2[k] ? nums1[j--] : nums2[k--]);
}
