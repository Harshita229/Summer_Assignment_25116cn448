#include<stdio.h>
int main(){
    int n1,n2,rem;
    printf("Enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
    int originaln1=n1;
    int originaln2=n2;
    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    printf("The GCD of %d and %d is %d\n",originaln1,originaln2,n1);
    return 0;
}