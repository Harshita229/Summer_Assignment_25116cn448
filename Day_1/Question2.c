#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to print its multiplication table:");
    scanf("%d",&num);
    printf("The multiplication table for %d is:",num);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;

}