//C program using function to reverse an array and then display the maximum element.

#include <stdio.h>

int reverseAndFindMax(int arr[], int n)
{
    int i, temp, max;

    /* Reverse the array */
    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    /* Find maximum element */
    max = arr[0];
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

    maxElement = reverseAndFindMax(arr, n);

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum element = %d", maxElement);

    return 0;
}
