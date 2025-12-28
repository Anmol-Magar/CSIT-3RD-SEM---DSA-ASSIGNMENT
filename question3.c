//C program using function to check whether a number is prime.

#include <stdio.h>

int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 0;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = isPrime(num);

    if (result == 1)
        printf("The number is Prime");
    else
        printf("The number is Not Prime");

    return 0;
}
