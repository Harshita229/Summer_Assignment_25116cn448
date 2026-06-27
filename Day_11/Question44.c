#include<stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int x,res;
    printf("Enter a number:");
    scanf("%d",&x);
    res=factorial(x);
    printf("The factoral of %d is %d",x,res);
    return 0;
}
