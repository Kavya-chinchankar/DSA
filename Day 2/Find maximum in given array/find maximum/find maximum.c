#include<stdio.h>

int findMaximum(int arr[], int size)
{
    if (size <= 0)
    {
        printf("Invalid input\n");

        return -1;
    }

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,2,4,52,54,80};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = findMaximum(arr, size);

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
