//C program using function to find the second largest element in an array (using while loop).

#include <stdio.h>

int secondLargest(int arr[], int n)
{
    int i = 1;
    int largest, second;

    largest = second = arr[0];

    while (i < n)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second)
        {
            second = arr[i];
        }
        i++;
    }
    return second;
}

int main()
{
    int arr[50], n, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Second largest element not possible");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    result = secondLargest(arr, n);

    printf("Second largest element = %d", result);

    return 0;
}
