//C program using functions to find sum of even elements and product of odd elements in an array.

#include <stdio.h>

int sumEven(int arr[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int productOdd(int arr[], int n)
{
    int i, product = 1, found = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            product *= arr[i];
            found = 1;
        }
    }

    if(found == 0)
        return 0;   // no odd elements
    else
        return product;
}

int main()
{
    int arr[100], n, i;
    int evenSum, oddProduct;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    evenSum = sumEven(arr, n);
    oddProduct = productOdd(arr, n);

    printf("Sum of even elements = %d\n", evenSum);

    if(oddProduct == 0)
        printf("No odd elements found\n");
    else
        printf("Product of odd elements = %d\n", oddProduct);

    return 0;
}
