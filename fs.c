#include<stdio.h>
int main(){
    int n,t1=0,t2=1,nextterm;
    print("enter the num of term:");
    for(int i=1;i<=n;++i){
        print("%d,",t1);
        nextterm=t1=t2;
        t1=t2;
        t2=nextterm;
    }
    return 0;
}