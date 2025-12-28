//C program using function to sort an array in ascending order and display only unique elements.

#include <stdio.h>

void sortAndDisplayUnique(int arr[], int n)
{
    int i, j, temp;

    /* Sorting the array in ascending order */
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    /* Display unique elements */
    printf("Unique elements in sorted array:\n");
    printf("%d ", arr[0]);

    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    sortAndDisplayUnique(arr, n);

    return 0;
}
