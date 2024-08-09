#include<stdio.h>
 struct lovePapper
 {
    int h;
    float b;
    float n;
    char e;

 };
int main(){
    struct lovePapper obj;
    obj.h=7;
    obj.b=8.3339;
    obj.n=9.0;
    obj.e='g';
printf("%d",obj.h);
printf("\n%f",obj.b);
printf("\n%lf",obj.n);
printf("\n%c",obj.e);
printf("\nlovePapper");
}