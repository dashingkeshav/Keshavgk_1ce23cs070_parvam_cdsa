#include<stdio.h>
int main(){
    //runtime input
    int r;
    scanf("%d",&r);
    int c;
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r,i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}