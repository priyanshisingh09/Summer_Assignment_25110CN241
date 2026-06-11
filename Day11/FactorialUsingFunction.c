#include<stdio.h>
    int Factorial(int n)
    {
    int i, fact = 1;
    for(i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial = %d", Factorial(num));

    return 0;
}
