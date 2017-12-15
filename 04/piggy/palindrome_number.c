#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int);

int main(void) {
    int n;
    printf("please enter a number:");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("true!\n");
    else
        printf("false!\n");

    return 0;
}

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int tmp = x;
    int i = 1;
    tmp /= 10;

    while (tmp != 0) {
        tmp /= 10;
        i++;
    }

    int a[i];

    for (int j = i - 1; j >= 0; j--) {
        a[j] = x % 10;
        x /= 10;
    }

    for (int j = 0, k = i - 1; j <= k; j++, k--) {
        printf("%d %d\n", a[j], a[k]);
        if (a[j] != a[k])
            return false;
    }

    return true;
}
