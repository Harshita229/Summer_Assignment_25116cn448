#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter positive number:");
    scanf("%d",&n);
    if(n<1){
        printf("Enter a valid natural number.");
    }
    else{
        for(int i=1;i<=n;i++)
        sum+=i;
    }
    printf("The sum of first N natural number is %d",sum);

    return 0;
}