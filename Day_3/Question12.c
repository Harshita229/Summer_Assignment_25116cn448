#include<stdio.h>
int main(){
    int n1,n2,gcd,lcm,rem;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);
    int originaln1=n1;
    int originaln2=n2;
    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(originaln1*originaln2)/gcd;
    printf("The LCM of %d and %d is %d\n",originaln1,originaln2,lcm);
    return 0;
}