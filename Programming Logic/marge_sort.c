#include <stdio.h>
int main()
{

    int arr[] = {5, 1, 3, 8, 2, 3, 9, 4};
    int left, right;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (size == 1)
    {
        printf("sorted Array: %d", arr[0]);
    }

    else
    {
        left = (size / 2) - 1;
        right = size - left - 1;
    }
}