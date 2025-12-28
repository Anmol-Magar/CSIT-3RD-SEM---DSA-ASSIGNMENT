//C program using function to count even and odd numbers in an array.

#include <stdio.h>

void countEvenOdd(int arr[], int n, int *even, int *odd)
{
    int i;
    *even = 0;
    *odd = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main()
{
    int arr[50], n, i;
    int evenCount, oddCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("Even numbers count = %d\n", evenCount);
    printf("Odd numbers count = %d", oddCount);

    return 0;
}
