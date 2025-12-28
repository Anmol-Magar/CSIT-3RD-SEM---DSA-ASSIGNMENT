//C program using function to search an element in an array and display the index position(s) where it occurs.

#include <stdio.h>

void searchElement(int arr[], int n, int key)
{
    int i, found = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index position %d\n", i);
            found = 1;
        }
    }

    if (found == 0)
        printf("Element not found in the array");
}

int main()
{
    int arr[50], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    searchElement(arr, n, key);

    return 0;
}
