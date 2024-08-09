#include<stdio.h>
int main(){
    int row,i,j;
    printf("enter the number of row");
    scanf("%d",&row);
    for(i=j;i<=row;i++){
    for(j=1;j<=row;j++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
