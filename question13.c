//C program using function to count positive, negative, and zero elements in an array.

#include <stdio.h>

void countPNZ(int arr[], int n, int *pos, int *neg, int *zero)
{
    int i;
    *pos = 0;
    *neg = 0;
    *zero = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            (*pos)++;
        else if (arr[i] < 0)
            (*neg)++;
        else
            (*zero)++;
    }
}

int main()
{
    int arr[50], n, i;
    int posCount, negCount, zeroCount;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    countPNZ(arr, n, &posCount, &negCount, &zeroCount);

    printf("Positive count = %d\n", posCount);
    printf("Negative count = %d\n", negCount);
    printf("Zero count = %d", zeroCount);

    return 0;
}
