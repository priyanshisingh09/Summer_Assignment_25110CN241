// Missing Number in Array


  #include <stdio.h>

    int main()
{
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];
    int sum = 0, expectedSum;

    printf("Enter %d elements:\n", n - 1);

    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing element = %d\n", expectedSum - sum);

    return 0;
}
