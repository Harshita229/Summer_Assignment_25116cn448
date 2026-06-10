#include<stdio.h>
#include<math.h>
int main(){
    int start,end,rem,num,originalnum,result,n;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("Armstrong numbers between %d and %d are:",start,end);
    for(int i=start;i<=end;i++){
        num=i;
        originalnum=i;
        n=0;
        result=0;
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
            printf("%d",num);
        }
    }
    return 0;

}