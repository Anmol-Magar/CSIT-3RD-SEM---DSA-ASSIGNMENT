//C program using function to find the sum of array elements (using while loop).

#include <stdio.h>

int sumArray(int arr[], int n)
{
    int i = 0, sum = 0;
    while (i < n)
    {
        sum = sum + arr[i];
        i++;
    }
    return sum;
}

int main()
{
    int arr[50], n, result, i = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    while (i < n)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    result = sumArray(arr, n);

    printf("Sum of array elements = %d", result);

    return 0;
}
