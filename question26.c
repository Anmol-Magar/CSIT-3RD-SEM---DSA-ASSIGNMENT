//C program using a function to replace all negative elements in an array with 0 (in‑place).

#include <stdio.h>

void replaceNegative(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            arr[i] = 0;
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

    replaceNegative(arr, n);

    printf("Modified array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
