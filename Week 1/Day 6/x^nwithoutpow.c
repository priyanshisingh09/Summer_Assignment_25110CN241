//Program to calculate x^n without using pow() function.

#include <stdio.h>

int main()
{
    int x, n;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    printf("%lld", result);

    return 0;
}