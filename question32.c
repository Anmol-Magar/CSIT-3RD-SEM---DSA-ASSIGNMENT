//C program using function and while loop to perform multiple operations on an array.

#include <stdio.h>

int countEven(int arr[], int n)
{
    int i = 0, count = 0;
    while(i < n)
    {
        if(arr[i] % 2 == 0)
            count++;
        i++;
    }
    return count;
}

void replaceOddWithZero(int arr[], int n)
{
    int i = 0;
    while(i < n)
    {
        if(arr[i] % 2 != 0)
            arr[i] = 0;
        i++;
    }
}

void displayArray(int arr[], int n)
{
    int i = 0;
    while(i < n)
    {
        printf("%d ", arr[i]);
        i++;
    }
}

int main()
{
    int arr[100], n, i = 0, evenCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    while(i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    evenCount = countEven(arr, n);
    replaceOddWithZero(arr, n);

    printf("Even numbers count = %d\n", evenCount);
    printf("Modified array:\n");
    displayArray(arr, n);

    return 0;
}
