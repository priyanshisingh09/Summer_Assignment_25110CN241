#include <stdio.h>
int main(){
int n;
printf("enter the number of rows:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){    //for spaces
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("*");
    }
     for(int j=1;j<=i-1;j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}