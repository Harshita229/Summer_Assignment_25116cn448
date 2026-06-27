#include<stdio.h>
int checkprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i<n;i++){
        return 0;
    }
    return 1;
}
int main(){
    int x,prime;
    printf("Enter a number:");
    scanf("%d",&x);
    prime=checkprime(x);
    if(prime==1){
        printf("%d is prime number.",x);
    }else{
        printf("%d is not a prime number.",x);
    }
    return 0;
}

