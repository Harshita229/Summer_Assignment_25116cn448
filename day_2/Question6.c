#include<stdio.h>
int main(){
    int n,remainder,rev=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    int originaln=n;
    while(n>0){
        remainder=n%10;
        rev=(rev*10)+remainder;
        n=n/10;
    }
    printf("On reversing %d we get %d",originaln,rev);

    return 0;
}