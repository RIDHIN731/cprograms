#include <stdio.h>
void rotatearray(int arr[],int n,int k){
    k=k%n;
    int temp[k], i;
    for(i=0;i<k;i++)
    temp[i]=arr[n-k+i];
    for(i=n-1;i>=k;i--)
    arr[i]=arr[i-k];
    for(i=0;i<k;i++)
    arr[i]=temp[i];
}
void printfarray(int arr[],int n){
    int i;
    for (i=0;i,n;i++)
    printf("%d",arr[i]);
    printf("\n");
}
int main(){
    int arr[100],n,k,i;
    printf("enter the number of element");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter the number of positions to rotate:");
    scanf("%d",&k);
    printf("orginal array:");
    printfarray(arr,n);
    rotatearray(arr,n,k);
    printf("rotate array:");
    printfarray(arr,n);
    return 0;
}






