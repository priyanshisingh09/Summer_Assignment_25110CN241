//Function to check whether a given number is Armstrong number or not.

#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, rem, temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    return temp == sum;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}