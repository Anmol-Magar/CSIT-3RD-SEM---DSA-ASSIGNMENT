//C program using a function to delete an element from a given position in an array by shifting elements.

#include <stdio.h>

void deleteElement(int arr[], int *n, int pos)
{
    int i;

    if(pos < 0 || pos >= *n)
        return;

    for(i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main()
{
    int arr[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    deleteElement(arr, &n, pos);

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
