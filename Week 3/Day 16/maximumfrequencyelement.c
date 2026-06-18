// Maximum Frequency Element

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the numbers of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxFreq = 0, element;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxFreq)
        {
            maxFreq = count;
            element = arr[i];
        }
    }
    printf("The maximum frequency element is:");
    printf("%d", element);

    return 0;
}