#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%4!=0){
        printf("true");
    }
    else{
        printf("false");
    }
}