// Remove Duplicates From Array

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of element:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%d ", arr[i]);
    }

    return 0;
}