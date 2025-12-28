//C program using separate functions to perform multiple operations on the same array.

#include <stdio.h>

int findSum(int arr[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int findMax(int arr[], int n)
{
    int i, max = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

void countEvenOdd(int arr[], int n, int *even, int *odd)
{
    int i;
    *even = 0;
    *odd = 0;

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main()
{
    int arr[100], n, i;
    int sum, max, even, odd;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sum = findSum(arr, n);
    max = findMax(arr, n);
    countEvenOdd(arr, n, &even, &odd);

    printf("Sum of array elements = %d\n", sum);
    printf("Maximum element = %d\n", max);
    printf("Even count = %d\n", even);
    printf("Odd count = %d\n", odd);

    return 0;
}
