//C program to check whether an element is present in an array.

#include <stdio.h>

int main()
{
    int arr[50], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("Element is present in the array");
    else
        printf("Element is not present in the array");

    return 0;
}
