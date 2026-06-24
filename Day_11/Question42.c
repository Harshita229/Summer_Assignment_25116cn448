#include<stdio.h>
int max(int n1,int n2){
    if(n1>n2){
        return n1;
    }else{
        return n2;
    }
}
int main(){
    int x,y,result;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    result=max(x,y);
    printf("The maxmimum number is %d",result);
    return 0;
}