#include<stdio.h>

int removeDuplicate(int [], int);

int main(void) {
    int a[8] = {1, 3, 3, 3, 4, 3, 5, 6};
    int length = removeDuplicate(a, 8);
    printf("length = %d\n", length);
    for (int i = 0; i < length; i++)
        printf("%d ",a[i]);

    return 0;
}

int removeDuplicate(int a[], int n) {
    int length = n;
    int i = 0, j = 1;

    for (; j < n; j++) {
        while (a[i] == a[j] && j < n) {
            j++;
            length--;
        }

        if (j >= n)
            break;

        a[++i] = a[j];
    }

    return length;
}
