#include<stdio.h>
void fibonacci(int n){
    int t1=0,t2=1;
    int nextterm;
    printf("Fibonacci Series:");
    for(int i=1;i<=n;i++){
        printf("%d",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    printf("\n");
}
int main(){
    int x;
    printf("Enter the number of terms:");
    scanf("%d",&x);
    fibonacci(x);
    return 0;
}
