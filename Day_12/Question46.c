#include<stdio.h>
int Armstrong(int n){
    int rem, sum=0;
    int originaln=n;
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(originaln==sum){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int x,res;
    printf("Enter a number:");
    scanf("%d",&x);
    res=Armstrong(x);
    if(res==1){
        printf("%d is an armstrong number.",x);
    }else{
        printf("%d is not an armstrong number",x);
    }
    return 0;
}