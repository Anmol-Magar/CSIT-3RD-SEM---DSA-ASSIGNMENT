//C program using function to read and display elements of an array (using while loop).

#include <stdio.h>

void readDisplay(int arr[], int n)
{
    int i = 0;

    while (i < n)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    printf("Array elements are:\n");
    while (i < n)
    {
        printf("%d ", arr[i]);
        i++;
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
