#include<stdio.h>

int removeDuplicates(int [], int);

int main(void) {
    int a[6] = {1, 1, 1, 2, 2, 3};

    int length = removeDuplicates(a, 6);

    printf("length = %d\n", length);
    for (int i = 0; i < length; i++)
        printf("%d ", a[i]);

    printf("\n");

    return 0;
}

int removeDuplicates(int a[], int n) {
    int duplicates = 0;
    int i = 0, j = 1;
    int length = n;

    for (; j < n; j++) {
        if (duplicates == 0) {
            if (a[i] == a[j])
                duplicates = 1;

            a[++i] = a[j];
        } else if (duplicates == 1) {
            for (; j < n; j++) {
                if (a[i] != a[j])
                    break;

                length--;
            }

            duplicates = 0;
            a[++i] = a[j];
        }
    }

    return length;
}
