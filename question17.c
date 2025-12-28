//C program using function to find the maximum element in an array.

#include <stdio.h>

int findMax(int arr[], int n)
{
    int i, max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr[50], n, i, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    maxElement = findMax(arr, n);

    printf("Maximum element = %d", maxElement);

    return 0;
}
