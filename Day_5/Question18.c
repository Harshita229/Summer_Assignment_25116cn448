#include<stdio.h>
int main(){
    int n,originaln,rem,sum=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    originaln=n;
    while(originaln>0){
        rem=originaln%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
           fact*=i;
        }
        sum+=fact;
        originaln/=10;
    }
    if(sum==n){
        printf("%d is a strong number.",n);
    }else{
        printf("%d is not a strong number.",n);
    }
    return 0;
}