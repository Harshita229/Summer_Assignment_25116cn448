#include<stdio.h>
int main(){
    int start,end,flag;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("The prime numbers between %d and %d are:",start,end);
    for(int num=start;num<=end;num++){
        if(num<=1){
            continue;
        }
        flag=1;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d",num);
            
        }
    }
    printf("\n");
    return 0;
}