//C program using function to swap the first and last elements of an array.

#include <stdio.h>

void swapFirstLast(int arr[], int n)
{
    int temp;

    if(n > 1)
    {
        temp = arr[0];
        arr[0] = arr[n - 1];
        arr[n - 1] = temp;
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    swapFirstLast(arr, n);

    printf("Array after swapping first and last elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
