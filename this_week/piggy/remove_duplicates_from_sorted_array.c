#include<stdio.h>

int removeDuplicate(int [], int);

int main(void) {
    int a[8] = {1, 3, 2, 3, 4, 3, 5, 6};
    int length = removeDuplicate(a, 8);
    printf("length = %d\n", length);
    for (int i = 0; i < length; i++)
        printf("%d ",a[i]);

    return 0;
}

int removeDuplicate(int a[], int n) {
    int length = n;
    int i, j, k = 1;

    for (i = 1; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (a[i] == a[j])
                break;
        }

        if (i == j) {
            a[k++] = a[i];
        } else
            length--;
    }

    return length;
}
