//C program using function to find the sum of array elements (using for loop).

#include <stdio.h>

int sumArray(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[50], n, result, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    result = sumArray(arr, n);

    printf("Sum of array elements = %d", result);

    return 0;
}
