// Program to find Frequency of an Element in an Array

#include <stdio.h>

int main()
{
    int a[100], n, i, key, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
            count++;
    }

    printf("Frequency of %d = %d", key, count);

    return 0;
}