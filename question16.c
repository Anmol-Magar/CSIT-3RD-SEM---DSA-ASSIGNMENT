//C program using function to count even numbers in an array.

#include <stdio.h>

int countEven(int arr[], int n)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    int arr[50], n, i, evenCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    evenCount = countEven(arr, n);

    if (evenCount == 0)
        printf("No even number exists in the array");
    else
        printf("Number of even elements = %d", evenCount);

    return 0;
}
