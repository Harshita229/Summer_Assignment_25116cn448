#include<stdio.h>
int palindrome(int n){
    int rem, rev=0;
    int originaln=n;
    while(n>0){
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(originaln==rev){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int x, res;
    printf("Enter the number:");
    scanf("%d",&x);
    res=palindrome(x);
    if(res==1){
        printf("%d is a palindrome number",x);
    }else{
        printf("%d is not a palindrome number",x);
    }
    return 0;
}