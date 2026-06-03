#include<stdio.h>
int main(){
    int n,remainder;
    int product=1;
    printf("Enter an integer:");
    scanf("%d",&n);
    int originaln=n;
    while(n>0){
        remainder=n%10;
        product=product*remainder;
        n=n/10;
    }
    printf("The products of digits of %d is %d",originaln,product);
    return 0;
    
}