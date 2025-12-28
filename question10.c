//C program using function to find the average of array elements (using for loop).

#include <stdio.h>

float averageArray(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return (float)sum / n;
}

int main()
{
    int arr[50], n, i;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    avg = averageArray(arr, n);

    printf("Average = %.2f", avg);

    return 0;
}
