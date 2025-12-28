//C program using function and while loop to perform multiple operations on an array.

#include <stdio.h>

int sumEven(int arr[], int n)
{
    int i = 0, sum = 0;
    while(i < n)
    {
        if(arr[i] % 2 == 0)
            sum += arr[i];
        i++;
    }
    return sum;
}

int findMax(int arr[], int n)
{
    int i = 1, max = arr[0];
    while(i < n)
    {
        if(arr[i] > max)
            max = arr[i];
        i++;
    }
    return max;
}

int searchElement(int arr[], int n, int key)
{
    int i = 0;
    while(i < n)
    {
        if(arr[i] == key)
            return i;   // element found
        i++;
    }
    return -1;          // not found
}

void sortArray(int arr[], int n)
{
    int i = 0, j, temp;
    while(i < n - 1)
    {
        j = i + 1;
        while(j < n)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main()
{
    int arr[100], n, i = 0, key;
    int sum, max, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    while(i < n)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    sum = sumEven(arr, n);
    max = findMax(arr, n);

    printf("Enter element to search: ");
    scanf("%d", &key);

    index = searchElement(arr, n, key);
    sortArray(arr, n);

    printf("Sum of even numbers = %d\n", sum);
    printf("Maximum element = %d\n", max);

    if(index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
