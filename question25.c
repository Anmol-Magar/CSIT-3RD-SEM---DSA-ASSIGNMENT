//C program using function to sort an array and then search a given element in the sorted array.
 
#include <stdio.h>

int sortAndSearch(int arr[], int n, int key)
{
    int i, j, temp;

    /* Sorting array in ascending order */
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* Searching the element */
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;   // return index if found
    }

    return -1;          // return -1 if not found
}

int main()
{
    int arr[100], n, i, key, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    index = sortAndSearch(arr, n, key);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    if(index != -1)
        printf("\nElement found at index position %d", index);
    else
        printf("\nElement not found");

    return 0;
}
