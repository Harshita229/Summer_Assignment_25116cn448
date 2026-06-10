#include<stdio.h>
#include<math.h>
int main(){
    int num,originalnum,rem,result=0,n=0;
    printf("Enter an integer:");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0){
        originalnum/=10;
        n++;
    }
    originalnum=num;
    while(originalnum!=0){
        rem=originalnum%10;
        result+=round(pow(rem,n));
        originalnum/=10;
    }
    if(result==num){
        printf("%d is an Armstrong number.",num);
    }
    else{
        printf("%d is not an Armstrong number.",num);
    }
    return 0;
}