#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int);

int main(void) {
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    if (isPowerOfTwo(n))
        printf("is a power of two\n");
    else
        printf("is not a power of two\n");

    return 0;
}

bool isPowerOfTwo(int n) {
    while (n > 1) {
        if ((n % 2) == 0)
            n /= 2;
        else
            return false;
    }

    if (n == 1)
        return true;
    else
        return false;
}
