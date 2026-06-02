#include<stdio.h>
int main(){
    int n,remainder,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int originaln=n;
    while(n>0){
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("The sum of digits of %d is %d",originaln,sum);
    return 0;
}