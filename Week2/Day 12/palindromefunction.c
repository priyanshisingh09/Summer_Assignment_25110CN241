//Function to check if a number is palindrome or not.

#include <stdio.h>

int palindrome(int num)
{   int rev=0, rem, temp ;


    printf("Enter a number: ");
    scanf("%d",&num);
    
    temp=num;
    
    while(num>0)
    {   rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==temp)
    printf("The given number is palindrome");
    else
    printf("The given number is not a palindrome number");
    
}

int main()
{ int number;
printf("Program to check if given number is palindrome or not\n");
palindrome(number);

return 0;}