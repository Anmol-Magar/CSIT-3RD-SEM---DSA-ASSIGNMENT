//C program using function to find sum of digits of a number

#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sumOfDigits(num);

    printf("Sum of digits = %d", result);

    return 0;
}
