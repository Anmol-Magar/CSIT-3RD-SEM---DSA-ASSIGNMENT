//C program using function to find GCD (HCF) of two numbers.

#include <stdio.h>

int findGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main()
{
    int a, b, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    gcd = findGCD(a, b);

    printf("GCD = %d", gcd);

    return 0;
}
