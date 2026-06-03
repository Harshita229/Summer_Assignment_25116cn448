#include<stdio.h>
int main(){
    int n,remainder;
    int reversednum=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    int originaln=n;
    while(n>0){
        remainder=n%10;
        reversednum=(reversednum*10)+remainder;
        n=n/10;
    }
    if(originaln==reversednum){
        printf("%d is a Palindrome Number.",originaln);
    }else{
        printf("%d is not a Palindrome Number.",originaln);
    }
    return 0;
}