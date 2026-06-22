#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=(n-i);space++){
            printf(" ");
        }
        char ch='A';
        for(int j=1;j<=(2*i-1);j++){
            printf("%c",ch);
            if(j<i){
                ch++;
            }else{
                ch--;
            }
        }
        printf("\n");
    }
    return 0;
}