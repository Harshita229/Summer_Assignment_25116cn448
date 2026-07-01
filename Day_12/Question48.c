#include<stdio.h>
int perfect(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(perfect(x)){
        printf("%d is a perfect number",x);
    }else{
        printf("%d is not a perfect number",x);
    }
    return 0;

}