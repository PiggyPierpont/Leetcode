#include <stdio.h>

int hammingWeight(int);

int main(void) {
    int n =11;
    printf("%d\n", hammingWeight(n));

    return 0;
}

int hammingWeight(int n) {
    int counter = 0;
    for (; n; counter++)
        n &= (n - 1);

    return counter;
}
