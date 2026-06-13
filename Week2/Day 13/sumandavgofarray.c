// Program to Find Sum and Average of Array

#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}