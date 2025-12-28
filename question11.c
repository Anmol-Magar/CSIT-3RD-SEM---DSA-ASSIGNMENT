//C program using function to find the sum of only those array elements which are divisible by 3 (using while loop).

#include <stdio.h>

int sumDivisibleBy3(int arr[], int n)
{
    int i = 0, sum = 0;
    while (i < n)
    {
        if (arr[i] % 3 == 0)
            sum = sum + arr[i];
        i++;
    }
    return sum;
}

int main()
{
    int arr[50], n, i = 0, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    result = sumDivisibleBy3(arr, n);

    printf("Sum of elements divisible by 3 = %d", result);

    return 0;
}
