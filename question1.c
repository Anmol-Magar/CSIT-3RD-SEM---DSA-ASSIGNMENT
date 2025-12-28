//C program using function to calculate the power of a number (aⁿ)

#include <stdio.h>

int power(int a, int n) {
    int i, result = 1;
    for (i = 1; i <= n; i++) {
        result = result * a;
    }
    return result;
}

int main() {
    int a, n, ans;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter power (n): ");
    scanf("%d", &n);

    ans = power(a, n);

    printf("Result = %d", ans);

    return 0;
}
