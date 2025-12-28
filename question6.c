//C program using function to read and display elements of an array (using for loop).

#include <stdio.h>

void readDisplay(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[50], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    readDisplay(arr, n);

    return 0;
}
