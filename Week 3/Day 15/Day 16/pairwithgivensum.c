// Pair With Given Sum

#include <stdio.h>

int main()
{
    int n, sum, found = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &sum);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("%d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No Pair Found");

    return 0;
}