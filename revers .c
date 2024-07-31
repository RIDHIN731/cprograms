#include<stdio.h>
void reverse_array(int arr[],int n){
    int temp,i,j;
    for(i=0,j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[i];
        arr[j]=temp;
    }
}
int main(){
    int arr[100],n,i;
    printf("enter the number of elements:");
    scanf("%d"&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("orginal array :\n");
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }

    printf("\n");
    
    reverse _array(arr,n);

    print ("reversed array:\n");
    for(i=0;i<n;i++){
        print("%d",arr[i]);
    }
print("\n");
return 0;
 }



