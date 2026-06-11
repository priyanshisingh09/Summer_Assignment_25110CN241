#include<stdio.h>
int main(){
    char ch=65;
    for(int i=1;i<=5;i++){             
        for(int j=1;j<=i;j++){         
            printf("%c",ch);
             
    }
      printf("\n");
       ch++;
}
return 0;
}