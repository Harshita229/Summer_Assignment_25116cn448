#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("%d is a perfect number.",sum);
    }else{
        printf("%d is not a perfect number.",sum);
    }
    return 0;
}