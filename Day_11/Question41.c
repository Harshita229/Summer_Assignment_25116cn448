#include<stdio.h>
int sum(int n1,int n2){
    return n1+n2;
}
int main(){
    int x,y,result;
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);
    result=sum(x,y);
    printf("The sum is %d",result);
    return 0;
}