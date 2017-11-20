#include<stdio.h>
#include<malloc.h>

int mult10(int);
int* plus_one(int [], int, int*);

int main(void) {
    int a[2] = {9, 9};
    int* result = plus_one(a, 2);

    free(result);
    return 0;
}

int* plus_one(int a[], int n, int* resultSize) {
    int sum = 0;

    for (int i = n - 1, j = 0; i >= 0; i--, j++) 
        sum += a[i] * mult10(j);

    sum += 1;

    *resultSize = 0;
    for (int i = sum; i != 0; i /= 10, (*resultSize)++) ;

    int* result = malloc(*resultSize * sizeof(int));

    for (int i = *resultSize - 1; i >= 0; i--) {
        result[i] = sum % 10;
        sum /= 10;
    }

    return result;
}

int mult10(int n) {
    int sum = 10;

    if (n == 0)
        return 1;

    for (int i = 1; i < n; i++)
        sum *= 10;

    return sum;
}
